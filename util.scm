(define-module util
  (use util.match)
  (use sxml.tools)
  (use sxml.sxpath)
  (use srfi-1)
  (use srfi-14)
  (use srfi-27)
  (export
   ccc-sxpath
   if-ccc-sxpath
   content-car-sxpath
   sxml:car-content
   sxml:change!
   sxml:content-push!
   node-all
   make-sxpath-query
   sxpath:name

   dprint
   list-copy-deep
   match1
   match-lambda1
   values-map
   ))
(select-module util)

(define-syntax match1
  (syntax-rules ()
    [(_ obj pat th)
     (match1 obj pat th (undefined))]

    [(_ obj pat th el)
     (match obj
       [pat  th]
       [else el])]))

(define-syntax match-lambda1
  (syntax-rules ()
    [(_ pat body ...)
     (match-lambda [pat body ...])]))

(define (values-map proc . lists)
  (let loop ([res '()] [lists lists])
    (if (any null? lists)
        (apply values (apply zip (reverse res)))

        (loop
         (cons (values->list (apply proc (map car lists))) res)
         (map cdr lists)))))

(define (list-copy-deep obj)
  (if (list? obj)
      (list-copy (map list-copy-deep obj))
      obj))

(define (sxml:car-content sxml)
  (car (sxml:content sxml)))

(define (sxml:change! obj new)
  (sxml:change-name!     obj (sxml:name      new))
  (sxml:change-attrlist! obj (sxml:attr-list new))
  (sxml:change-content!  obj (sxml:content   new)))

(define-syntax sxml:content-push!
  (syntax-rules ()
    [(_ place item)
     (sxml:change-content! place (cons item (sxml:content place)))]
    ))

(define (make-sxpath-query pred?)
  (lambda (nodeset . rest)
    ((sxml:filter pred?) nodeset)))

(define (sxpath:name name)
  (make-sxpath-query (ntype?? name)))

;; node-closure U node-self
;;
;;  (node-all (ntype?? 'Var)) == (sxpath `(// ,(sxpath:name 'Var)))
;;
(define (node-all test-pred?)
  (node-or (node-self test-pred?) (node-closure test-pred?)))

(define (dprint obj)
  (let1 eport (current-error-port)
    (write obj eport)
    (newline eport)))

(define-syntax x-sxpath
  (syntax-rules ()
    [(_ x path) (^[sxml] (x ((sxpath path) sxml)))]))

(define (content-car-sxpath path)
  (x-sxpath (.$ sxml:content car) path))

;; sxpath -> car -> sxml:content -> car
(define (ccc-sxpath path)
  (x-sxpath (.$ sxml:car-content car) path))

(define-syntax if-pair-x
  (syntax-rules ()
    [(_ x lst) (and (pair? lst) (x lst))]))

(define-syntax if-car
  (syntax-rules ()
    [(_ lst) (if-pair-x car lst)]))

(define-syntax if-cdr
  (syntax-rules ()
    [(_ lst) (if-pair-x cdr lst)]))

(define (if-ccc-sxpath path)
  (x-sxpath
   (^[x]
     (and-let* ([c   (if-car x)]
                [cc  (sxml:content c)]
                [ccc (if-car cc)])
       ccc))
   path))
