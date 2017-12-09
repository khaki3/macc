# 1 "main.c"
# 0 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include/_c_macros.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/_c_macros.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include/_c_macros.h" <System_Header>
 
# 21 "/opt/pgi/linux86-64/17.10/include/_c_macros.h" <System_Header>
 
# 1 "main.c"
# 4 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
 
# 27 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
typedef int omp_lock_t ;
# 29 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
 
# 31 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
struct omp_nest_lock {
  omp_lock_t act ; 
  short cnt ; 
  short tid ; 
} ;
# 37 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
typedef struct omp_nest_lock omp_nest_lock_t ;
# 41 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
typedef enum omp_sched_t {
  omp_sched_static = 1 ,
  omp_sched_dynamic = 2 ,
  omp_sched_guided = 3 ,
  omp_sched_auto = 4
} omp_sched_t ;
# 52 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
extern void omp_set_num_threads ( int n ) ;
extern int omp_get_thread_num ( void ) ;
extern int omp_get_num_procs ( void ) ;
extern int omp_get_num_threads ( void ) ;
extern int omp_get_max_threads ( void ) ;
extern int omp_in_parallel ( void ) ;
extern int omp_in_final ( void ) ;
extern void omp_set_dynamic ( int n ) ;
extern int omp_get_dynamic ( void ) ;
extern void omp_set_nested ( int n ) ;
extern int omp_get_nested ( void ) ;
extern void omp_init_lock ( omp_lock_t * s ) ;
extern void omp_destroy_lock ( omp_lock_t * s ) ;
extern void omp_set_lock ( omp_lock_t * s ) ;
extern void omp_unset_lock ( omp_lock_t * s ) ;
extern int omp_test_lock ( omp_lock_t * s ) ;
extern void omp_init_nest_lock ( omp_nest_lock_t * s ) ;
extern void omp_destroy_nest_lock ( omp_nest_lock_t * s ) ;
extern void omp_set_nest_lock ( omp_nest_lock_t * s ) ;
extern void omp_unset_nest_lock ( omp_nest_lock_t * s ) ;
extern int omp_test_nest_lock ( omp_nest_lock_t * s ) ;
extern double omp_get_wtime ( void ) ;
extern double omp_get_wtick ( void ) ;
extern long omp_get_stack_size ( void ) ;
extern void omp_set_stack_size ( long l ) ;
extern int omp_get_thread_limit ( void ) ;
extern void omp_set_max_active_levels ( int ) ;
extern int omp_get_max_active_levels ( void ) ;
extern int omp_get_level ( void ) ;
extern int omp_get_ancestor_thread_num ( int ) ;
extern int omp_get_team_size ( int ) ;
extern int omp_get_active_level ( void ) ;
extern void omp_set_schedule ( omp_sched_t , int ) ;
extern void omp_get_schedule ( omp_sched_t * , int * ) ;
extern int omp_get_initial_device ( ) ;
extern int omp_get_default_device ( ) ;
extern void omp_set_default_device ( int ) ;
# 89 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 19 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
# 3 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
# 1 "/usr/include/stdlib.h" <System_Header>
# 16 "/usr/include/stdlib.h" <System_Header>
 
# 20 "/usr/include/stdlib.h" <System_Header>
 
# 24 "/usr/include/stdlib.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 93 "/usr/include/features.h" <System_Header>
 
# 96 "/usr/include/features.h" <System_Header>
 
# 123 "/usr/include/features.h" <System_Header>
 
# 134 "/usr/include/features.h" <System_Header>
 
# 145 "/usr/include/features.h" <System_Header>
 
# 156 "/usr/include/features.h" <System_Header>
 
# 181 "/usr/include/features.h" <System_Header>
 
# 191 "/usr/include/features.h" <System_Header>
 
# 197 "/usr/include/features.h" <System_Header>
 
# 203 "/usr/include/features.h" <System_Header>
 
# 212 "/usr/include/features.h" <System_Header>
 
# 220 "/usr/include/features.h" <System_Header>
 
# 344 "/usr/include/features.h" <System_Header>
 
# 345 "/usr/include/features.h" <System_Header>
# 1 "/usr/include/stdc-predef.h" <System_Header>
# 16 "/usr/include/stdc-predef.h" <System_Header>
 
# 27 "/usr/include/stdc-predef.h" <System_Header>
 
# 34 "/usr/include/stdc-predef.h" <System_Header>
 
# 54 "/usr/include/stdc-predef.h" <System_Header>
 
# 57 "/usr/include/stdc-predef.h" <System_Header>
 
# 346 "/usr/include/features.h" <System_Header>
# 352 "/usr/include/features.h" <System_Header>
 
# 357 "/usr/include/features.h" <System_Header>
 
# 364 "/usr/include/features.h" <System_Header>
 
# 367 "/usr/include/features.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/sys/cdefs.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/sys/cdefs.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include-gcc50/sys/cdefs.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
# 16 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 28 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 33 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 81 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 86 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 91 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 96 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 110 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 121 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 131 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 147 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 173 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 202 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 209 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 217 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 227 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 234 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 243 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 252 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 264 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 274 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 283 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 291 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 305 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 313 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 328 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 347 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 356 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 361 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 368 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
 
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" <System_Header>
# 15 "/opt/pgi/linux86-64/17.10/include-gcc50/sys/cdefs.h" <System_Header>
# 18 "/opt/pgi/linux86-64/17.10/include-gcc50/sys/cdefs.h" <System_Header>
 
# 31 "/opt/pgi/linux86-64/17.10/include-gcc50/sys/cdefs.h" <System_Header>
 
# 45 "/opt/pgi/linux86-64/17.10/include-gcc50/sys/cdefs.h" <System_Header>
 
# 368 "/usr/include/features.h" <System_Header>
# 371 "/usr/include/features.h" <System_Header>
 
# 379 "/usr/include/features.h" <System_Header>
 
# 390 "/usr/include/features.h" <System_Header>
 
# 391 "/usr/include/features.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" <System_Header>
# 3 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" <System_Header>
 
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" <System_Header>
# 4 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" <System_Header>
 
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" <System_Header>
# 392 "/usr/include/features.h" <System_Header>
# 25 "/usr/include/stdlib.h" <System_Header>
# 26 "/usr/include/stdlib.h" <System_Header>
 
# 32 "/usr/include/stdlib.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 26 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 47 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 50 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 54 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 62 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 93 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 103 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 121 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 123 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 126 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
typedef unsigned long int size_t ;
# 245 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 248 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 292 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 312 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 328 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
typedef int wchar_t ;
# 363 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
 
 
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 33 "/usr/include/stdlib.h" <System_Header>
# 40 "/usr/include/stdlib.h" <System_Header>
 
# 41 "/usr/include/stdlib.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" <System_Header>
 
# 24 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" <System_Header>
 
# 28 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" <System_Header>
 
# 39 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" <System_Header>
 
# 45 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" <System_Header>
 
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" <System_Header>
typedef enum
{
  P_ALL ,	
  P_PID ,	
  P_PGID	
} idtype_t ;
# 42 "/usr/include/stdlib.h" <System_Header>
# 42 "/usr/include/stdlib.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 24 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 27 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 30 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 33 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 36 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 39 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 43 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 47 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 52 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 55 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
 
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
# 1 "/usr/include/endian.h" <System_Header>
# 16 "/usr/include/endian.h" <System_Header>
 
# 21 "/usr/include/endian.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 22 "/usr/include/endian.h" <System_Header>
# 29 "/usr/include/endian.h" <System_Header>
 
# 35 "/usr/include/endian.h" <System_Header>
 
# 36 "/usr/include/endian.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" <System_Header>
 
# 37 "/usr/include/endian.h" <System_Header>
# 39 "/usr/include/endian.h" <System_Header>
 
# 59 "/usr/include/endian.h" <System_Header>
 
# 60 "/usr/include/endian.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
 
# 26 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 26 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef unsigned char __u_char ;
typedef unsigned short int __u_short ;
typedef unsigned int __u_int ;
typedef unsigned long int __u_long ;
# 35 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef signed char __int8_t ;
typedef unsigned char __uint8_t ;
typedef signed short int __int16_t ;
typedef unsigned short int __uint16_t ;
typedef signed int __int32_t ;
typedef unsigned int __uint32_t ;
# 43 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
typedef signed long int __int64_t ;
typedef unsigned long int __uint64_t ;
# 50 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 52 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
typedef long int __quad_t ;
typedef unsigned long int __u_quad_t ;
# 87 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 116 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" <System_Header>
 
# 27 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" <System_Header>
 
# 29 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" <System_Header>
 
# 79 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" <System_Header>
 
# 82 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" <System_Header>
 
# 86 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" <System_Header>
 
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
typedef unsigned long int __dev_t ;	
typedef unsigned int __uid_t ;	
typedef unsigned int __gid_t ;	
typedef unsigned long int __ino_t ;	
typedef unsigned long int __ino64_t ;	
typedef unsigned int __mode_t ;	
typedef unsigned long int __nlink_t ;	
typedef long int __off_t ;	
typedef long int __off64_t ;	
typedef int __pid_t ;	
typedef struct { int __val [ 2 ] ; } __fsid_t ;	
typedef long int __clock_t ;	
typedef unsigned long int __rlim_t ;	
typedef unsigned long int __rlim64_t ;	
typedef unsigned int __id_t ;	
typedef long int __time_t ;	
typedef unsigned int __useconds_t ; 
typedef long int __suseconds_t ; 
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
typedef int __daddr_t ;	
typedef int __key_t ;	
# 146 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef int __clockid_t ;
# 149 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef void * __timer_t ;
# 152 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef long int __blksize_t ;
# 155 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 157 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef long int __blkcnt_t ;
typedef long int __blkcnt64_t ;
# 161 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef unsigned long int __fsblkcnt_t ;
typedef unsigned long int __fsblkcnt64_t ;
# 165 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef unsigned long int __fsfilcnt_t ;
typedef unsigned long int __fsfilcnt64_t ;
# 169 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef long int __fsword_t ;
# 172 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
typedef long int __ssize_t ; 
# 174 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef long int __syscall_slong_t ;
 
typedef unsigned long int __syscall_ulong_t ;
# 180 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef __off64_t __loff_t ;	
typedef __quad_t * __qaddr_t ;
typedef char * __caddr_t ;
# 185 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef long int __intptr_t ;
# 188 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
typedef unsigned int __socklen_t ;
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
# 30 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
 
# 34 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
 
# 35 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" <System_Header>
 
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" <System_Header>
static unsigned short int
__bswap_16 ( unsigned short int __bsx )
{
  return ( ( unsigned short int ) ( ( ( ( __bsx ) >> 8 ) & 0xff ) | ( ( ( __bsx ) & 0xff ) << 8 ) ) ) ;
}
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
# 37 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
 
# 87 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
static unsigned int
__bswap_32 ( unsigned int __bsx )
{
  return ( ( ( ( __bsx ) & 0xff000000 ) >> 24 ) | ( ( ( __bsx ) & 0x00ff0000 ) >> 8 ) | ( ( ( __bsx ) & 0x0000ff00 ) << 8 ) | ( ( ( __bsx ) & 0x000000ff ) << 24 ) ) ;
}
# 148 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" <System_Header>
static __uint64_t
__bswap_64 ( __uint64_t __bsx )
{
  return ( ( ( ( __bsx ) & 0xff00000000000000ull ) >> 56 ) | ( ( ( __bsx ) & 0x00ff000000000000ull ) >> 40 ) | ( ( ( __bsx ) & 0x0000ff0000000000ull ) >> 24 ) | ( ( ( __bsx ) & 0x000000ff00000000ull ) >> 8 ) | ( ( ( __bsx ) & 0x00000000ff000000ull ) << 8 ) | ( ( ( __bsx ) & 0x0000000000ff0000ull ) << 24 ) | ( ( ( __bsx ) & 0x000000000000ff00ull ) << 40 ) | ( ( ( __bsx ) & 0x00000000000000ffull ) << 56 ) ) ;
}
# 61 "/usr/include/endian.h" <System_Header>
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
union wait
  {
    int w_status ;
    struct
      {
# 72 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
	unsigned int __w_termsig : 7 ; 
	unsigned int __w_coredump : 1 ; 
	unsigned int __w_retcode : 8 ; 
	unsigned int : 16 ;
# 83 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
      } __wait_terminated ;
    struct
      {
# 87 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
	unsigned int __w_stopval : 8 ; 
	unsigned int __w_stopsig : 8 ; 
	unsigned int : 16 ;
# 96 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" <System_Header>
      } __wait_stopped ;
  } ;
# 43 "/usr/include/stdlib.h" <System_Header>
# 47 "/usr/include/stdlib.h" <System_Header>
 
# 60 "/usr/include/stdlib.h" <System_Header>
 
# 83 "/usr/include/stdlib.h" <System_Header>
 
# 96 "/usr/include/stdlib.h" <System_Header>
 
typedef struct
  {
    int quot ;	
    int rem ;	
  } div_t ;
# 103 "/usr/include/stdlib.h" <System_Header>
 
# 105 "/usr/include/stdlib.h" <System_Header>
typedef struct
  {
    long int quot ;	
    long int rem ;	
  } ldiv_t ;
# 116 "/usr/include/stdlib.h" <System_Header>
 
 typedef struct
  {
    long long int quot ;	
    long long int rem ;	
  } lldiv_t ;
# 127 "/usr/include/stdlib.h" <System_Header>
 
# 132 "/usr/include/stdlib.h" <System_Header>
 
# 137 "/usr/include/stdlib.h" <System_Header>
 
# 139 "/usr/include/stdlib.h" <System_Header>
extern size_t __ctype_get_mb_cur_max ( void ) ;
# 143 "/usr/include/stdlib.h" <System_Header>
 
extern double atof ( const char * __nptr )
        ;
 
extern int atoi ( const char * __nptr )
        ;
 
extern long int atol ( const char * __nptr )
        ;
# 156 "/usr/include/stdlib.h" <System_Header>
 
 extern long long int atoll ( const char * __nptr )
        ;
# 163 "/usr/include/stdlib.h" <System_Header>
 
extern double strtod ( const char * __restrict __nptr ,
		      char * * __restrict __endptr )
      ;
# 171 "/usr/include/stdlib.h" <System_Header>
 
extern float strtof ( const char * __restrict __nptr ,
		     char * * __restrict __endptr ) ;
# 175 "/usr/include/stdlib.h" <System_Header>
extern long double strtold ( const char * __restrict __nptr ,
			    char * * __restrict __endptr )
      ;
# 182 "/usr/include/stdlib.h" <System_Header>
 
extern long int strtol ( const char * __restrict __nptr ,
			char * * __restrict __endptr , int __base )
      ;
 
extern unsigned long int strtoul ( const char * __restrict __nptr ,
				  char * * __restrict __endptr , int __base )
      ;
# 193 "/usr/include/stdlib.h" <System_Header>
 
# 195 "/usr/include/stdlib.h" <System_Header>
extern long long int strtoq ( const char * __restrict __nptr ,
			     char * * __restrict __endptr , int __base )
      ;
 
# 200 "/usr/include/stdlib.h" <System_Header>
extern unsigned long long int strtouq ( const char * __restrict __nptr ,
				       char * * __restrict __endptr , int __base )
      ;
# 207 "/usr/include/stdlib.h" <System_Header>
 
# 209 "/usr/include/stdlib.h" <System_Header>
extern long long int strtoll ( const char * __restrict __nptr ,
			      char * * __restrict __endptr , int __base )
      ;
 
# 214 "/usr/include/stdlib.h" <System_Header>
extern unsigned long long int strtoull ( const char * __restrict __nptr ,
					char * * __restrict __endptr , int __base )
      ;
# 304 "/usr/include/stdlib.h" <System_Header>
 
extern char * l64a ( long int __n ) ;
# 307 "/usr/include/stdlib.h" <System_Header>
 
extern long int a64l ( const char * __s )
        ;
# 314 "/usr/include/stdlib.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 16 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
# 20 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
# 25 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 26 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 29 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __u_char u_char ;
typedef __u_short u_short ;
typedef __u_int u_int ;
typedef __u_long u_long ;
typedef __quad_t quad_t ;
typedef __u_quad_t u_quad_t ;
typedef __fsid_t fsid_t ;
# 44 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __loff_t loff_t ;
# 48 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __ino_t ino_t ;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __dev_t dev_t ;
# 65 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __gid_t gid_t ;
# 70 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __mode_t mode_t ;
# 75 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __nlink_t nlink_t ;
# 80 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __uid_t uid_t ;
# 86 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __off_t off_t ;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __pid_t pid_t ;
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __id_t id_t ;
# 109 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __ssize_t ssize_t ;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __daddr_t daddr_t ;
typedef __caddr_t caddr_t ;
# 122 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __key_t key_t ;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 1 "/usr/include/time.h" <System_Header>
# 16 "/usr/include/time.h" <System_Header>
 
# 20 "/usr/include/time.h" <System_Header>
 
# 55 "/usr/include/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 56 "/usr/include/time.h" <System_Header>
# 58 "/usr/include/time.h" <System_Header>
 
typedef __clock_t clock_t ;
# 71 "/usr/include/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 72 "/usr/include/time.h" <System_Header>
# 74 "/usr/include/time.h" <System_Header>
 
typedef __time_t time_t ;
# 88 "/usr/include/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 89 "/usr/include/time.h" <System_Header>
# 90 "/usr/include/time.h" <System_Header>
 
typedef __clockid_t clockid_t ;
# 100 "/usr/include/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 101 "/usr/include/time.h" <System_Header>
# 102 "/usr/include/time.h" <System_Header>
 
typedef __timer_t timer_t ;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 26 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 47 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 50 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 54 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 62 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 93 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 103 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 121 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 123 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 126 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 245 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 248 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 363 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
 
 
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 149 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
typedef unsigned long int ulong ;
typedef unsigned short int ushort ;
typedef unsigned int uint ;
# 155 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
# 159 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
# 162 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef	char int8_t ;
typedef	short int int16_t ;
typedef	int int32_t ;
# 166 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef long int int64_t ;
# 172 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
typedef	unsigned char u_int8_t ;
typedef	unsigned short int u_int16_t ;
typedef	unsigned int u_int32_t ;
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef unsigned long int u_int64_t ;
# 182 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef int register_t ;
# 215 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
# 216 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 1 "/usr/include/endian.h" <System_Header>
# 16 "/usr/include/endian.h" <System_Header>
 
# 217 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 218 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 19 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 24 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 25 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 26 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 27 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 28 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 29 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" <System_Header>
# 16 "/usr/include/x86_64-linux-gnu/bits/select.h" <System_Header>
 
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" <System_Header>
# 47 "/usr/include/x86_64-linux-gnu/bits/select.h" <System_Header>
 
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 32 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 33 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/sigset.h" <System_Header>
 
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" <System_Header>
typedef int __sig_atomic_t ;
# 24 "/usr/include/x86_64-linux-gnu/bits/sigset.h" <System_Header>
 
# 27 "/usr/include/x86_64-linux-gnu/bits/sigset.h" <System_Header>
typedef struct
  {
    unsigned long int __val [ ( 1024 / ( 8 * sizeof ( unsigned long int ) ) ) ] ;
  } __sigset_t ;
# 39 "/usr/include/x86_64-linux-gnu/bits/sigset.h" <System_Header>
 
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
typedef __sigset_t sigset_t ;
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 43 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 1 "/usr/include/time.h" <System_Header>
# 16 "/usr/include/time.h" <System_Header>
 
# 20 "/usr/include/time.h" <System_Header>
 
# 116 "/usr/include/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 117 "/usr/include/time.h" <System_Header>
# 119 "/usr/include/time.h" <System_Header>
 
struct timespec
  {
    __time_t tv_sec ;	
    __syscall_slong_t tv_nsec ;	
  } ;
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 45 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 26 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 27 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
# 29 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
struct timeval
  {
    __time_t tv_sec ;	
    __suseconds_t tv_usec ;	
  } ;
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
typedef __suseconds_t suseconds_t ;
# 53 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
typedef long int __fd_mask ;
# 56 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 58 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 63 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
typedef struct
  {
    
 
# 72 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
    __fd_mask __fds_bits [ 1024 / ( 8 * ( int ) sizeof ( __fd_mask ) ) ] ;
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
  } fd_set ;
# 77 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 81 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
typedef __fd_mask fd_mask ;
# 84 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 89 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 105 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
extern int select ( int __nfds , fd_set * __restrict __readfds ,
		   fd_set * __restrict __writefds ,
		   fd_set * __restrict __exceptfds ,
		   struct timeval * __restrict __timeout ) ;
# 117 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
extern int pselect ( int __nfds , fd_set * __restrict __readfds ,
		    fd_set * __restrict __writefds ,
		    fd_set * __restrict __exceptfds ,
		    const struct timespec * __restrict __timeout ,
		    const __sigset_t * __restrict __sigmask ) ;
# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 221 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
# 222 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" <System_Header>
 
# 22 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 23 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" <System_Header>
# 27 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" <System_Header>
extern unsigned int gnu_dev_major ( unsigned long long int __dev )
      ;
# 30 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" <System_Header>
extern unsigned int gnu_dev_minor ( unsigned long long int __dev )
      ;
# 33 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" <System_Header>
extern unsigned long long int gnu_dev_makedev ( unsigned int __major ,
					       unsigned int __minor )
      ;
# 60 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" <System_Header>
 
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __blksize_t blksize_t ;
# 232 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
# 235 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __blkcnt_t blkcnt_t ;	
# 239 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __fsblkcnt_t fsblkcnt_t ; 
# 243 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
typedef __fsfilcnt_t fsfilcnt_t ; 
# 268 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
 
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
# 16 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
# 59 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
typedef unsigned long int pthread_t ;
# 63 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
union pthread_attr_t
{
  char __size [ 56 ] ;
  long int __align ;
} ;
# 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
typedef union pthread_attr_t pthread_attr_t ;
# 75 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list * __prev ;
  struct __pthread_internal_list * __next ;
} __pthread_list_t ;
# 89 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock ;
    unsigned int __count ;
    int __owner ;
# 98 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
    unsigned int __nusers ;
# 100 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
    
 
    int __kind ;
# 104 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
    short __spins ;
    short __elision ;
    __pthread_list_t __list ;
# 108 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
  } __data ;
  char __size [ 40 ] ;
  long int __align ;
} pthread_mutex_t ;
# 130 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
typedef union
{
  char __size [ 4 ] ;
  int __align ;
} pthread_mutexattr_t ;
# 138 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
typedef union
{
  struct
  {
    int __lock ;
    unsigned int __futex ;
     unsigned long long int __total_seq ;
     unsigned long long int __wakeup_seq ;
     unsigned long long int __woken_seq ;
    void * __mutex ;
    unsigned int __nwaiters ;
    unsigned int __broadcast_seq ;
  } __data ;
  char __size [ 48 ] ;
   long long int __align ;
} pthread_cond_t ;
# 156 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
typedef union
{
  char __size [ 4 ] ;
  int __align ;
} pthread_condattr_t ;
# 163 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
typedef unsigned int pthread_key_t ;
# 167 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
typedef int pthread_once_t ;
# 173 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
typedef union
{
# 177 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
  struct
  {
    int __lock ;
    unsigned int __nr_readers ;
    unsigned int __readers_wakeup ;
    unsigned int __writer_wakeup ;
    unsigned int __nr_readers_queued ;
    unsigned int __nr_writers_queued ;
    int __writer ;
    int __shared ;
    signed char __rwelision ;
# 192 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
    unsigned char __pad1 [ 7 ] ;
# 195 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
    unsigned long int __pad2 ;
    
 
    unsigned int __flags ;
# 200 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
  } __data ;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
  char __size [ 56 ] ;
  long int __align ;
} pthread_rwlock_t ;
# 224 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
typedef union
{
  char __size [ 8 ] ;
  long int __align ;
} pthread_rwlockattr_t ;
# 233 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
typedef volatile int pthread_spinlock_t ;
# 238 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
 
typedef union
{
  char __size [ 32 ] ;
  long int __align ;
} pthread_barrier_t ;
# 245 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" <System_Header>
typedef union
{
  char __size [ 4 ] ;
  int __align ;
} pthread_barrierattr_t ;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" <System_Header>
# 315 "/usr/include/stdlib.h" <System_Header>
# 319 "/usr/include/stdlib.h" <System_Header>
 
 
extern long int random ( void ) ;
# 323 "/usr/include/stdlib.h" <System_Header>
 
extern void srandom ( unsigned int __seed ) ;
# 329 "/usr/include/stdlib.h" <System_Header>
 
extern char * initstate ( unsigned int __seed , char * __statebuf ,
			size_t __statelen ) ;
# 334 "/usr/include/stdlib.h" <System_Header>
 
extern char * setstate ( char * __statebuf ) ;
# 341 "/usr/include/stdlib.h" <System_Header>
 
# 343 "/usr/include/stdlib.h" <System_Header>
struct random_data
  {
    int32_t * fptr ;	
    int32_t * rptr ;	
    int32_t * state ;	
    int rand_type ;	
    int rand_deg ;	
    int rand_sep ;	
    int32_t * end_ptr ;	
  } ;
# 354 "/usr/include/stdlib.h" <System_Header>
extern int random_r ( struct random_data * __restrict __buf ,
		     int32_t * __restrict __result ) ;
# 357 "/usr/include/stdlib.h" <System_Header>
extern int srandom_r ( unsigned int __seed , struct random_data * __buf )
      ;
# 360 "/usr/include/stdlib.h" <System_Header>
extern int initstate_r ( unsigned int __seed , char * __restrict __statebuf ,
			size_t __statelen ,
			struct random_data * __restrict __buf )
      ;
# 365 "/usr/include/stdlib.h" <System_Header>
extern int setstate_r ( char * __restrict __statebuf ,
		       struct random_data * __restrict __buf )
      ;
# 373 "/usr/include/stdlib.h" <System_Header>
 
extern int rand ( void ) ;
 
extern void srand ( unsigned int __seed ) ;
# 380 "/usr/include/stdlib.h" <System_Header>
 
extern int rand_r ( unsigned int * __seed ) ;
# 386 "/usr/include/stdlib.h" <System_Header>
 
# 388 "/usr/include/stdlib.h" <System_Header>
 
extern double drand48 ( void ) ;
extern double erand48 ( unsigned short int __xsubi [ 3 ] ) ;
# 392 "/usr/include/stdlib.h" <System_Header>
 
extern long int lrand48 ( void ) ;
extern long int nrand48 ( unsigned short int __xsubi [ 3 ] )
      ;
# 397 "/usr/include/stdlib.h" <System_Header>
 
extern long int mrand48 ( void ) ;
extern long int jrand48 ( unsigned short int __xsubi [ 3 ] )
      ;
# 402 "/usr/include/stdlib.h" <System_Header>
 
extern void srand48 ( long int __seedval ) ;
extern unsigned short int * seed48 ( unsigned short int __seed16v [ 3 ] )
      ;
extern void lcong48 ( unsigned short int __param [ 7 ] ) ;
# 411 "/usr/include/stdlib.h" <System_Header>
 
struct drand48_data
  {
    unsigned short int __x [ 3 ] ;	
    unsigned short int __old_x [ 3 ] ; 
    unsigned short int __c ;	
    unsigned short int __init ;	
     unsigned long long int __a ;	
 
  } ;
# 422 "/usr/include/stdlib.h" <System_Header>
 
extern int drand48_r ( struct drand48_data * __restrict __buffer ,
		      double * __restrict __result ) ;
extern int erand48_r ( unsigned short int __xsubi [ 3 ] ,
		      struct drand48_data * __restrict __buffer ,
		      double * __restrict __result ) ;
# 429 "/usr/include/stdlib.h" <System_Header>
 
extern int lrand48_r ( struct drand48_data * __restrict __buffer ,
		      long int * __restrict __result )
      ;
extern int nrand48_r ( unsigned short int __xsubi [ 3 ] ,
		      struct drand48_data * __restrict __buffer ,
		      long int * __restrict __result )
      ;
# 438 "/usr/include/stdlib.h" <System_Header>
 
extern int mrand48_r ( struct drand48_data * __restrict __buffer ,
		      long int * __restrict __result )
      ;
extern int jrand48_r ( unsigned short int __xsubi [ 3 ] ,
		      struct drand48_data * __restrict __buffer ,
		      long int * __restrict __result )
      ;
# 447 "/usr/include/stdlib.h" <System_Header>
 
extern int srand48_r ( long int __seedval , struct drand48_data * __buffer )
      ;
# 451 "/usr/include/stdlib.h" <System_Header>
extern int seed48_r ( unsigned short int __seed16v [ 3 ] ,
		     struct drand48_data * __buffer ) ;
# 454 "/usr/include/stdlib.h" <System_Header>
extern int lcong48_r ( unsigned short int __param [ 7 ] ,
		      struct drand48_data * __buffer )
      ;
# 465 "/usr/include/stdlib.h" <System_Header>
 
extern void * malloc ( size_t __size ) ;
 
extern void * calloc ( size_t __nmemb , size_t __size )
       ;
# 476 "/usr/include/stdlib.h" <System_Header>
 
# 479 "/usr/include/stdlib.h" <System_Header>
 
extern void * realloc ( void * __ptr , size_t __size )
      ;
 
extern void free ( void * __ptr ) ;
# 487 "/usr/include/stdlib.h" <System_Header>
 
extern void cfree ( void * __ptr ) ;
# 492 "/usr/include/stdlib.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include/alloca.h" <System_Header>
# 17 "/opt/pgi/linux86-64/17.10/include/alloca.h" <System_Header>
 
# 22 "/opt/pgi/linux86-64/17.10/include/alloca.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 23 "/opt/pgi/linux86-64/17.10/include/alloca.h" <System_Header>
# 25 "/opt/pgi/linux86-64/17.10/include/alloca.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 26 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 47 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 50 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 54 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 62 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 93 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 103 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 121 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 123 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 126 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 245 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 248 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 363 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
 
 
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 26 "/opt/pgi/linux86-64/17.10/include/alloca.h" <System_Header>
# 29 "/opt/pgi/linux86-64/17.10/include/alloca.h" <System_Header>
 
# 33 "/opt/pgi/linux86-64/17.10/include/alloca.h" <System_Header>
 
# 39 "/opt/pgi/linux86-64/17.10/include/alloca.h" <System_Header>
extern void * __alloca ( size_t __size ) ;
extern void * alloca ( size_t __size ) ;
extern void * __builtin_alloca ( size_t __size ) ;
# 493 "/usr/include/stdlib.h" <System_Header>
# 497 "/usr/include/stdlib.h" <System_Header>
 
extern void * valloc ( size_t __size ) ;
# 502 "/usr/include/stdlib.h" <System_Header>
 
extern int posix_memalign ( void * * __memptr , size_t __alignment , size_t __size )
       ;
# 514 "/usr/include/stdlib.h" <System_Header>
 
extern void abort ( void ) __attribute__ ( ( __noreturn__ ) ) ;
# 518 "/usr/include/stdlib.h" <System_Header>
 
extern int atexit ( void ( * __func ) ( void ) ) ;
# 534 "/usr/include/stdlib.h" <System_Header>
 
extern int on_exit ( void ( * __func ) ( int __status , void * __arg ) , void * __arg )
      ;
# 542 "/usr/include/stdlib.h" <System_Header>
 
extern void exit ( int __status ) __attribute__ ( ( __noreturn__ ) ) ;
# 556 "/usr/include/stdlib.h" <System_Header>
 
extern void _Exit ( int __status ) __attribute__ ( ( __noreturn__ ) ) ;
# 563 "/usr/include/stdlib.h" <System_Header>
 
extern char * getenv ( const char * __name ) ;
# 575 "/usr/include/stdlib.h" <System_Header>
 
# 577 "/usr/include/stdlib.h" <System_Header>
 
extern int putenv ( char * __string ) ;
# 583 "/usr/include/stdlib.h" <System_Header>
 
extern int setenv ( const char * __name , const char * __value , int __replace )
      ;
# 587 "/usr/include/stdlib.h" <System_Header>
 
extern int unsetenv ( const char * __name ) ;
# 594 "/usr/include/stdlib.h" <System_Header>
 
extern int clearenv ( void ) ;
# 605 "/usr/include/stdlib.h" <System_Header>
 
extern char * mktemp ( char * __template ) ;
# 617 "/usr/include/stdlib.h" <System_Header>
 
# 619 "/usr/include/stdlib.h" <System_Header>
extern int mkstemp ( char * __template ) ;
# 639 "/usr/include/stdlib.h" <System_Header>
 
# 641 "/usr/include/stdlib.h" <System_Header>
extern int mkstemps ( char * __template , int __suffixlen ) ;
# 661 "/usr/include/stdlib.h" <System_Header>
 
extern char * mkdtemp ( char * __template ) ;
# 715 "/usr/include/stdlib.h" <System_Header>
 
extern int system ( const char * __command ) ;
# 732 "/usr/include/stdlib.h" <System_Header>
 
extern char * realpath ( const char * __restrict __name ,
		       char * __restrict __resolved ) ;
# 738 "/usr/include/stdlib.h" <System_Header>
 
# 741 "/usr/include/stdlib.h" <System_Header>
typedef int ( * __compar_fn_t ) ( const void * , const void * ) ;
# 753 "/usr/include/stdlib.h" <System_Header>
 
extern void * bsearch ( const void * __key , const void * __base ,
		      size_t __nmemb , size_t __size , __compar_fn_t __compar )
      ;
# 763 "/usr/include/stdlib.h" <System_Header>
 
extern void qsort ( void * __base , size_t __nmemb , size_t __size ,
		   __compar_fn_t __compar ) ;
# 773 "/usr/include/stdlib.h" <System_Header>
 
extern int abs ( int __x ) __attribute__ ( ( __const__ ) ) ;
extern long int labs ( long int __x ) __attribute__ ( ( __const__ ) ) ;
# 779 "/usr/include/stdlib.h" <System_Header>
 extern long long int llabs ( long long int __x )
      __attribute__ ( ( __const__ ) ) ;
# 786 "/usr/include/stdlib.h" <System_Header>
 
 
extern div_t div ( int __numer , int __denom )
      __attribute__ ( ( __const__ ) ) ;
extern ldiv_t ldiv ( long int __numer , long int __denom )
      __attribute__ ( ( __const__ ) ) ;
# 796 "/usr/include/stdlib.h" <System_Header>
 extern lldiv_t lldiv ( long long int __numer ,
				    long long int __denom )
      __attribute__ ( ( __const__ ) ) ;
# 806 "/usr/include/stdlib.h" <System_Header>
 
# 810 "/usr/include/stdlib.h" <System_Header>
 
extern char * ecvt ( double __value , int __ndigit , int * __restrict __decpt ,
		   int * __restrict __sign ) ;
# 816 "/usr/include/stdlib.h" <System_Header>
 
extern char * fcvt ( double __value , int __ndigit , int * __restrict __decpt ,
		   int * __restrict __sign ) ;
# 822 "/usr/include/stdlib.h" <System_Header>
 
extern char * gcvt ( double __value , int __ndigit , char * __buf )
       ;
# 828 "/usr/include/stdlib.h" <System_Header>
 
extern char * qecvt ( long double __value , int __ndigit ,
		    int * __restrict __decpt , int * __restrict __sign )
       ;
extern char * qfcvt ( long double __value , int __ndigit ,
		    int * __restrict __decpt , int * __restrict __sign )
       ;
extern char * qgcvt ( long double __value , int __ndigit , char * __buf )
       ;
# 840 "/usr/include/stdlib.h" <System_Header>
 
extern int ecvt_r ( double __value , int __ndigit , int * __restrict __decpt ,
		   int * __restrict __sign , char * __restrict __buf ,
		   size_t __len ) ;
extern int fcvt_r ( double __value , int __ndigit , int * __restrict __decpt ,
		   int * __restrict __sign , char * __restrict __buf ,
		   size_t __len ) ;
# 848 "/usr/include/stdlib.h" <System_Header>
extern int qecvt_r ( long double __value , int __ndigit ,
		    int * __restrict __decpt , int * __restrict __sign ,
		    char * __restrict __buf , size_t __len )
      ;
extern int qfcvt_r ( long double __value , int __ndigit ,
		    int * __restrict __decpt , int * __restrict __sign ,
		    char * __restrict __buf , size_t __len )
      ;
# 861 "/usr/include/stdlib.h" <System_Header>
 
extern int mblen ( const char * __s , size_t __n ) ;
# 864 "/usr/include/stdlib.h" <System_Header>
 
extern int mbtowc ( wchar_t * __restrict __pwc ,
		   const char * __restrict __s , size_t __n ) ;
# 868 "/usr/include/stdlib.h" <System_Header>
 
extern int wctomb ( char * __s , wchar_t __wchar ) ;
# 872 "/usr/include/stdlib.h" <System_Header>
 
extern size_t mbstowcs ( wchar_t * __restrict __pwcs ,
			const char * __restrict __s , size_t __n ) ;
 
extern size_t wcstombs ( char * __restrict __s ,
			const wchar_t * __restrict __pwcs , size_t __n )
     ;
# 886 "/usr/include/stdlib.h" <System_Header>
 
extern int rpmatch ( const char * __response ) ;
# 897 "/usr/include/stdlib.h" <System_Header>
 
extern int getsubopt ( char * * __restrict __optionp ,
		      char * const * __restrict __tokens ,
		      char * * __restrict __valuep )
       ;
# 911 "/usr/include/stdlib.h" <System_Header>
 
# 949 "/usr/include/stdlib.h" <System_Header>
 
extern int getloadavg ( double __loadavg [ ] , int __nelem )
      ;
# 954 "/usr/include/stdlib.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" <System_Header>
 
# 955 "/usr/include/stdlib.h" <System_Header>
# 956 "/usr/include/stdlib.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
# 442 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
 
# 456 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
 
# 459 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
int __builtin_abs ( int ) ;
# 20 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 25 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * malloc_managed ( size_t ) ;
extern void * calloc_managed ( size_t , size_t ) ;
extern void free_managed ( void * ) ;
extern void cfree_managed ( void * ) ;
# 31 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * realloc_managed ( void * , size_t ) ;
extern void * valloc_managed ( size_t ) ;
extern void * pvalloc_managed ( size_t ) ;
extern void * memalign_managed ( size_t , size_t ) ;
extern int posix_memalign_managed ( void * * , size_t , size_t ) ;
extern char * tmpnam_managed ( char * ) ;
# 43 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
 
# 58 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 90 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
# 90 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
extern void * omp_target_alloc ( size_t , int ) ;
extern void omp_target_free ( void * , int ) ;
extern int omp_target_memcpy ( void * , void * , size_t , size_t , size_t , int , int ) ;
# 94 "/opt/pgi/linux86-64/17.10/include/omp.h" <System_Header>
typedef int _Atomic_word ;
extern void _mp_atomic_add ( int * , int ) ;
extern void _mp_exchange_and_add ( int * , int ) ;
# 5 "main.c"
# 5 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
 
# 27 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
typedef enum {
	acc_device_none = 0 ,
	acc_device_default = 1 ,
	acc_device_host = 2 ,
	acc_device_not_host = 3 ,
	acc_device_nvidia = 4 ,
	acc_device_radeon = 5 ,
	acc_device_xeonphi = 6 ,
	acc_device_pgi_opencl = 7 ,
	acc_device_nvidia_opencl = 8 ,
	acc_device_opencl = 9
    } acc_device_t ;
# 45 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
void acc_set_default_async ( int async ) ;
int acc_get_default_async ( void ) ;
extern int acc_get_num_devices ( acc_device_t devtype ) ;
extern acc_device_t acc_get_device ( void ) ;
extern void acc_set_device_num ( int devnum , acc_device_t devtype ) ;
extern int acc_get_device_num ( acc_device_t devtype ) ;
extern void acc_init ( acc_device_t devtype ) ;
extern void acc_shutdown ( acc_device_t devtype ) ;
extern void acc_set_deviceid ( int devid ) ;
extern int acc_get_deviceid ( int devnum , acc_device_t devtype ) ;
extern int acc_async_test ( long async ) ;
extern int acc_async_test_all ( void ) ;
extern void acc_async_wait ( long async ) ;
extern void acc_async_wait_all ( void ) ;
extern void acc_wait ( long async ) ;
extern void acc_wait_async ( long arg , long async ) ;
extern void acc_wait_all ( void ) ;
extern void acc_wait_all_async ( long async ) ;
extern int acc_on_device ( acc_device_t devtype ) ;
extern void acc_free ( void * ) ;
# 66 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern void * acc_memcpy ( void * targetptr , void * srcptr , unsigned long bytes ) ;
extern void * acc_memcpy_async ( void * targetptr , void * srcptr , unsigned long bytes , long async ) ;
extern void * acc_copyin ( void * hostptr , unsigned long bytes ) ;
extern void * acc_copyin_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void * acc_pcopyin ( void * hostptr , unsigned long bytes ) ;
extern void * acc_pcopyin_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void * acc_present_or_copyin ( void * hostptr , unsigned long bytes ) ;
extern void * acc_present_or_copyin_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void * acc_create ( void * hostptr , unsigned long bytes ) ;
extern void * acc_create_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void * acc_pcreate ( void * hostptr , unsigned long bytes ) ;
extern void * acc_pcreate_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void * acc_present_or_create ( void * hostptr , unsigned long bytes ) ;
extern void * acc_present_or_create_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void acc_copyout ( void * hostptr , unsigned long bytes ) ;
extern void acc_copyout_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void acc_delete ( void * hostptr , unsigned long bytes ) ;
extern void acc_delete_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void acc_update_device ( void * hostptr , unsigned long bytes ) ;
extern void acc_update_device_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void acc_update_self ( void * hostptr , unsigned long bytes ) ;
extern void acc_update_self_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void acc_update_host ( void * hostptr , unsigned long bytes ) ;
extern void acc_update_host_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void acc_memcpy_to_device ( void * devptr , void * hostptr , unsigned long bytes ) ;
extern void acc_memcpy_to_device_async ( void * devptr , void * hostptr , unsigned long bytes , long async ) ;
extern void acc_memcpy_from_device ( void * hostptr , void * devptr , unsigned long bytes ) ;
extern void acc_memcpy_from_device_async ( void * hostptr , void * devptr , unsigned long bytes , long async ) ;
extern void * acc_memcpy_device ( void * targetdevptr , void * srcdevptr , unsigned long bytes ) ;
extern void * acc_memcpy_device_async ( void * targetdevptr , void * srcdevptr , unsigned long bytes , long async ) ;
extern void acc_attach ( void * * hostptrptr ) ;
extern void acc_attach_async ( void * * hostptrptr , long async ) ;
extern void acc_detach ( void * * hostptrptr ) ;
extern void acc_detach_async ( void * * hostptrptr , long async ) ;
# 101 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern void acc_set_device_type ( acc_device_t devtype ) ;
extern acc_device_t acc_get_device_type ( void ) ;
extern void * acc_malloc ( unsigned long ) ;
extern void * acc_deviceptr ( void * hostptr ) ;
extern void * acc_hostptr ( void * devptr ) ;
extern void acc_map_data ( void * hostptr , void * devptr , unsigned long bytes ) ;
extern void acc_unmap_data ( void * hostptr ) ;
extern int acc_is_present ( void * hostptr , unsigned long bytes ) ;
extern int acc_present_count ( void * hostptr ) ;
extern void acc_updatein ( void * hostptr , unsigned long bytes ) ;
extern void acc_updatein_async ( void * hostptr , unsigned long bytes , long async ) ;
extern void acc_updateout ( void * hostptr , unsigned long bytes ) ;
extern void acc_updateout_async ( void * hostptr , unsigned long bytes , long async ) ;
# 115 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern void * acc_get_current_cuda_context ( void ) ;
extern int acc_get_current_cuda_device ( void ) ;
extern void * acc_get_cuda_stream ( long ) ;
extern void acc_set_cuda_stream ( long , void * ) ;
extern void * acc_cuda_get_context ( int ) ;	
extern int acc_cuda_get_device ( int ) ;	
# 122 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern void * acc_get_current_opencl_context ( void ) ;
extern void * acc_get_current_opencl_device ( void ) ;
extern void * acc_get_opencl_queue ( long ) ;
# 126 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
 
extern int atomicaddi ( void * address , int val ) ;
extern unsigned int atomicaddu ( void * address , unsigned int val ) ;
extern unsigned long long atomicaddul ( void * address , unsigned long long val ) ;
extern float atomicaddf ( void * address , float val ) ;
extern double atomicaddd ( void * address , double val ) ;
# 133 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern int atomicsubi ( void * address , int val ) ;
extern unsigned int atomicsubu ( void * address , unsigned int val ) ;
extern unsigned long long atomicsubul ( void * address , unsigned long long val ) ;
extern float atomicsubf ( void * address , float val ) ;
extern double atomicsubd ( void * address , double val ) ;
# 139 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern int atomicmaxi ( void * address , int val ) ;
extern unsigned int atomicmaxu ( void * address , unsigned int val ) ;
extern unsigned long long atomicmaxul ( void * address , unsigned long long val ) ;
extern float atomicmaxf ( void * address , float val ) ;
extern double atomicmaxd ( void * address , double val ) ;
# 145 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern int atomicmini ( void * address , int val ) ;
extern unsigned int atomicminu ( void * address , unsigned int val ) ;
extern unsigned long long atomicminul ( void * address , unsigned long long val ) ;
extern float atomicminf ( void * address , float val ) ;
extern double atomicmind ( void * address , double val ) ;
# 151 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern int atomicandi ( void * address , int val ) ;
extern unsigned int atomicandu ( void * address , unsigned int val ) ;
extern unsigned long long atomicandul ( void * address , unsigned long long val ) ;
# 155 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern int atomicori ( void * address , int val ) ;
extern unsigned int atomicoru ( void * address , unsigned int val ) ;
extern unsigned long long atomicorul ( void * address , unsigned long long val ) ;
# 159 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern int atomicxori ( void * address , int val ) ;
extern unsigned int atomicxoru ( void * address , unsigned int val ) ;
extern unsigned long long atomicxorul ( void * address , unsigned long long val ) ;
# 163 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern int atomicexchi ( void * address , int val ) ;
extern unsigned int atomicexchu ( void * address , unsigned int val ) ;
extern unsigned long long atomicexchul ( void * address , unsigned long long val ) ;
extern float atomicexchf ( void * address , float val ) ;
extern double atomicexchd ( void * address , double val ) ;
# 169 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern unsigned int atomicincu ( void * address , unsigned int val ) ;
# 171 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern unsigned int atomicdecu ( void * address , unsigned int val ) ;
# 173 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern int atomiccasi ( void * address , int val , int val2 ) ;
extern unsigned int atomiccasu ( void * address , unsigned int val , unsigned int val2 ) ;
extern unsigned long long atomiccasul ( void * address , unsigned long long val , unsigned long long val2 ) ;
extern float atomiccasf ( void * address , float val , float val2 ) ;
extern double atomiccasd ( void * address , double val , double val2 ) ;
# 179 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
extern int __pgi_gangidx ( void ) ;
extern int __pgi_workeridx ( void ) ;
extern int __pgi_vectoridx ( void ) ;
extern int __pgi_blockidx ( int ) ;
extern int __pgi_threadidx ( int ) ;
# 6 "main.c"
# 6 "main.c"
# 1 "/usr/include/stdio.h" <System_Header>
# 17 "/usr/include/stdio.h" <System_Header>
 
# 21 "/usr/include/stdio.h" <System_Header>
 
# 27 "/usr/include/stdio.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 28 "/usr/include/stdio.h" <System_Header>
# 33 "/usr/include/stdio.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 26 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 47 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 50 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 54 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 62 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 93 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 103 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 121 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 123 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 126 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 245 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 248 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 363 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
 
 
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 34 "/usr/include/stdio.h" <System_Header>
# 35 "/usr/include/stdio.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 36 "/usr/include/stdio.h" <System_Header>
# 43 "/usr/include/stdio.h" <System_Header>
 
struct _IO_FILE ;
# 47 "/usr/include/stdio.h" <System_Header>
 
typedef struct _IO_FILE FILE ;
# 63 "/usr/include/stdio.h" <System_Header>
 
typedef struct _IO_FILE __FILE ;
# 74 "/usr/include/stdio.h" <System_Header>
# 1 "/usr/include/libio.h" <System_Header>
# 26 "/usr/include/libio.h" <System_Header>
 
# 31 "/usr/include/libio.h" <System_Header>
# 1 "/usr/include/_G_config.h" <System_Header>
# 2 "/usr/include/_G_config.h" <System_Header>
 
# 7 "/usr/include/_G_config.h" <System_Header>
 
# 9 "/usr/include/_G_config.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 10 "/usr/include/_G_config.h" <System_Header>
# 15 "/usr/include/_G_config.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 26 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 47 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 50 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 54 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 62 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 93 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 103 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 121 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 123 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 126 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 245 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 248 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 363 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
 
 
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 16 "/usr/include/_G_config.h" <System_Header>
# 20 "/usr/include/_G_config.h" <System_Header>
# 1 "/usr/include/wchar.h" <System_Header>
# 16 "/usr/include/wchar.h" <System_Header>
 
# 21 "/usr/include/wchar.h" <System_Header>
 
# 51 "/usr/include/wchar.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 26 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 47 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 50 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 54 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 62 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 93 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 103 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 121 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 123 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 126 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 245 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 248 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 357 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
typedef unsigned int wint_t ;
# 363 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
 
 
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 52 "/usr/include/wchar.h" <System_Header>
# 54 "/usr/include/wchar.h" <System_Header>
 
# 64 "/usr/include/wchar.h" <System_Header>
 
# 73 "/usr/include/wchar.h" <System_Header>
 
# 81 "/usr/include/wchar.h" <System_Header>
 
typedef struct
{
  int __count ;
  union
  {
# 88 "/usr/include/wchar.h" <System_Header>
    unsigned int __wch ;
# 92 "/usr/include/wchar.h" <System_Header>
    char __wchb [ 4 ] ;
  } __value ;	
} __mbstate_t ;
# 100 "/usr/include/wchar.h" <System_Header>
 
# 901 "/usr/include/wchar.h" <System_Header>
 
# 21 "/usr/include/_G_config.h" <System_Header>
# 21 "/usr/include/_G_config.h" <System_Header>
typedef struct
{
  __off_t __pos ;
  __mbstate_t __state ;
} _G_fpos_t ;
typedef struct
{
  __off64_t __pos ;
  __mbstate_t __state ;
} _G_fpos64_t ;
# 45 "/usr/include/_G_config.h" <System_Header>
 
# 53 "/usr/include/_G_config.h" <System_Header>
 
# 32 "/usr/include/libio.h" <System_Header>
# 32 "/usr/include/libio.h" <System_Header>
 
# 47 "/usr/include/libio.h" <System_Header>
 
# 49 "/usr/include/libio.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
 
# 24 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include/va_list.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/va_list.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include/va_list.h" <System_Header>
 
# 31 "/opt/pgi/linux86-64/17.10/include/va_list.h" <System_Header>
 
# 34 "/opt/pgi/linux86-64/17.10/include/va_list.h" <System_Header>
 
typedef struct __pgi_tag {
  unsigned int gp_offset ;
  unsigned int fp_offset ;
  char * overflow_arg_area ; 
  char * reg_save_area ; 
} __pgi_va_list [ 1 ] ;
# 49 "/opt/pgi/linux86-64/17.10/include/va_list.h" <System_Header>
typedef __pgi_va_list va_list ;
# 60 "/opt/pgi/linux86-64/17.10/include/va_list.h" <System_Header>
typedef __pgi_va_list __gnuc_va_list ;
# 25 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
# 31 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
extern void * __builtin_va_arg ( ) ;
extern int __builtin_va_start ( ) ;
# 60 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
 
# 50 "/usr/include/libio.h" <System_Header>
# 90 "/usr/include/libio.h" <System_Header>
 
# 124 "/usr/include/libio.h" <System_Header>
 
# 144 "/usr/include/libio.h" <System_Header>
struct _IO_jump_t ; struct _IO_FILE ;
# 146 "/usr/include/libio.h" <System_Header>
 
# 150 "/usr/include/libio.h" <System_Header>
typedef void _IO_lock_t ;
# 154 "/usr/include/libio.h" <System_Header>
 
# 156 "/usr/include/libio.h" <System_Header>
struct _IO_marker {
  struct _IO_marker * _next ;
  struct _IO_FILE * _sbuf ;
  
 
   
  int _pos ;
# 173 "/usr/include/libio.h" <System_Header>
} ;
# 175 "/usr/include/libio.h" <System_Header>
 
enum __codecvt_result
{
  __codecvt_ok ,
  __codecvt_partial ,
  __codecvt_error ,
  __codecvt_noconv
} ;
# 241 "/usr/include/libio.h" <System_Header>
struct _IO_FILE {
  int _flags ;	
# 245 "/usr/include/libio.h" <System_Header>
   
   
  char * _IO_read_ptr ;	
  char * _IO_read_end ;	
  char * _IO_read_base ;	
  char * _IO_write_base ;	
  char * _IO_write_ptr ;	
  char * _IO_write_end ;	
  char * _IO_buf_base ;	
  char * _IO_buf_end ;	
   
  char * _IO_save_base ; 
  char * _IO_backup_base ; 
  char * _IO_save_end ; 
# 260 "/usr/include/libio.h" <System_Header>
  struct _IO_marker * _markers ;
# 262 "/usr/include/libio.h" <System_Header>
  struct _IO_FILE * _chain ;
# 264 "/usr/include/libio.h" <System_Header>
  int _fileno ;
# 268 "/usr/include/libio.h" <System_Header>
  int _flags2 ;
# 270 "/usr/include/libio.h" <System_Header>
  __off_t _old_offset ; 
# 273 "/usr/include/libio.h" <System_Header>
   
  unsigned short _cur_column ;
  signed char _vtable_offset ;
  char _shortbuf [ 1 ] ;
# 278 "/usr/include/libio.h" <System_Header>
   
# 280 "/usr/include/libio.h" <System_Header>
  _IO_lock_t * _lock ;
# 289 "/usr/include/libio.h" <System_Header>
  __off64_t _offset ;
# 297 "/usr/include/libio.h" <System_Header>
  void * __pad1 ;
  void * __pad2 ;
  void * __pad3 ;
  void * __pad4 ;
# 302 "/usr/include/libio.h" <System_Header>
  size_t __pad5 ;
  int _mode ;
   
  char _unused2 [ 15 * sizeof ( int ) - 4 * sizeof ( void * ) - sizeof ( size_t ) ] ;
# 307 "/usr/include/libio.h" <System_Header>
} ;
# 310 "/usr/include/libio.h" <System_Header>
typedef struct _IO_FILE _IO_FILE ;
# 313 "/usr/include/libio.h" <System_Header>
struct _IO_FILE_plus ;
# 315 "/usr/include/libio.h" <System_Header>
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
# 329 "/usr/include/libio.h" <System_Header>
 
# 332 "/usr/include/libio.h" <System_Header>
 
typedef __ssize_t __io_read_fn ( void * __cookie , char * __buf , size_t __nbytes ) ;
# 340 "/usr/include/libio.h" <System_Header>
 
typedef __ssize_t __io_write_fn ( void * __cookie , const char * __buf ,
				 size_t __n ) ;
# 349 "/usr/include/libio.h" <System_Header>
 
typedef int __io_seek_fn ( void * __cookie , __off64_t * __pos , int __w ) ;
# 352 "/usr/include/libio.h" <System_Header>
 
typedef int __io_close_fn ( void * __cookie ) ;
# 385 "/usr/include/libio.h" <System_Header>
extern int __underflow ( _IO_FILE * ) ;
extern int __uflow ( _IO_FILE * ) ;
extern int __overflow ( _IO_FILE * , int ) ;
# 429 "/usr/include/libio.h" <System_Header>
extern int _IO_getc ( _IO_FILE * __fp ) ;
extern int _IO_putc ( int __c , _IO_FILE * __fp ) ;
extern int _IO_feof ( _IO_FILE * __fp ) ;
extern int _IO_ferror ( _IO_FILE * __fp ) ;
# 434 "/usr/include/libio.h" <System_Header>
extern int _IO_peekc_locked ( _IO_FILE * __fp ) ;
# 436 "/usr/include/libio.h" <System_Header>
 
# 440 "/usr/include/libio.h" <System_Header>
extern void _IO_flockfile ( _IO_FILE * ) ;
extern void _IO_funlockfile ( _IO_FILE * ) ;
extern int _IO_ftrylockfile ( _IO_FILE * ) ;
# 459 "/usr/include/libio.h" <System_Header>
extern int _IO_vfscanf ( _IO_FILE * __restrict , const char * __restrict ,
			__gnuc_va_list , int * __restrict ) ;
extern int _IO_vfprintf ( _IO_FILE * __restrict , const char * __restrict ,
			 __gnuc_va_list ) ;
extern __ssize_t _IO_padn ( _IO_FILE * , int , __ssize_t ) ;
extern size_t _IO_sgetn ( _IO_FILE * , void * , size_t ) ;
# 466 "/usr/include/libio.h" <System_Header>
extern __off64_t _IO_seekoff ( _IO_FILE * , __off64_t , int , int ) ;
extern __off64_t _IO_seekpos ( _IO_FILE * , __off64_t , int ) ;
# 469 "/usr/include/libio.h" <System_Header>
extern void _IO_free_backup_area ( _IO_FILE * ) ;
# 75 "/usr/include/stdio.h" <System_Header>
# 83 "/usr/include/stdio.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include/stdarg.h" <System_Header>
 
# 84 "/usr/include/stdio.h" <System_Header>
# 107 "/usr/include/stdio.h" <System_Header>
 
# 110 "/usr/include/stdio.h" <System_Header>
typedef _G_fpos_t fpos_t ;
# 119 "/usr/include/stdio.h" <System_Header>
 
# 125 "/usr/include/stdio.h" <System_Header>
 
# 132 "/usr/include/stdio.h" <System_Header>
 
# 139 "/usr/include/stdio.h" <System_Header>
 
# 150 "/usr/include/stdio.h" <System_Header>
 
# 163 "/usr/include/stdio.h" <System_Header>
 
# 164 "/usr/include/stdio.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" <System_Header>
# 16 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" <System_Header>
 
# 165 "/usr/include/stdio.h" <System_Header>
# 167 "/usr/include/stdio.h" <System_Header>
 
extern struct _IO_FILE * stdin ;	
extern struct _IO_FILE * stdout ;	
extern struct _IO_FILE * stderr ;	
 
# 177 "/usr/include/stdio.h" <System_Header>
 
extern int remove ( const char * __filename ) ;
 
extern int rename ( const char * __old , const char * __new ) ;
# 184 "/usr/include/stdio.h" <System_Header>
 
extern int renameat ( int __oldfd , const char * __old , int __newfd ,
		     const char * __new ) ;
# 193 "/usr/include/stdio.h" <System_Header>
 
# 195 "/usr/include/stdio.h" <System_Header>
extern FILE * tmpfile ( void ) ;
# 208 "/usr/include/stdio.h" <System_Header>
 
extern char * tmpnam ( char * __s ) ;
# 214 "/usr/include/stdio.h" <System_Header>
 
extern char * tmpnam_r ( char * __s ) ;
# 226 "/usr/include/stdio.h" <System_Header>
 
extern char * tempnam ( const char * __dir , const char * __pfx )
       ;
# 236 "/usr/include/stdio.h" <System_Header>
 
extern int fclose ( FILE * __stream ) ;
# 241 "/usr/include/stdio.h" <System_Header>
 
extern int fflush ( FILE * __stream ) ;
# 251 "/usr/include/stdio.h" <System_Header>
 
extern int fflush_unlocked ( FILE * __stream ) ;
# 271 "/usr/include/stdio.h" <System_Header>
 
extern FILE * fopen ( const char * __restrict __filename ,
		    const char * __restrict __modes ) ;
# 277 "/usr/include/stdio.h" <System_Header>
 
extern FILE * freopen ( const char * __restrict __filename ,
		      const char * __restrict __modes ,
		      FILE * __restrict __stream ) ;
# 305 "/usr/include/stdio.h" <System_Header>
 
extern FILE * fdopen ( int __fd , const char * __modes ) ;
# 318 "/usr/include/stdio.h" <System_Header>
 
extern FILE * fmemopen ( void * __s , size_t __len , const char * __modes )
   ;
# 324 "/usr/include/stdio.h" <System_Header>
 
extern FILE * open_memstream ( char * * __bufloc , size_t * __sizeloc ) ;
# 331 "/usr/include/stdio.h" <System_Header>
 
extern void setbuf ( FILE * __restrict __stream , char * __restrict __buf ) ;
# 335 "/usr/include/stdio.h" <System_Header>
 
extern int setvbuf ( FILE * __restrict __stream , char * __restrict __buf ,
		    int __modes , size_t __n ) ;
# 342 "/usr/include/stdio.h" <System_Header>
 
extern void setbuffer ( FILE * __restrict __stream , char * __restrict __buf ,
		       size_t __size ) ;
# 346 "/usr/include/stdio.h" <System_Header>
 
extern void setlinebuf ( FILE * __stream ) ;
# 355 "/usr/include/stdio.h" <System_Header>
 
extern int fprintf ( FILE * __restrict __stream ,
		    const char * __restrict __format , ... ) ;
# 361 "/usr/include/stdio.h" <System_Header>
 
extern int printf ( const char * __restrict __format , ... ) ;
 
extern int sprintf ( char * __restrict __s ,
		    const char * __restrict __format , ... ) ;
# 370 "/usr/include/stdio.h" <System_Header>
 
extern int vfprintf ( FILE * __restrict __s , const char * __restrict __format ,
		     __gnuc_va_list __arg ) ;
# 376 "/usr/include/stdio.h" <System_Header>
 
extern int vprintf ( const char * __restrict __format , __gnuc_va_list __arg ) ;
 
extern int vsprintf ( char * __restrict __s , const char * __restrict __format ,
		     __gnuc_va_list __arg ) ;
# 385 "/usr/include/stdio.h" <System_Header>
 
extern int snprintf ( char * __restrict __s , size_t __maxlen ,
		     const char * __restrict __format , ... )
      __attribute__ ( ( __format__ ( __printf__ , 3 , 4 ) ) ) ;
# 390 "/usr/include/stdio.h" <System_Header>
extern int vsnprintf ( char * __restrict __s , size_t __maxlen ,
		      const char * __restrict __format , __gnuc_va_list __arg )
      __attribute__ ( ( __format__ ( __printf__ , 3 , 0 ) ) ) ;
# 411 "/usr/include/stdio.h" <System_Header>
 
extern int vdprintf ( int __fd , const char * __restrict __fmt ,
		     __gnuc_va_list __arg )
     __attribute__ ( ( __format__ ( __printf__ , 2 , 0 ) ) ) ;
extern int dprintf ( int __fd , const char * __restrict __fmt , ... )
     __attribute__ ( ( __format__ ( __printf__ , 2 , 3 ) ) ) ;
# 424 "/usr/include/stdio.h" <System_Header>
 
extern int fscanf ( FILE * __restrict __stream ,
		   const char * __restrict __format , ... ) ;
# 430 "/usr/include/stdio.h" <System_Header>
 
extern int scanf ( const char * __restrict __format , ... ) ;
 
extern int sscanf ( const char * __restrict __s ,
		   const char * __restrict __format , ... ) ;
# 452 "/usr/include/stdio.h" <System_Header>
extern int __isoc99_fscanf ( FILE * __restrict __stream ,
			    const char * __restrict __format , ... ) ;
extern int __isoc99_scanf ( const char * __restrict __format , ... ) ;
extern int __isoc99_sscanf ( const char * __restrict __s ,
			    const char * __restrict __format , ... ) ;
# 470 "/usr/include/stdio.h" <System_Header>
 
extern int vfscanf ( FILE * __restrict __s , const char * __restrict __format ,
		    __gnuc_va_list __arg )
     __attribute__ ( ( __format__ ( __scanf__ , 2 , 0 ) ) ) ;
# 478 "/usr/include/stdio.h" <System_Header>
 
extern int vscanf ( const char * __restrict __format , __gnuc_va_list __arg )
     __attribute__ ( ( __format__ ( __scanf__ , 1 , 0 ) ) ) ;
# 482 "/usr/include/stdio.h" <System_Header>
 
extern int vsscanf ( const char * __restrict __s ,
		    const char * __restrict __format , __gnuc_va_list __arg )
      __attribute__ ( ( __format__ ( __scanf__ , 2 , 0 ) ) ) ;
# 508 "/usr/include/stdio.h" <System_Header>
extern int __isoc99_vfscanf ( FILE * __restrict __s ,
			     const char * __restrict __format ,
			     __gnuc_va_list __arg ) ;
extern int __isoc99_vscanf ( const char * __restrict __format ,
			    __gnuc_va_list __arg ) ;
extern int __isoc99_vsscanf ( const char * __restrict __s ,
			     const char * __restrict __format ,
			     __gnuc_va_list __arg ) ;
# 530 "/usr/include/stdio.h" <System_Header>
 
extern int fgetc ( FILE * __stream ) ;
extern int getc ( FILE * __stream ) ;
# 537 "/usr/include/stdio.h" <System_Header>
 
extern int getchar ( void ) ;
# 542 "/usr/include/stdio.h" <System_Header>
 
# 549 "/usr/include/stdio.h" <System_Header>
 
extern int getc_unlocked ( FILE * __stream ) ;
extern int getchar_unlocked ( void ) ;
# 560 "/usr/include/stdio.h" <System_Header>
 
extern int fgetc_unlocked ( FILE * __stream ) ;
# 572 "/usr/include/stdio.h" <System_Header>
 
extern int fputc ( int __c , FILE * __stream ) ;
extern int putc ( int __c , FILE * __stream ) ;
# 579 "/usr/include/stdio.h" <System_Header>
 
extern int putchar ( int __c ) ;
# 584 "/usr/include/stdio.h" <System_Header>
 
# 593 "/usr/include/stdio.h" <System_Header>
 
extern int fputc_unlocked ( int __c , FILE * __stream ) ;
# 601 "/usr/include/stdio.h" <System_Header>
 
extern int putc_unlocked ( int __c , FILE * __stream ) ;
extern int putchar_unlocked ( int __c ) ;
# 609 "/usr/include/stdio.h" <System_Header>
 
extern int getw ( FILE * __stream ) ;
# 612 "/usr/include/stdio.h" <System_Header>
 
extern int putw ( int __w , FILE * __stream ) ;
# 621 "/usr/include/stdio.h" <System_Header>
 
extern char * fgets ( char * __restrict __s , int __n , FILE * __restrict __stream )
     ;
# 637 "/usr/include/stdio.h" <System_Header>
 
extern char * gets ( char * __s ) ;
# 664 "/usr/include/stdio.h" <System_Header>
 
extern __ssize_t __getdelim ( char * * __restrict __lineptr ,
			       size_t * __restrict __n , int __delimiter ,
			       FILE * __restrict __stream ) ;
extern __ssize_t getdelim ( char * * __restrict __lineptr ,
			     size_t * __restrict __n , int __delimiter ,
			     FILE * __restrict __stream ) ;
# 677 "/usr/include/stdio.h" <System_Header>
 
extern __ssize_t getline ( char * * __restrict __lineptr ,
			    size_t * __restrict __n ,
			    FILE * __restrict __stream ) ;
# 688 "/usr/include/stdio.h" <System_Header>
 
extern int fputs ( const char * __restrict __s , FILE * __restrict __stream ) ;
# 694 "/usr/include/stdio.h" <System_Header>
 
extern int puts ( const char * __s ) ;
# 701 "/usr/include/stdio.h" <System_Header>
 
extern int ungetc ( int __c , FILE * __stream ) ;
# 708 "/usr/include/stdio.h" <System_Header>
 
extern size_t fread ( void * __restrict __ptr , size_t __size ,
		     size_t __n , FILE * __restrict __stream ) ;
# 714 "/usr/include/stdio.h" <System_Header>
 
extern size_t fwrite ( const void * __restrict __ptr , size_t __size ,
		      size_t __n , FILE * __restrict __s ) ;
# 736 "/usr/include/stdio.h" <System_Header>
 
extern size_t fread_unlocked ( void * __restrict __ptr , size_t __size ,
			      size_t __n , FILE * __restrict __stream ) ;
extern size_t fwrite_unlocked ( const void * __restrict __ptr , size_t __size ,
			       size_t __n , FILE * __restrict __stream ) ;
# 748 "/usr/include/stdio.h" <System_Header>
 
extern int fseek ( FILE * __stream , long int __off , int __whence ) ;
# 753 "/usr/include/stdio.h" <System_Header>
 
extern long int ftell ( FILE * __stream ) ;
# 758 "/usr/include/stdio.h" <System_Header>
 
extern void rewind ( FILE * __stream ) ;
# 765 "/usr/include/stdio.h" <System_Header>
 
# 772 "/usr/include/stdio.h" <System_Header>
 
extern int fseeko ( FILE * __stream , __off_t __off , int __whence ) ;
# 777 "/usr/include/stdio.h" <System_Header>
 
extern __off_t ftello ( FILE * __stream ) ;
# 797 "/usr/include/stdio.h" <System_Header>
 
extern int fgetpos ( FILE * __restrict __stream , fpos_t * __restrict __pos ) ;
# 802 "/usr/include/stdio.h" <System_Header>
 
extern int fsetpos ( FILE * __stream , const fpos_t * __pos ) ;
# 825 "/usr/include/stdio.h" <System_Header>
 
extern void clearerr ( FILE * __stream ) ;
 
extern int feof ( FILE * __stream ) ;
 
extern int ferror ( FILE * __stream ) ;
# 834 "/usr/include/stdio.h" <System_Header>
 
extern void clearerr_unlocked ( FILE * __stream ) ;
extern int feof_unlocked ( FILE * __stream ) ;
extern int ferror_unlocked ( FILE * __stream ) ;
# 845 "/usr/include/stdio.h" <System_Header>
 
extern void perror ( const char * __s ) ;
# 852 "/usr/include/stdio.h" <System_Header>
 
# 853 "/usr/include/stdio.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" <System_Header>
 
# 23 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" <System_Header>
 
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" <System_Header>
extern int sys_nerr ;
extern const char * const sys_errlist [ ] ;
# 854 "/usr/include/stdio.h" <System_Header>
# 857 "/usr/include/stdio.h" <System_Header>
 
extern int fileno ( FILE * __stream ) ;
# 862 "/usr/include/stdio.h" <System_Header>
 
extern int fileno_unlocked ( FILE * __stream ) ;
# 871 "/usr/include/stdio.h" <System_Header>
 
extern FILE * popen ( const char * __command , const char * __modes ) ;
# 877 "/usr/include/stdio.h" <System_Header>
 
extern int pclose ( FILE * __stream ) ;
# 883 "/usr/include/stdio.h" <System_Header>
 
extern char * ctermid ( char * __s ) ;
# 909 "/usr/include/stdio.h" <System_Header>
 
# 911 "/usr/include/stdio.h" <System_Header>
 
extern void flockfile ( FILE * __stream ) ;
# 915 "/usr/include/stdio.h" <System_Header>
 
extern int ftrylockfile ( FILE * __stream ) ;
# 918 "/usr/include/stdio.h" <System_Header>
 
extern void funlockfile ( FILE * __stream ) ;
# 931 "/usr/include/stdio.h" <System_Header>
 
# 7 "main.c"
# 7 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 19 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
# 3 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
 
# 20 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 25 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * malloc_managed ( size_t ) ;
extern void * calloc_managed ( size_t , size_t ) ;
extern void free_managed ( void * ) ;
extern void cfree_managed ( void * ) ;
# 31 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * realloc_managed ( void * , size_t ) ;
extern void * valloc_managed ( size_t ) ;
extern void * pvalloc_managed ( size_t ) ;
extern void * memalign_managed ( size_t , size_t ) ;
extern int posix_memalign_managed ( void * * , size_t , size_t ) ;
extern char * tmpnam_managed ( char * ) ;
# 43 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
 
# 58 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 8 "main.c"
# 8 "main.c"
# 1 "/usr/include/string.h" <System_Header>
# 16 "/usr/include/string.h" <System_Header>
 
# 20 "/usr/include/string.h" <System_Header>
 
# 25 "/usr/include/string.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 26 "/usr/include/string.h" <System_Header>
# 29 "/usr/include/string.h" <System_Header>
 
# 32 "/usr/include/string.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 26 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 47 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 50 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 54 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 62 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 93 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 103 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 121 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 123 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 126 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 245 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 248 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 363 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
 
 
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 33 "/usr/include/string.h" <System_Header>
# 34 "/usr/include/string.h" <System_Header>
 
# 41 "/usr/include/string.h" <System_Header>
 
extern void * memcpy ( void * __restrict __dest , const void * __restrict __src ,
		     size_t __n ) ;
# 45 "/usr/include/string.h" <System_Header>
 
extern void * memmove ( void * __dest , const void * __src , size_t __n )
      ;
# 52 "/usr/include/string.h" <System_Header>
 
# 54 "/usr/include/string.h" <System_Header>
extern void * memccpy ( void * __restrict __dest , const void * __restrict __src ,
		      int __c , size_t __n )
      ;
# 61 "/usr/include/string.h" <System_Header>
 
extern void * memset ( void * __s , int __c , size_t __n ) ;
# 64 "/usr/include/string.h" <System_Header>
 
extern int memcmp ( const void * __s1 , const void * __s2 , size_t __n )
       ;
# 68 "/usr/include/string.h" <System_Header>
 
# 92 "/usr/include/string.h" <System_Header>
extern void * memchr ( const void * __s , int __c , size_t __n )
        ;
# 124 "/usr/include/string.h" <System_Header>
 
extern char * strcpy ( char * __restrict __dest , const char * __restrict __src )
      ;
 
extern char * strncpy ( char * __restrict __dest ,
		      const char * __restrict __src , size_t __n )
      ;
# 132 "/usr/include/string.h" <System_Header>
 
extern char * strcat ( char * __restrict __dest , const char * __restrict __src )
      ;
 
extern char * strncat ( char * __restrict __dest , const char * __restrict __src ,
		      size_t __n ) ;
# 139 "/usr/include/string.h" <System_Header>
 
extern int strcmp ( const char * __s1 , const char * __s2 )
       ;
 
extern int strncmp ( const char * __s1 , const char * __s2 , size_t __n )
       ;
# 146 "/usr/include/string.h" <System_Header>
 
extern int strcoll ( const char * __s1 , const char * __s2 )
       ;
 
extern size_t strxfrm ( char * __restrict __dest ,
		       const char * __restrict __src , size_t __n )
      ;
# 158 "/usr/include/string.h" <System_Header>
 
# 159 "/usr/include/string.h" <System_Header>
# 1 "/usr/include/xlocale.h" <System_Header>
# 18 "/usr/include/xlocale.h" <System_Header>
 
# 26 "/usr/include/xlocale.h" <System_Header>
 
typedef struct __locale_struct
{
   
  struct __locale_data * __locales [ 13 ] ; 
# 32 "/usr/include/xlocale.h" <System_Header>
   
  const unsigned short int * __ctype_b ;
  const int * __ctype_tolower ;
  const int * __ctype_toupper ;
# 37 "/usr/include/xlocale.h" <System_Header>
   
  const char * __names [ 13 ] ;
} * __locale_t ;
# 41 "/usr/include/xlocale.h" <System_Header>
 
typedef __locale_t locale_t ;
# 160 "/usr/include/string.h" <System_Header>
# 161 "/usr/include/string.h" <System_Header>
 
extern int strcoll_l ( const char * __s1 , const char * __s2 , __locale_t __l )
       ;
 
extern size_t strxfrm_l ( char * __dest , const char * __src , size_t __n ,
			 __locale_t __l ) ;
# 170 "/usr/include/string.h" <System_Header>
 
extern char * strdup ( const char * __s )
       ;
# 177 "/usr/include/string.h" <System_Header>
 
# 179 "/usr/include/string.h" <System_Header>
extern char * strndup ( const char * __string , size_t __n )
       ;
# 207 "/usr/include/string.h" <System_Header>
 
# 231 "/usr/include/string.h" <System_Header>
extern char * strchr ( const char * __s , int __c )
       ;
# 234 "/usr/include/string.h" <System_Header>
 
# 258 "/usr/include/string.h" <System_Header>
extern char * strrchr ( const char * __s , int __c )
       ;
# 279 "/usr/include/string.h" <System_Header>
 
extern size_t strcspn ( const char * __s , const char * __reject )
       ;
# 283 "/usr/include/string.h" <System_Header>
 
extern size_t strspn ( const char * __s , const char * __accept )
       ;
 
# 310 "/usr/include/string.h" <System_Header>
extern char * strpbrk ( const char * __s , const char * __accept )
       ;
# 313 "/usr/include/string.h" <System_Header>
 
# 337 "/usr/include/string.h" <System_Header>
extern char * strstr ( const char * __haystack , const char * __needle )
       ;
# 342 "/usr/include/string.h" <System_Header>
 
extern char * strtok ( char * __restrict __s , const char * __restrict __delim )
      ;
# 348 "/usr/include/string.h" <System_Header>
 
extern char * __strtok_r ( char * __restrict __s ,
			 const char * __restrict __delim ,
			 char * * __restrict __save_ptr )
      ;
# 354 "/usr/include/string.h" <System_Header>
extern char * strtok_r ( char * __restrict __s , const char * __restrict __delim ,
		       char * * __restrict __save_ptr )
      ;
# 393 "/usr/include/string.h" <System_Header>
 
extern size_t strlen ( const char * __s )
       ;
# 400 "/usr/include/string.h" <System_Header>
 
extern size_t strnlen ( const char * __string , size_t __maxlen )
       ;
# 407 "/usr/include/string.h" <System_Header>
 
extern char * strerror ( int __errnum ) ;
# 417 "/usr/include/string.h" <System_Header>
 
# 420 "/usr/include/string.h" <System_Header>
 
# 426 "/usr/include/string.h" <System_Header>
extern int __xpg_strerror_r ( int __errnum , char * __buf , size_t __buflen )
      ;
# 439 "/usr/include/string.h" <System_Header>
 
extern char * strerror_l ( int __errnum , __locale_t __l ) ;
# 445 "/usr/include/string.h" <System_Header>
 
extern void __bzero ( void * __s , size_t __n ) ;
# 449 "/usr/include/string.h" <System_Header>
 
extern void bcopy ( const void * __src , void * __dest , size_t __n )
      ;
# 453 "/usr/include/string.h" <System_Header>
 
extern void bzero ( void * __s , size_t __n ) ;
# 456 "/usr/include/string.h" <System_Header>
 
extern int bcmp ( const void * __s1 , const void * __s2 , size_t __n )
       ;
# 460 "/usr/include/string.h" <System_Header>
 
# 484 "/usr/include/string.h" <System_Header>
extern char * index ( const char * __s , int __c )
       ;
# 488 "/usr/include/string.h" <System_Header>
 
# 512 "/usr/include/string.h" <System_Header>
extern char * rindex ( const char * __s , int __c )
       ;
# 517 "/usr/include/string.h" <System_Header>
 
extern int ffs ( int __i ) __attribute__ ( ( __const__ ) ) ;
# 521 "/usr/include/string.h" <System_Header>
 
# 528 "/usr/include/string.h" <System_Header>
 
extern int strcasecmp ( const char * __s1 , const char * __s2 )
       ;
# 532 "/usr/include/string.h" <System_Header>
 
extern int strncasecmp ( const char * __s1 , const char * __s2 , size_t __n )
       ;
# 551 "/usr/include/string.h" <System_Header>
 
extern char * strsep ( char * * __restrict __stringp ,
		     const char * __restrict __delim )
      ;
# 558 "/usr/include/string.h" <System_Header>
 
extern char * strsignal ( int __sig ) ;
# 561 "/usr/include/string.h" <System_Header>
 
extern char * __stpcpy ( char * __restrict __dest , const char * __restrict __src )
      ;
extern char * stpcpy ( char * __restrict __dest , const char * __restrict __src )
      ;
# 568 "/usr/include/string.h" <System_Header>
 
extern char * __stpncpy ( char * __restrict __dest ,
			const char * __restrict __src , size_t __n )
      ;
extern char * stpncpy ( char * __restrict __dest ,
		      const char * __restrict __src , size_t __n )
      ;
# 9 "main.c"
# 9 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
 
# 30 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 25 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 28 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 33 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 34 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" <System_Header>
# 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" <System_Header>
 
# 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
 
# 30 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 25 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 28 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
# 1 "/usr/include/limits.h" <System_Header>
# 16 "/usr/include/limits.h" <System_Header>
 
# 20 "/usr/include/limits.h" <System_Header>
 
# 25 "/usr/include/limits.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 26 "/usr/include/limits.h" <System_Header>
# 30 "/usr/include/limits.h" <System_Header>
 
# 35 "/usr/include/limits.h" <System_Header>
 
# 40 "/usr/include/limits.h" <System_Header>
 
# 44 "/usr/include/limits.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 11 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" <System_Header>
 
# 45 "/usr/include/limits.h" <System_Header>
# 47 "/usr/include/limits.h" <System_Header>
 
# 50 "/usr/include/limits.h" <System_Header>
 
# 52 "/usr/include/limits.h" <System_Header>
 
# 55 "/usr/include/limits.h" <System_Header>
 
# 59 "/usr/include/limits.h" <System_Header>
 
# 62 "/usr/include/limits.h" <System_Header>
 
# 71 "/usr/include/limits.h" <System_Header>
 
# 75 "/usr/include/limits.h" <System_Header>
 
# 78 "/usr/include/limits.h" <System_Header>
 
# 82 "/usr/include/limits.h" <System_Header>
 
# 85 "/usr/include/limits.h" <System_Header>
 
# 93 "/usr/include/limits.h" <System_Header>
 
# 102 "/usr/include/limits.h" <System_Header>
 
# 106 "/usr/include/limits.h" <System_Header>
 
# 116 "/usr/include/limits.h" <System_Header>
 
# 120 "/usr/include/limits.h" <System_Header>
 
# 128 "/usr/include/limits.h" <System_Header>
 
# 142 "/usr/include/limits.h" <System_Header>
 
# 143 "/usr/include/limits.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
# 16 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 22 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 28 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 30 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 33 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 36 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 39 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 46 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 50 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 53 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 56 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 59 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 63 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 66 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 69 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 72 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 75 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 82 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 95 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 98 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 102 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 105 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 108 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 111 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 114 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 117 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 120 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 123 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 127 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 130 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 133 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 136 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 155 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 159 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 23 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 37 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
# 1 "/usr/include/linux/limits.h" <System_Header>
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
# 40 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 45 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 50 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 55 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 61 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 63 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 66 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 68 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 71 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 73 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 77 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 80 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 83 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 86 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 89 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 92 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 95 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 98 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" <System_Header>
 
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
# 169 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" <System_Header>
 
# 144 "/usr/include/limits.h" <System_Header>
# 147 "/usr/include/limits.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
# 16 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 20 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 26 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 29 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 32 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 35 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 39 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 43 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 46 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 50 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 54 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 60 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 87 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" <System_Header>
 
# 148 "/usr/include/limits.h" <System_Header>
# 169 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
# 31 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
# 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" <System_Header>
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
# 57 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 62 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 66 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 71 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 77 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 85 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 102 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 108 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 116 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 122 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 127 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 133 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 138 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 144 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 163 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" <System_Header>
 
# 31 "/opt/pgi/linux86-64/17.10/include-gcc50/limits.h" <System_Header>
# 10 "main.c"
# 11 "main.c"
 
# 27 "main.c"
int __MACC_NUMGPUS = - 1 ;
# 29 "main.c"
int __macc_get_num_gpus ( )
{
    return acc_get_num_devices ( acc_device_nvidia ) ;
}
# 34 "main.c"
int * __MACC_TOPOLOGY ;
# 36 "main.c"
void __macc_set_gpu_num ( int i )
{
    acc_set_device_num ( __MACC_TOPOLOGY [ i ] , acc_device_nvidia ) ;
}
# 44 "main.c"
struct __MaccDataTableEntry {
    void * addr ;
    void * addr_ub ;
    int type_size ;
    int entire_lb ;
    int entire_ub ;
    int dirty ;
    int dirty_lb ;
    int dirty_ub ;
    int offset ;
    struct __MaccDataTableEntry * next ;
} ;
# 57 "main.c"
struct __MaccDataTable {
    struct __MaccDataTableEntry * entries [ 256 ] ;
} ;
# 61 "main.c"
struct __MaccDataTable * __MACC_DATA_TABLE_SET ;
# 67 "main.c"
struct __MaccDataWrapCache {
    void * addr [ 16 * 16 ] ;
    struct __MaccDataTableEntry * entry [ 16 * 16 ] ;
    int offset [ 16 * 16 ] ;
    int cachenum [ 16 ] ;
} ;
# 74 "main.c"
struct __MaccDataWrapCache * __MACC_DATA_WRAP_CACHE_SET ;
# 76 "main.c"
void __macc_data_table_insert (
    int gpu_num , void * ptr , int type_size , int entire_lb , int entire_ub )
{
    int index = ( ( ( long ) ptr / 16 ) % 256 ) ;
# 81 "main.c"
    struct __MaccDataTableEntry * new_entry = malloc_managed ( sizeof ( struct __MaccDataTableEntry ) ) ;
# 83 "main.c"
    new_entry -> addr = ptr ;
    new_entry -> addr_ub = ptr + entire_ub * type_size ;
    new_entry -> type_size = type_size ;
    new_entry -> entire_lb = entire_lb ;
    new_entry -> entire_ub = entire_ub ;
    new_entry -> dirty = 0 ;
    new_entry -> dirty_lb = - 1 ;
    new_entry -> dirty_ub = - 1 ;
    new_entry -> next = __MACC_DATA_TABLE_SET [ gpu_num ] . entries [ index ] ;
# 93 "main.c"
    __MACC_DATA_TABLE_SET [ gpu_num ] . entries [ index ] = new_entry ;
}
# 96 "main.c"
struct __MaccDataTableEntry * __macc_data_table_find ( int gpu_num , void * ptr )
{
    int index = ( ( ( long ) ptr / 16 ) % 256 ) ;
    struct __MaccDataTableEntry * entry = __MACC_DATA_TABLE_SET [ gpu_num ] . entries [ index ] ;
# 101 "main.c"
    while ( entry != ( ( void * ) 0 ) ) {
        if ( entry -> addr == ptr ) {
            entry -> offset = 0 ;
            return entry ;
        }
# 107 "main.c"
        entry = entry -> next ;
    }
# 110 "main.c"
    struct __MaccDataWrapCache wrap_cache = __MACC_DATA_WRAP_CACHE_SET [ gpu_num ] ;
    int lane = ( ( ( long ) ptr / 16 ) % 16 ) ;
# 113 "main.c"
    for ( int i = 0 ; i < wrap_cache . cachenum [ lane ] ; i ++ ) {
        if ( ptr == wrap_cache . addr [ lane * 16 + i ] ) {
            entry = wrap_cache . entry [ lane * 16 + i ] ;
            entry -> offset = wrap_cache . offset [ lane * 16 + i ] ;
            return entry ;
        }
    }
# 121 "main.c"
    for ( int i = 0 ; i < 256 ; i ++ ) {
        entry = __MACC_DATA_TABLE_SET [ gpu_num ] . entries [ i ] ;
# 124 "main.c"
        while ( entry != ( ( void * ) 0 ) ) {
            if ( entry -> addr <= ptr && ptr <= entry -> addr_ub ) {
                int offset = ( ptr - entry -> addr ) / entry -> type_size ;
# 128 "main.c"
                int cachenum = wrap_cache . cachenum [ lane ] ;
# 130 "main.c"
                if ( cachenum == 16 ) {
                    cachenum = 0 ;
                }
# 134 "main.c"
                wrap_cache . addr [ lane * 16 + cachenum ] = entry -> addr ;
                wrap_cache . entry [ lane * 16 + cachenum ] = entry ;
                wrap_cache . offset [ lane * 16 + cachenum ] = offset ;
# 138 "main.c"
                wrap_cache . cachenum [ lane ] = cachenum + 1 ;
# 140 "main.c"
                entry -> offset = offset ;
                return entry ;
            }
# 144 "main.c"
            entry = entry -> next ;
        }
    }
# 148 "main.c"
    fprintf ( stderr , "Error on __macc_data_table_find: Not found the item %p\n" , ptr ) ;
    exit ( - 1 ) ;
# 151 "main.c"
    return ( ( void * ) 0 ) ;
}
# 154 "main.c"
void __macc_data_table_delete ( int gpu_num , void * ptr )
{
    int index = ( ( ( long ) ptr / 16 ) % 256 ) ;
    struct __MaccDataTableEntry * entry = __MACC_DATA_TABLE_SET [ gpu_num ] . entries [ index ] ;
    struct __MaccDataTableEntry * pre = ( ( void * ) 0 ) ;
# 160 "main.c"
    memset ( __MACC_DATA_WRAP_CACHE_SET [ gpu_num ] . cachenum , 0 , 16 * sizeof ( int ) ) ;
# 162 "main.c"
    if ( entry != ( ( void * ) 0 ) ) {
        if ( entry -> addr == ptr ) {
            __MACC_DATA_TABLE_SET [ gpu_num ] . entries [ index ] = entry -> next ;
            free_managed ( entry ) ;
            return ;
        }
# 169 "main.c"
        pre = entry ;
        entry = entry -> next ;
    }
# 173 "main.c"
    while ( pre != ( ( void * ) 0 ) && entry != ( ( void * ) 0 ) ) {
        if ( entry -> addr == ptr ) {
            pre -> next = entry -> next ;
            free_managed ( entry ) ;
            return ;
        }
# 180 "main.c"
        pre = entry ;
        entry = entry -> next ;
    }
# 184 "main.c"
    fprintf ( stderr , "Error on __macc_data_table_delete: Not found the item %p\n" , ptr ) ;
    exit ( - 1 ) ;
}
# 188 "main.c"
void __macc_delete ( int gpu_num , void * ptr , int type_size , int lb , int length )
{
    acc_delete_async ( ( ptr + lb * type_size ) , length * type_size , gpu_num ) ;
    __macc_data_table_delete ( gpu_num , ptr ) ;
    acc_wait ( gpu_num ) ;
}
# 195 "main.c"
void __macc_copyout ( int gpu_num , void * ptr , int type_size , int lb , int length )
{
    struct __MaccDataTableEntry * entry = __macc_data_table_find ( gpu_num , ptr ) ;
# 199 "main.c"
    if ( entry -> dirty )
        acc_update_self_async ( ( entry -> addr + entry -> dirty_lb * entry -> type_size ) ,
                              ( ( entry -> dirty_ub - entry -> dirty_lb + 1 ) * entry -> type_size ) ,
                              gpu_num ) ;
# 204 "main.c"
    __macc_delete ( gpu_num , ptr , type_size , lb , length ) ;
}
# 207 "main.c"
void __macc_copyin ( int gpu_num , void * ptr , int type_size , int lb , int length )
{
    acc_copyin_async ( ( ptr + lb * type_size ) , length * type_size , gpu_num ) ;
    __macc_data_table_insert ( gpu_num , ptr , type_size , lb , lb + length - 1 ) ;
    acc_wait ( gpu_num ) ;
}
# 214 "main.c"
void __macc_create ( int gpu_num , void * ptr , int type_size , int lb , int length )
{
    acc_create_async ( ( ptr + lb * type_size ) , length * type_size , gpu_num ) ;
    __macc_data_table_insert ( gpu_num , ptr , type_size , lb , lb + length - 1 ) ;
    acc_wait ( gpu_num ) ;
}
# 221 "main.c"
void * __macc_malloc ( unsigned long size )
{
    void * ret = malloc_managed ( size ) ;
# 225 "main.c"
    
# 225 "main.c"
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
    {
        __macc_create ( omp_get_thread_num ( ) , ret , 1 , 0 , size ) ;
    }
# 230 "main.c"
    return ret ;
}
# 233 "main.c"
void __macc_free ( void * ptr )
{
    
# 235 "main.c"
#pragma omp parallel num_threads ( __MACC_NUMGPUS )
    {
        int gpu_num = omp_get_thread_num ( ) ;
        struct __MaccDataTableEntry * entry =
            __macc_data_table_find ( gpu_num , ptr ) ;
        __macc_delete ( gpu_num , ptr , 1 , 0 , entry -> entire_ub + 1 ) ;
    }
    free_managed ( ptr ) ;
}
# 245 "main.c"
void __macc_update_self ( int gpu_num , void * ptr , int type_size , int lb , int length )
{
    struct __MaccDataTableEntry * entry = __macc_data_table_find ( gpu_num , ptr ) ;
    ptr = entry -> addr ;
    lb += entry -> offset ;
    int ub = lb + length - 1 ;
# 252 "main.c"
    if ( entry -> dirty && ( ! ( entry -> dirty_lb > ub || entry -> dirty_ub < lb ) ) ) {
        int new_lb = ( ( ( entry -> dirty_lb ) > ( lb ) ) ? ( entry -> dirty_lb ) : ( lb ) ) ;
        int new_ub = ( ( ( entry -> dirty_ub ) < ( ub ) ) ? ( entry -> dirty_ub ) : ( ub ) ) ;
        acc_update_self ( ( ptr + new_lb * type_size ) , ( ( new_ub - new_lb + 1 ) * type_size ) ) ;
    }
}
# 259 "main.c"
void __macc_update_device ( int gpu_num , void * ptr , int type_size , int lb , int length )
{
    acc_update_device ( ( ptr + lb * type_size ) , length * type_size ) ;
}
# 264 "main.c"
void __macc_init_access_region ( int gpu_num , int * lb_set , int * ub_set )
{
    lb_set [ gpu_num ] = 2147483647 ;
    ub_set [ gpu_num ] = - 1 ;
}
# 270 "main.c"
void __macc_update_access_region ( int gpu_num , int * lb_set , int * ub_set , int val )
{
    lb_set [ gpu_num ] = ( ( ( lb_set [ gpu_num ] ) < ( val ) ) ? ( lb_set [ gpu_num ] ) : ( val ) ) ;
    ub_set [ gpu_num ] = ( ( ( ub_set [ gpu_num ] ) > ( val ) ) ? ( ub_set [ gpu_num ] ) : ( val ) ) ;
}
# 276 "main.c"
int __macc_region_is_overlapping ( int * lb_set , int * ub_set )
{
    for ( int i = 0 ; i < __MACC_NUMGPUS - 1 ; i ++ )
        for ( int j = i + 1 ; j < __MACC_NUMGPUS ; j ++ )
            if ( ( ! ( lb_set [ i ] > ub_set [ j ] || ub_set [ i ] < lb_set [ j ] ) ) )
                return 1 ;
# 283 "main.c"
    return 0 ;
}
# 286 "main.c"
 
void __macc_calc_loop_region
( int * loop_lb_set , int * loop_ub_set ,
 int entire_start , int entire_end , int step , int until_equal )
{
    int tmp = entire_start + step * ( ( entire_end - entire_start ) / step ) ;
    entire_end = tmp - ( ( until_equal || entire_end != tmp ) ? 0 : step ) ;
# 294 "main.c"
    int len = entire_end - entire_start + step ;
    int width = ( int ) ( ( float ) len / __MACC_NUMGPUS ) ;
    width -= width % step ;
    int rem = ( len - width * __MACC_NUMGPUS ) / step ;
    width -= step ;
# 300 "main.c"
    int pos = entire_start ;
# 302 "main.c"
    for ( int i = 0 ; i < __MACC_NUMGPUS ; i ++ ) {
        loop_lb_set [ i ] = pos ;
        pos = ( width < 0 ) ? pos : ( ( ( pos + width + ( ( i < rem ) ? step : 0 ) ) < ( entire_end ) ) ? ( pos + width + ( ( i < rem ) ? step : 0 ) ) : ( entire_end ) ) ;
        loop_ub_set [ i ] = pos ;
        pos = ( ( ( pos + step ) < ( entire_end ) ) ? ( pos + step ) : ( entire_end ) ) ;
    }
}
# 310 "main.c"
void __macc_adjust_data_region ( void * ptr , int gpu_num , int * lb_set , int * ub_set )
{
    struct __MaccDataTableEntry * entry = __macc_data_table_find ( gpu_num , ptr ) ;
# 314 "main.c"
    lb_set [ gpu_num ] += entry -> offset ;
    ub_set [ gpu_num ] += entry -> offset ;
}
# 318 "main.c"
void __macc_rewrite_loop_region_into_single ( int * loop_lb_set , int * loop_ub_set )
{
    loop_ub_set [ 0 ] = loop_ub_set [ __MACC_NUMGPUS - 1 ] ;
# 322 "main.c"
    for ( int i = 1 ; i < __MACC_NUMGPUS ; i ++ ) {
        loop_lb_set [ i ] = 1 ;
        loop_ub_set [ i ] = 0 ;
    }
}
# 328 "main.c"
void __macc_rewrite_data_region_into_single ( int * lb_set , int * ub_set )
{
    int gpu_ub = __MACC_NUMGPUS - 1 ;
    lb_set [ 0 ] = ( ( ( lb_set [ 0 ] ) < ( lb_set [ gpu_ub ] ) ) ? ( lb_set [ 0 ] ) : ( lb_set [ gpu_ub ] ) ) ;
    ub_set [ 0 ] = ( ( ( ub_set [ 0 ] ) > ( ub_set [ gpu_ub ] ) ) ? ( ub_set [ 0 ] ) : ( ub_set [ gpu_ub ] ) ) ;
}
# 335 "main.c"
void __macc_sync_data ( int gpu_num , void * ptr , int type_size , int lb , int ub )
{
    void * update_addr = ( ptr + lb * type_size ) ;
    size_t length_b = ( ( ub - lb + 1 ) * type_size ) ;
# 340 "main.c"
    acc_update_self ( update_addr , length_b ) ;
# 342 "main.c"
     
    for ( int i = 0 ; i < __MACC_NUMGPUS ; i ++ )
    {
         
        if ( i != gpu_num ) {
            __macc_set_gpu_num ( i ) ;
            acc_update_device ( update_addr , length_b ) ;
        }
    }
# 352 "main.c"
    __macc_set_gpu_num ( gpu_num ) ;
}
# 355 "main.c"
 
void __macc_set_data_region ( int gpu_num , void * ptr , int multi ,
                            int use_type , int * use_lb_set , int * use_ub_set ,
                            int def_type , int * def_lb_set , int * def_ub_set )
{
    struct __MaccDataTableEntry * entry = __macc_data_table_find ( gpu_num , ptr ) ;
    ptr = entry -> addr ;
# 363 "main.c"
     
     
     
    if ( entry -> dirty && ( multi || gpu_num != 0 ) && __MACC_NUMGPUS > 1 ) {
        int update_all = 0 ;
        int update_all_DtoH = 0 ;
# 370 "main.c"
        if ( use_type == 0 || def_type == 0 )
            update_all = 1 ;
# 373 "main.c"
        else if ( def_type == 2 ) {
            for ( int i = 0 ; i < __MACC_NUMGPUS ; i ++ ) {
                if ( i != gpu_num &&
                    ( ! ( entry -> dirty_lb > def_ub_set [ i ] || entry -> dirty_ub < def_lb_set [ i ] ) ) ) {
# 378 "main.c"
                    update_all = 1 ;
                    break ;
                }
            }
        }
# 384 "main.c"
        if ( ! update_all ) {
            int every_whole = 1 ;
            int unused_lb = entry -> dirty_lb ;
            int unused_ub = entry -> dirty_ub ;
# 389 "main.c"
            for ( int i = 0 ; i < __MACC_NUMGPUS ; i ++ ) {
                if ( i != gpu_num ) {
                    if ( ( use_lb_set [ i ] <= entry -> dirty_lb && entry -> dirty_ub <= use_ub_set [ i ] ) ) {
# 393 "main.c"
                        update_all_DtoH = 1 ;
                    }
                    else {
                        every_whole = 0 ;
# 398 "main.c"
                        if ( use_lb_set [ i ] <= unused_lb )
                            unused_lb = ( ( ( unused_lb ) > ( use_ub_set [ i ] + 1 ) ) ? ( unused_lb ) : ( use_ub_set [ i ] + 1 ) ) ;
                        else if ( use_ub_set [ i ] >= unused_ub )
                            unused_ub = ( ( ( unused_ub ) < ( use_lb_set [ i ] - 1 ) ) ? ( unused_ub ) : ( use_lb_set [ i ] - 1 ) ) ;
                    }
                }
            }
# 406 "main.c"
            if ( every_whole )
                update_all = 1 ;
            if ( unused_ub < unused_lb )
                update_all_DtoH = 1 ;
        }
# 412 "main.c"
         
        if ( update_all ) {
            __macc_sync_data ( gpu_num , ptr , entry -> type_size , entry -> dirty_lb , entry -> dirty_ub ) ;
            entry -> dirty = 0 ;
        }
# 418 "main.c"
         
        else if ( entry -> dirty && use_type == 2 ) {
            int thread_num = multi ? __MACC_NUMGPUS : 1 ;
# 422 "main.c"
            if ( update_all_DtoH )
                acc_update_self ( ( ptr + entry -> dirty_lb * entry -> type_size ) ,
                                ( ( entry -> dirty_ub - entry -> dirty_lb + 1 ) * entry -> type_size ) ) ;
# 426 "main.c"
             
            for ( int i = 0 ; i < thread_num ; i ++ )
            {
                 
# 431 "main.c"
                if ( i != gpu_num && ( ! ( entry -> dirty_lb > use_ub_set [ i ] || entry -> dirty_ub < use_lb_set [ i ] ) ) ) {
# 435 "main.c"
                    int update_lb = ( ( ( entry -> dirty_lb ) > ( use_lb_set [ i ] ) ) ? ( entry -> dirty_lb ) : ( use_lb_set [ i ] ) ) ;
                    int update_ub = ( ( ( entry -> dirty_ub ) < ( use_ub_set [ i ] ) ) ? ( entry -> dirty_ub ) : ( use_ub_set [ i ] ) ) ;
                    void * update_addr = ( ptr + update_lb * entry -> type_size ) ;
                    size_t length_b = ( ( update_ub - update_lb + 1 ) * entry -> type_size ) ;
# 440 "main.c"
                    if ( ! update_all_DtoH ) {
                        __macc_set_gpu_num ( gpu_num ) ;
                        acc_update_self ( update_addr , length_b ) ;
                    }
                    __macc_set_gpu_num ( i ) ;
                    acc_update_device ( update_addr , length_b ) ;
                }
                 
            }
            __macc_set_gpu_num ( gpu_num ) ;
        }
    }
# 453 "main.c"
     
     
     
     
     
    if ( ( multi || gpu_num == 0 ) && def_type != 1 ) {
        if ( def_type == 0 ) {
            entry -> dirty = 1 ;
            entry -> dirty_lb = entry -> entire_lb ;
            entry -> dirty_ub = entry -> entire_ub ;
        }
# 465 "main.c"
        else if ( ! ( entry -> dirty ) ) {
            entry -> dirty = 1 ;
            entry -> dirty_lb = def_lb_set [ gpu_num ] ;
            entry -> dirty_ub = def_ub_set [ gpu_num ] ;
        }
# 471 "main.c"
        else if (
             
            ( ! ( entry -> dirty_lb > def_ub_set [ gpu_num ] || entry -> dirty_ub < def_lb_set [ gpu_num ] ) ) ||
# 477 "main.c"
             
            entry -> dirty_lb == def_ub_set [ gpu_num ] + 1 ||
            def_lb_set [ gpu_num ] == entry -> dirty_ub + 1
            ) {
            entry -> dirty_lb = ( ( ( entry -> dirty_lb ) < ( def_lb_set [ gpu_num ] ) ) ? ( entry -> dirty_lb ) : ( def_lb_set [ gpu_num ] ) ) ;
            entry -> dirty_ub = ( ( ( entry -> dirty_ub ) > ( def_ub_set [ gpu_num ] ) ) ? ( entry -> dirty_ub ) : ( def_ub_set [ gpu_num ] ) ) ;
        }
# 485 "main.c"
        else {
            __macc_sync_data ( gpu_num , ptr , entry -> type_size , entry -> dirty_lb , entry -> dirty_ub ) ;
            entry -> dirty_lb = def_lb_set [ gpu_num ] ;
            entry -> dirty_ub = def_ub_set [ gpu_num ] ;
        }
    }
}
# 493 "main.c"
void __macc_set_data_region_multi (
    int gpu_num , int multi , int len , void * * ptrs ,
    int * use_type , int * * use_lb_set , int * * use_ub_set ,
    int * def_type , int * * def_lb_set , int * * def_ub_set )
{
     
    for ( int i = 0 ; i < len ; i ++ )
    {
         
        int tnum = i ;
# 504 "main.c"
        __macc_set_gpu_num ( gpu_num ) ;
# 506 "main.c"
        __macc_set_data_region (
            gpu_num , ptrs [ tnum ] , multi ,
            use_type [ tnum ] , use_lb_set [ tnum ] , use_ub_set [ tnum ] ,
            def_type [ tnum ] , def_lb_set [ tnum ] , def_ub_set [ tnum ] ) ;
    }
}
# 513 "main.c"
void __macc_init ( )
{
    char * env_macc_numgpus = getenv ( "MACC_NUMGPUS" ) ;
# 517 "main.c"
    if ( env_macc_numgpus != ( ( void * ) 0 ) ) {
        __MACC_NUMGPUS = atoi ( env_macc_numgpus ) ;
    }
    else {
        __MACC_NUMGPUS = __macc_get_num_gpus ( ) ;
    }
# 524 "main.c"
    if ( __MACC_NUMGPUS <= 0 ) {
        fputs ( "[MACC ERROR] No GPU device found." , stderr ) ;
        exit ( - 1 ) ;
    }
# 529 "main.c"
    __MACC_TOPOLOGY = malloc_managed ( __MACC_NUMGPUS * sizeof ( int ) ) ;
    char * topo = getenv ( "MACC_TOPOLOGY" ) ;
# 532 "main.c"
    if ( topo != ( ( void * ) 0 ) ) {
        int i = 0 ;
        topo = strtok ( topo , "," ) ;
        while ( topo != ( ( void * ) 0 ) && i < __MACC_NUMGPUS ) {
            __MACC_TOPOLOGY [ i ] = atoi ( topo ) ;
            topo = strtok ( ( ( void * ) 0 ) , "," ) ;
            i ++ ;
        }
    } else {
        for ( int i = 0 ; i < __MACC_NUMGPUS ; i ++ )
            __MACC_TOPOLOGY [ i ] = i ;
    }
# 545 "main.c"
     
     
     
     
     
     
     
     
     
     
     
     
# 558 "main.c"
    __MACC_DATA_TABLE_SET = calloc_managed ( __MACC_NUMGPUS , sizeof ( struct __MaccDataTable ) ) ;
    __MACC_DATA_WRAP_CACHE_SET = calloc_managed ( __MACC_NUMGPUS , sizeof ( struct __MaccDataWrapCache ) ) ;
# 561 "main.c"
     
    for ( int t = 0 ; t < 10 ; t ++ ) {
        printf ( "[MACC] Wake up (%d)\n" , t ) ;
# 565 "main.c"
        int n = 256 * 1024 * 1024 ;
        int * tmp = malloc_managed ( n * sizeof ( int ) ) ;
# 568 "main.c"
        
# 568 "main.c"
#pragma acc data copy ( tmp [ 0 : n ] )
        {
            
# 570 "main.c"
#pragma acc parallel loop num_gangs ( 512 ) vector_length ( 1024 ) gang vector
# 572 "main.c"
            for ( int i = 1 ; i < n ; i ++ )
                tmp [ i ] = i ;
# 575 "main.c"
            
# 575 "main.c"
#pragma acc parallel loop num_gangs ( 512 ) vector_length ( 1024 ) gang vector
# 577 "main.c"
            for ( int i = 1 ; i < n ; i ++ )
                tmp [ n - i ] += i ;
        }
# 581 "main.c"
        free_managed ( tmp ) ;
    }
}
# 598 "main.c"
 
 
 
# 601 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 19 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
# 3 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
 
# 20 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 25 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * malloc_managed ( size_t ) ;
extern void * calloc_managed ( size_t , size_t ) ;
extern void free_managed ( void * ) ;
extern void cfree_managed ( void * ) ;
# 31 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * realloc_managed ( void * , size_t ) ;
extern void * valloc_managed ( size_t ) ;
extern void * pvalloc_managed ( size_t ) ;
extern void * memalign_managed ( size_t , size_t ) ;
extern int posix_memalign_managed ( void * * , size_t , size_t ) ;
extern char * tmpnam_managed ( char * ) ;
# 43 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
 
# 58 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 602 "main.c"
# 602 "main.c"
# 1 "/usr/include/stdio.h" <System_Header>
# 17 "/usr/include/stdio.h" <System_Header>
 
# 21 "/usr/include/stdio.h" <System_Header>
 
# 603 "main.c"
# 604 "main.c"
void c_print_results ( char * name ,
                      char class ,
                      int n1 , 
                      int n2 ,
                      int n3 ,
                      int niter ,
                      double t ,
                      double mops ,
		      char * optype ,
                      int passed_verification ,
                      char * npbversion ,
                      char * compiletime ,
                      char * cc ,
                      char * clink ,
                      char * c_lib ,
                      char * c_inc ,
                      char * cflags ,
                      char * clinkflags )
{
    printf ( "\n\n %s Benchmark Completed\n" , name ) ; 
# 625 "main.c"
    printf ( " Class           =                        %c\n" , class ) ;
# 627 "main.c"
    if ( n3 == 0 ) {
        long nn = n1 ;
        if ( n2 != 0 ) nn *= n2 ;
        printf ( " Size            =             %12ld\n" , nn ) ; 
    }
    else
        printf ( " Size            =             %4dx%4dx%4d\n" , n1 , n2 , n3 ) ;
# 635 "main.c"
    printf ( " Iterations      =             %12d\n" , niter ) ;
 
    printf ( " Time in seconds =             %12.2f\n" , t ) ;
# 639 "main.c"
    printf ( " Mop/s total     =             %12.2f\n" , mops ) ;
# 641 "main.c"
    printf ( " Operation type  = %24s\n" , optype ) ;
# 643 "main.c"
    if ( passed_verification < 0 )
        printf ( " Verification    =            NOT PERFORMED\n" ) ;
    else if ( passed_verification )
        printf ( " Verification    =               SUCCESSFUL\n" ) ;
    else
        printf ( " Verification    =             UNSUCCESSFUL\n" ) ;
# 650 "main.c"
    printf ( " Version         =             %12s\n" , npbversion ) ;
# 652 "main.c"
    printf ( " Compile date    =             %12s\n" , compiletime ) ;
# 654 "main.c"
    printf ( "\n Compile options:\n" ) ;
# 656 "main.c"
    printf ( "    CC           = %s\n" , cc ) ;
# 658 "main.c"
    printf ( "    CLINK        = %s\n" , clink ) ;
# 660 "main.c"
    printf ( "    C_LIB        = %s\n" , c_lib ) ;
# 662 "main.c"
    printf ( "    C_INC        = %s\n" , c_inc ) ;
# 664 "main.c"
    printf ( "    CFLAGS       = %s\n" , cflags ) ;
# 666 "main.c"
    printf ( "    CLINKFLAGS   = %s\n" , clinkflags ) ;
# 672 "main.c"
    printf ( "\n--------------------------------------\n" ) ;
    printf ( " Please send all errors/feedbacks to:\n" ) ;
    printf ( " Center for Manycore Programming\n" ) ;
    printf ( " cmp@aces.snu.ac.kr\n" ) ;
    printf ( " http://aces.snu.ac.kr\n" ) ;
    printf ( "--------------------------------------\n" ) ;
}
 
# 680 "main.c"
# 1 "../../common/wtime.h"
# 3 "../../common/wtime.h"
 
# 681 "main.c"
# 681 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 19 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
# 3 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
 
# 20 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 25 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * malloc_managed ( size_t ) ;
extern void * calloc_managed ( size_t , size_t ) ;
extern void free_managed ( void * ) ;
extern void cfree_managed ( void * ) ;
# 31 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * realloc_managed ( void * , size_t ) ;
extern void * valloc_managed ( size_t ) ;
extern void * pvalloc_managed ( size_t ) ;
extern void * memalign_managed ( size_t , size_t ) ;
extern int posix_memalign_managed ( void * * , size_t , size_t ) ;
extern char * tmpnam_managed ( char * ) ;
# 43 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
 
# 58 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 682 "main.c"
# 683 "main.c"
 
void wtime_ ( double * ) ;
# 687 "main.c"
 
 
 
static double elapsed_time ( void )
{
    double t ;
# 694 "main.c"
    wtime_ ( & t ) ;
    return ( t ) ;
}
# 699 "main.c"
static double start [ 64 ] , elapsed [ 64 ] ;
# 701 "main.c"
 
 
 
void timer_clear ( int n )
{
    elapsed [ n ] = 0.0 ;
}
# 710 "main.c"
 
 
 
void timer_start ( int n )
{
    start [ n ] = elapsed_time ( ) ;
}
# 719 "main.c"
 
 
 
void timer_stop ( int n )
{
    double t , now ;
# 726 "main.c"
    now = elapsed_time ( ) ;
    t = now - start [ n ] ;
    elapsed [ n ] += t ;
# 730 "main.c"
}
# 733 "main.c"
 
 
 
double timer_read ( int n )
{
    return ( elapsed [ n ] ) ;
}
# 741 "main.c"
# 1 "/usr/include/stdio.h" <System_Header>
# 17 "/usr/include/stdio.h" <System_Header>
 
# 21 "/usr/include/stdio.h" <System_Header>
 
# 742 "main.c"
# 742 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 29 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 35 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double tgamma ( double ) ;
float tgammaf ( float ) ;
# 38 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
double round ( double ) ;
 
float roundf ( float ) ;
long int lround ( double ) ;
 
long int lroundf ( float ) ;
long long int llround ( double ) ;
 
long long int llroundf ( float ) ;
# 59 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
# 1 "/usr/include/math.h" <System_Header>
# 17 "/usr/include/math.h" <System_Header>
 
# 21 "/usr/include/math.h" <System_Header>
 
# 26 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 27 "/usr/include/math.h" <System_Header>
# 30 "/usr/include/math.h" <System_Header>
 
# 31 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" <System_Header>
 
# 24 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" <System_Header>
 
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" <System_Header>
 
# 31 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" <System_Header>
 
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" <System_Header>
# 32 "/usr/include/math.h" <System_Header>
# 34 "/usr/include/math.h" <System_Header>
 
# 35 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" <System_Header>
# 18 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" <System_Header>
 
# 24 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" <System_Header>
 
# 39 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" <System_Header>
# 1 "/usr/include/endian.h" <System_Header>
# 16 "/usr/include/endian.h" <System_Header>
 
# 40 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" <System_Header>
# 41 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" <System_Header>
typedef union { unsigned char __c [ 8 ] ; double __d ; } __huge_val_t ;
# 50 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" <System_Header>
static __huge_val_t __huge_val = { { 0 , 0 , 0 , 0 , 0 , 0 , 0xf0 , 0x7f } } ;
# 36 "/usr/include/math.h" <System_Header>
# 37 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" <System_Header>
# 18 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" <System_Header>
 
# 24 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" <System_Header>
 
# 39 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" <System_Header>
typedef union { unsigned char __c [ 4 ] ; float __f ; } __huge_valf_t ;
# 48 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" <System_Header>
static __huge_valf_t __huge_valf = { { 0 , 0 , 0x80 , 0x7f } } ;
# 38 "/usr/include/math.h" <System_Header>
# 38 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" <System_Header>
# 18 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" <System_Header>
 
# 37 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" <System_Header>
static union { unsigned char __c [ 12 ] ; long double __ld ; } __huge_vall = { { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0x80 , 0xff , 0x7f , 0 , 0 } } ;
# 39 "/usr/include/math.h" <System_Header>
# 40 "/usr/include/math.h" <System_Header>
 
# 41 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/inf.h" <System_Header>
 
# 23 "/usr/include/x86_64-linux-gnu/bits/inf.h" <System_Header>
 
# 42 "/usr/include/math.h" <System_Header>
# 43 "/usr/include/math.h" <System_Header>
 
# 44 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/nan.h" <System_Header>
 
# 24 "/usr/include/x86_64-linux-gnu/bits/nan.h" <System_Header>
 
# 39 "/usr/include/x86_64-linux-gnu/bits/nan.h" <System_Header>
# 1 "/usr/include/endian.h" <System_Header>
# 16 "/usr/include/endian.h" <System_Header>
 
# 40 "/usr/include/x86_64-linux-gnu/bits/nan.h" <System_Header>
# 48 "/usr/include/x86_64-linux-gnu/bits/nan.h" <System_Header>
static union { unsigned char __c [ 4 ] ; float __d ; } __qnan_union
  __attribute__ ( ( __unused__ ) ) = { { 0 , 0 , 0xc0 , 0x7f } } ;
# 45 "/usr/include/math.h" <System_Header>
# 47 "/usr/include/math.h" <System_Header>
 
# 48 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" <System_Header>
# 16 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" <System_Header>
 
# 27 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" <System_Header>
 
typedef float float_t ;	
typedef double double_t ;	
 
# 41 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" <System_Header>
 
# 46 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" <System_Header>
 
# 49 "/usr/include/math.h" <System_Header>
# 53 "/usr/include/math.h" <System_Header>
 
# 83 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 43 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 50 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double acos ( double __x ) ; extern double __acos ( double __x ) ;
 
extern double asin ( double __x ) ; extern double __asin ( double __x ) ;
 
extern double atan ( double __x ) ; extern double __atan ( double __x ) ;
 
extern double atan2 ( double __y , double __x ) ; extern double __atan2 ( double __y , double __x ) ;
# 62 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern double cos ( double __x ) ; extern double __cos ( double __x ) ;
 
 extern double sin ( double __x ) ; extern double __sin ( double __x ) ;
 
extern double tan ( double __x ) ; extern double __tan ( double __x ) ;
# 69 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 71 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double cosh ( double __x ) ; extern double __cosh ( double __x ) ;
 
extern double sinh ( double __x ) ; extern double __sinh ( double __x ) ;
 
extern double tanh ( double __x ) ; extern double __tanh ( double __x ) ;
# 87 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double acosh ( double __x ) ; extern double __acosh ( double __x ) ;
 
extern double asinh ( double __x ) ; extern double __asinh ( double __x ) ;
 
extern double atanh ( double __x ) ; extern double __atanh ( double __x ) ;
# 96 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 99 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern double exp ( double __x ) ; extern double __exp ( double __x ) ;
# 102 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double frexp ( double __x , int * __exponent ) ; extern double __frexp ( double __x , int * __exponent ) ;
# 105 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double ldexp ( double __x , int __exponent ) ; extern double __ldexp ( double __x , int __exponent ) ;
# 108 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern double log ( double __x ) ; extern double __log ( double __x ) ;
# 111 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double log10 ( double __x ) ; extern double __log10 ( double __x ) ;
# 114 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double modf ( double __x , double * __iptr ) ; extern double __modf ( double __x , double * __iptr ) ;
# 127 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double expm1 ( double __x ) ; extern double __expm1 ( double __x ) ;
# 130 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double log1p ( double __x ) ; extern double __log1p ( double __x ) ;
# 133 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double logb ( double __x ) ; extern double __logb ( double __x ) ;
# 140 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double exp2 ( double __x ) ; extern double __exp2 ( double __x ) ;
# 143 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double log2 ( double __x ) ; extern double __log2 ( double __x ) ;
# 149 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 152 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern double pow ( double __x , double __y ) ; extern double __pow ( double __x , double __y ) ;
# 155 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double sqrt ( double __x ) ; extern double __sqrt ( double __x ) ;
# 161 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double hypot ( double __x , double __y ) ; extern double __hypot ( double __x , double __y ) ;
# 168 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double cbrt ( double __x ) ; extern double __cbrt ( double __x ) ;
# 174 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double ceil ( double __x ) __attribute__ ( ( __const__ ) ) ; extern double __ceil ( double __x ) __attribute__ ( ( __const__ ) ) ;
# 180 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double fabs ( double __x ) __attribute__ ( ( __const__ ) ) ; extern double __fabs ( double __x ) __attribute__ ( ( __const__ ) ) ;
# 183 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double floor ( double __x ) __attribute__ ( ( __const__ ) ) ; extern double __floor ( double __x ) __attribute__ ( ( __const__ ) ) ;
# 186 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double fmod ( double __x , double __y ) ; extern double __fmod ( double __x , double __y ) ;
# 191 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __isinf ( double __value ) __attribute__ ( ( __const__ ) ) ;
# 194 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __finite ( double __value ) __attribute__ ( ( __const__ ) ) ;
# 203 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int isinf ( double __value ) __attribute__ ( ( __const__ ) ) ;
# 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int finite ( double __value ) __attribute__ ( ( __const__ ) ) ;
# 210 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double drem ( double __x , double __y ) ; extern double __drem ( double __x , double __y ) ;
# 214 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double significand ( double __x ) ; extern double __significand ( double __x ) ;
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double copysign ( double __x , double __y ) __attribute__ ( ( __const__ ) ) ; extern double __copysign ( double __x , double __y ) __attribute__ ( ( __const__ ) ) ;
# 227 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double nan ( const char * __tagb ) __attribute__ ( ( __const__ ) ) ; extern double __nan ( const char * __tagb ) __attribute__ ( ( __const__ ) ) ;
# 233 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __isnan ( double __value ) __attribute__ ( ( __const__ ) ) ;
# 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int isnan ( double __value ) __attribute__ ( ( __const__ ) ) ;
# 246 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double j0 ( double ) ; extern double __j0 ( double ) ;
extern double j1 ( double ) ; extern double __j1 ( double ) ;
extern double jn ( int , double ) ; extern double __jn ( int , double ) ;
extern double y0 ( double ) ; extern double __y0 ( double ) ;
extern double y1 ( double ) ; extern double __y1 ( double ) ;
extern double yn ( int , double ) ; extern double __yn ( int , double ) ;
# 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double erf ( double ) ; extern double __erf ( double ) ;
extern double erfc ( double ) ; extern double __erfc ( double ) ;
extern double lgamma ( double ) ; extern double __lgamma ( double ) ;
# 267 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double tgamma ( double ) ; extern double __tgamma ( double ) ;
# 273 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double gamma ( double ) ; extern double __gamma ( double ) ;
# 280 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double lgamma_r ( double , int * __signgamp ) ; extern double __lgamma_r ( double , int * __signgamp ) ;
# 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double rint ( double __x ) ; extern double __rint ( double __x ) ;
# 291 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double nextafter ( double __x , double __y ) __attribute__ ( ( __const__ ) ) ; extern double __nextafter ( double __x , double __y ) __attribute__ ( ( __const__ ) ) ;
# 294 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
extern double nexttoward ( double __x , long double __y ) __attribute__ ( ( __const__ ) ) ; extern double __nexttoward ( double __x , long double __y ) __attribute__ ( ( __const__ ) ) ;
# 297 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double remainder ( double __x , double __y ) ; extern double __remainder ( double __x , double __y ) ;
# 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double scalbn ( double __x , int __n ) ; extern double __scalbn ( double __x , int __n ) ;
# 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int ilogb ( double __x ) ; extern int __ilogb ( double __x ) ;
# 310 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double scalbln ( double __x , long int __n ) ; extern double __scalbln ( double __x , long int __n ) ;
# 314 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double nearbyint ( double __x ) ; extern double __nearbyint ( double __x ) ;
# 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double round ( double __x ) __attribute__ ( ( __const__ ) ) ; extern double __round ( double __x ) __attribute__ ( ( __const__ ) ) ;
# 322 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double trunc ( double __x ) __attribute__ ( ( __const__ ) ) ; extern double __trunc ( double __x ) __attribute__ ( ( __const__ ) ) ;
# 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double remquo ( double __x , double __y , int * __quo ) ; extern double __remquo ( double __x , double __y , int * __quo ) ;
# 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 334 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long int lrint ( double __x ) ; extern long int __lrint ( double __x ) ;
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
extern long long int llrint ( double __x ) ; extern long long int __llrint ( double __x ) ;
# 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long int lround ( double __x ) ; extern long int __lround ( double __x ) ;
# 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
extern long long int llround ( double __x ) ; extern long long int __llround ( double __x ) ;
# 346 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double fdim ( double __x , double __y ) ; extern double __fdim ( double __x , double __y ) ;
# 349 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double fmax ( double __x , double __y ) __attribute__ ( ( __const__ ) ) ; extern double __fmax ( double __x , double __y ) __attribute__ ( ( __const__ ) ) ;
# 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double fmin ( double __x , double __y ) __attribute__ ( ( __const__ ) ) ; extern double __fmin ( double __x , double __y ) __attribute__ ( ( __const__ ) ) ;
# 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __fpclassify ( double __value ) 
     __attribute__ ( ( __const__ ) ) ;
# 360 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __signbit ( double __value ) 
     __attribute__ ( ( __const__ ) ) ;
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double fma ( double __x , double __y , double __z ) ; extern double __fma ( double __x , double __y , double __z ) ;
# 382 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern double scalb ( double __x , double __n ) ; extern double __scalb ( double __x , double __n ) ;
# 84 "/usr/include/math.h" <System_Header>
# 94 "/usr/include/math.h" <System_Header>
 
# 104 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 43 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 50 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float acosf ( float __x ) ; extern float __acosf ( float __x ) ;
 
extern float asinf ( float __x ) ; extern float __asinf ( float __x ) ;
 
extern float atanf ( float __x ) ; extern float __atanf ( float __x ) ;
 
extern float atan2f ( float __y , float __x ) ; extern float __atan2f ( float __y , float __x ) ;
# 62 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern float cosf ( float __x ) ; extern float __cosf ( float __x ) ;
 
 extern float sinf ( float __x ) ; extern float __sinf ( float __x ) ;
 
extern float tanf ( float __x ) ; extern float __tanf ( float __x ) ;
# 69 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 71 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float coshf ( float __x ) ; extern float __coshf ( float __x ) ;
 
extern float sinhf ( float __x ) ; extern float __sinhf ( float __x ) ;
 
extern float tanhf ( float __x ) ; extern float __tanhf ( float __x ) ;
# 87 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float acoshf ( float __x ) ; extern float __acoshf ( float __x ) ;
 
extern float asinhf ( float __x ) ; extern float __asinhf ( float __x ) ;
 
extern float atanhf ( float __x ) ; extern float __atanhf ( float __x ) ;
# 96 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 99 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern float expf ( float __x ) ; extern float __expf ( float __x ) ;
# 102 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float frexpf ( float __x , int * __exponent ) ; extern float __frexpf ( float __x , int * __exponent ) ;
# 105 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float ldexpf ( float __x , int __exponent ) ; extern float __ldexpf ( float __x , int __exponent ) ;
# 108 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern float logf ( float __x ) ; extern float __logf ( float __x ) ;
# 111 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float log10f ( float __x ) ; extern float __log10f ( float __x ) ;
# 114 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float modff ( float __x , float * __iptr ) ; extern float __modff ( float __x , float * __iptr ) ;
# 127 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float expm1f ( float __x ) ; extern float __expm1f ( float __x ) ;
# 130 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float log1pf ( float __x ) ; extern float __log1pf ( float __x ) ;
# 133 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float logbf ( float __x ) ; extern float __logbf ( float __x ) ;
# 140 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float exp2f ( float __x ) ; extern float __exp2f ( float __x ) ;
# 143 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float log2f ( float __x ) ; extern float __log2f ( float __x ) ;
# 149 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 152 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern float powf ( float __x , float __y ) ; extern float __powf ( float __x , float __y ) ;
# 155 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float sqrtf ( float __x ) ; extern float __sqrtf ( float __x ) ;
# 161 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float hypotf ( float __x , float __y ) ; extern float __hypotf ( float __x , float __y ) ;
# 168 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float cbrtf ( float __x ) ; extern float __cbrtf ( float __x ) ;
# 174 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float ceilf ( float __x ) __attribute__ ( ( __const__ ) ) ; extern float __ceilf ( float __x ) __attribute__ ( ( __const__ ) ) ;
# 180 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float fabsf ( float __x ) __attribute__ ( ( __const__ ) ) ; extern float __fabsf ( float __x ) __attribute__ ( ( __const__ ) ) ;
# 183 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float floorf ( float __x ) __attribute__ ( ( __const__ ) ) ; extern float __floorf ( float __x ) __attribute__ ( ( __const__ ) ) ;
# 186 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float fmodf ( float __x , float __y ) ; extern float __fmodf ( float __x , float __y ) ;
# 191 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __isinff ( float __value ) __attribute__ ( ( __const__ ) ) ;
# 194 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __finitef ( float __value ) __attribute__ ( ( __const__ ) ) ;
# 203 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int isinff ( float __value ) __attribute__ ( ( __const__ ) ) ;
# 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int finitef ( float __value ) __attribute__ ( ( __const__ ) ) ;
# 210 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float dremf ( float __x , float __y ) ; extern float __dremf ( float __x , float __y ) ;
# 214 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float significandf ( float __x ) ; extern float __significandf ( float __x ) ;
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float copysignf ( float __x , float __y ) __attribute__ ( ( __const__ ) ) ; extern float __copysignf ( float __x , float __y ) __attribute__ ( ( __const__ ) ) ;
# 227 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float nanf ( const char * __tagb ) __attribute__ ( ( __const__ ) ) ; extern float __nanf ( const char * __tagb ) __attribute__ ( ( __const__ ) ) ;
# 233 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __isnanf ( float __value ) __attribute__ ( ( __const__ ) ) ;
# 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int isnanf ( float __value ) __attribute__ ( ( __const__ ) ) ;
# 246 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float j0f ( float ) ; extern float __j0f ( float ) ;
extern float j1f ( float ) ; extern float __j1f ( float ) ;
extern float jnf ( int , float ) ; extern float __jnf ( int , float ) ;
extern float y0f ( float ) ; extern float __y0f ( float ) ;
extern float y1f ( float ) ; extern float __y1f ( float ) ;
extern float ynf ( int , float ) ; extern float __ynf ( int , float ) ;
# 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float erff ( float ) ; extern float __erff ( float ) ;
extern float erfcf ( float ) ; extern float __erfcf ( float ) ;
extern float lgammaf ( float ) ; extern float __lgammaf ( float ) ;
# 267 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float tgammaf ( float ) ; extern float __tgammaf ( float ) ;
# 273 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float gammaf ( float ) ; extern float __gammaf ( float ) ;
# 280 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float lgammaf_r ( float , int * __signgamp ) ; extern float __lgammaf_r ( float , int * __signgamp ) ;
# 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float rintf ( float __x ) ; extern float __rintf ( float __x ) ;
# 291 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float nextafterf ( float __x , float __y ) __attribute__ ( ( __const__ ) ) ; extern float __nextafterf ( float __x , float __y ) __attribute__ ( ( __const__ ) ) ;
# 294 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
extern float nexttowardf ( float __x , long double __y ) __attribute__ ( ( __const__ ) ) ; extern float __nexttowardf ( float __x , long double __y ) __attribute__ ( ( __const__ ) ) ;
# 297 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float remainderf ( float __x , float __y ) ; extern float __remainderf ( float __x , float __y ) ;
# 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float scalbnf ( float __x , int __n ) ; extern float __scalbnf ( float __x , int __n ) ;
# 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int ilogbf ( float __x ) ; extern int __ilogbf ( float __x ) ;
# 310 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float scalblnf ( float __x , long int __n ) ; extern float __scalblnf ( float __x , long int __n ) ;
# 314 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float nearbyintf ( float __x ) ; extern float __nearbyintf ( float __x ) ;
# 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float roundf ( float __x ) __attribute__ ( ( __const__ ) ) ; extern float __roundf ( float __x ) __attribute__ ( ( __const__ ) ) ;
# 322 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float truncf ( float __x ) __attribute__ ( ( __const__ ) ) ; extern float __truncf ( float __x ) __attribute__ ( ( __const__ ) ) ;
# 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float remquof ( float __x , float __y , int * __quo ) ; extern float __remquof ( float __x , float __y , int * __quo ) ;
# 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 334 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long int lrintf ( float __x ) ; extern long int __lrintf ( float __x ) ;
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
extern long long int llrintf ( float __x ) ; extern long long int __llrintf ( float __x ) ;
# 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long int lroundf ( float __x ) ; extern long int __lroundf ( float __x ) ;
# 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
extern long long int llroundf ( float __x ) ; extern long long int __llroundf ( float __x ) ;
# 346 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float fdimf ( float __x , float __y ) ; extern float __fdimf ( float __x , float __y ) ;
# 349 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float fmaxf ( float __x , float __y ) __attribute__ ( ( __const__ ) ) ; extern float __fmaxf ( float __x , float __y ) __attribute__ ( ( __const__ ) ) ;
# 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float fminf ( float __x , float __y ) __attribute__ ( ( __const__ ) ) ; extern float __fminf ( float __x , float __y ) __attribute__ ( ( __const__ ) ) ;
# 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __fpclassifyf ( float __value ) 
     __attribute__ ( ( __const__ ) ) ;
# 360 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __signbitf ( float __value ) 
     __attribute__ ( ( __const__ ) ) ;
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float fmaf ( float __x , float __y , float __z ) ; extern float __fmaf ( float __x , float __y , float __z ) ;
# 382 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern float scalbf ( float __x , float __n ) ; extern float __scalbf ( float __x , float __n ) ;
# 105 "/usr/include/math.h" <System_Header>
# 140 "/usr/include/math.h" <System_Header>
 
# 151 "/usr/include/math.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 43 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 50 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double acosl ( long double __x ) ; extern long double __acosl ( long double __x ) ;
 
extern long double asinl ( long double __x ) ; extern long double __asinl ( long double __x ) ;
 
extern long double atanl ( long double __x ) ; extern long double __atanl ( long double __x ) ;
 
extern long double atan2l ( long double __y , long double __x ) ; extern long double __atan2l ( long double __y , long double __x ) ;
# 62 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern long double cosl ( long double __x ) ; extern long double __cosl ( long double __x ) ;
 
 extern long double sinl ( long double __x ) ; extern long double __sinl ( long double __x ) ;
 
extern long double tanl ( long double __x ) ; extern long double __tanl ( long double __x ) ;
# 69 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 71 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double coshl ( long double __x ) ; extern long double __coshl ( long double __x ) ;
 
extern long double sinhl ( long double __x ) ; extern long double __sinhl ( long double __x ) ;
 
extern long double tanhl ( long double __x ) ; extern long double __tanhl ( long double __x ) ;
# 87 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double acoshl ( long double __x ) ; extern long double __acoshl ( long double __x ) ;
 
extern long double asinhl ( long double __x ) ; extern long double __asinhl ( long double __x ) ;
 
extern long double atanhl ( long double __x ) ; extern long double __atanhl ( long double __x ) ;
# 96 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 99 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern long double expl ( long double __x ) ; extern long double __expl ( long double __x ) ;
# 102 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double frexpl ( long double __x , int * __exponent ) ; extern long double __frexpl ( long double __x , int * __exponent ) ;
# 105 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double ldexpl ( long double __x , int __exponent ) ; extern long double __ldexpl ( long double __x , int __exponent ) ;
# 108 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern long double logl ( long double __x ) ; extern long double __logl ( long double __x ) ;
# 111 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double log10l ( long double __x ) ; extern long double __log10l ( long double __x ) ;
# 114 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double modfl ( long double __x , long double * __iptr ) ; extern long double __modfl ( long double __x , long double * __iptr ) ;
# 127 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double expm1l ( long double __x ) ; extern long double __expm1l ( long double __x ) ;
# 130 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double log1pl ( long double __x ) ; extern long double __log1pl ( long double __x ) ;
# 133 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double logbl ( long double __x ) ; extern long double __logbl ( long double __x ) ;
# 140 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double exp2l ( long double __x ) ; extern long double __exp2l ( long double __x ) ;
# 143 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double log2l ( long double __x ) ; extern long double __log2l ( long double __x ) ;
# 149 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 152 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
 extern long double powl ( long double __x , long double __y ) ; extern long double __powl ( long double __x , long double __y ) ;
# 155 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double sqrtl ( long double __x ) ; extern long double __sqrtl ( long double __x ) ;
# 161 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double hypotl ( long double __x , long double __y ) ; extern long double __hypotl ( long double __x , long double __y ) ;
# 168 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double cbrtl ( long double __x ) ; extern long double __cbrtl ( long double __x ) ;
# 174 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double ceill ( long double __x ) __attribute__ ( ( __const__ ) ) ; extern long double __ceill ( long double __x ) __attribute__ ( ( __const__ ) ) ;
# 180 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double fabsl ( long double __x ) __attribute__ ( ( __const__ ) ) ; extern long double __fabsl ( long double __x ) __attribute__ ( ( __const__ ) ) ;
# 183 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double floorl ( long double __x ) __attribute__ ( ( __const__ ) ) ; extern long double __floorl ( long double __x ) __attribute__ ( ( __const__ ) ) ;
# 186 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double fmodl ( long double __x , long double __y ) ; extern long double __fmodl ( long double __x , long double __y ) ;
# 191 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __isinfl ( long double __value ) __attribute__ ( ( __const__ ) ) ;
# 194 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __finitel ( long double __value ) __attribute__ ( ( __const__ ) ) ;
# 203 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int isinfl ( long double __value ) __attribute__ ( ( __const__ ) ) ;
# 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int finitel ( long double __value ) __attribute__ ( ( __const__ ) ) ;
# 210 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double dreml ( long double __x , long double __y ) ; extern long double __dreml ( long double __x , long double __y ) ;
# 214 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double significandl ( long double __x ) ; extern long double __significandl ( long double __x ) ;
# 220 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double copysignl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ; extern long double __copysignl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ;
# 227 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double nanl ( const char * __tagb ) __attribute__ ( ( __const__ ) ) ; extern long double __nanl ( const char * __tagb ) __attribute__ ( ( __const__ ) ) ;
# 233 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __isnanl ( long double __value ) __attribute__ ( ( __const__ ) ) ;
# 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int isnanl ( long double __value ) __attribute__ ( ( __const__ ) ) ;
# 246 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double j0l ( long double ) ; extern long double __j0l ( long double ) ;
extern long double j1l ( long double ) ; extern long double __j1l ( long double ) ;
extern long double jnl ( int , long double ) ; extern long double __jnl ( int , long double ) ;
extern long double y0l ( long double ) ; extern long double __y0l ( long double ) ;
extern long double y1l ( long double ) ; extern long double __y1l ( long double ) ;
extern long double ynl ( int , long double ) ; extern long double __ynl ( int , long double ) ;
# 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double erfl ( long double ) ; extern long double __erfl ( long double ) ;
extern long double erfcl ( long double ) ; extern long double __erfcl ( long double ) ;
extern long double lgammal ( long double ) ; extern long double __lgammal ( long double ) ;
# 267 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double tgammal ( long double ) ; extern long double __tgammal ( long double ) ;
# 273 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double gammal ( long double ) ; extern long double __gammal ( long double ) ;
# 280 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double lgammal_r ( long double , int * __signgamp ) ; extern long double __lgammal_r ( long double , int * __signgamp ) ;
# 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double rintl ( long double __x ) ; extern long double __rintl ( long double __x ) ;
# 291 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double nextafterl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ; extern long double __nextafterl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ;
# 294 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
extern long double nexttowardl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ; extern long double __nexttowardl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ;
# 297 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double remainderl ( long double __x , long double __y ) ; extern long double __remainderl ( long double __x , long double __y ) ;
# 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double scalbnl ( long double __x , int __n ) ; extern long double __scalbnl ( long double __x , int __n ) ;
# 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int ilogbl ( long double __x ) ; extern int __ilogbl ( long double __x ) ;
# 310 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double scalblnl ( long double __x , long int __n ) ; extern long double __scalblnl ( long double __x , long int __n ) ;
# 314 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double nearbyintl ( long double __x ) ; extern long double __nearbyintl ( long double __x ) ;
# 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double roundl ( long double __x ) __attribute__ ( ( __const__ ) ) ; extern long double __roundl ( long double __x ) __attribute__ ( ( __const__ ) ) ;
# 322 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double truncl ( long double __x ) __attribute__ ( ( __const__ ) ) ; extern long double __truncl ( long double __x ) __attribute__ ( ( __const__ ) ) ;
# 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double remquol ( long double __x , long double __y , int * __quo ) ; extern long double __remquol ( long double __x , long double __y , int * __quo ) ;
# 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
# 334 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long int lrintl ( long double __x ) ; extern long int __lrintl ( long double __x ) ;
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
extern long long int llrintl ( long double __x ) ; extern long long int __llrintl ( long double __x ) ;
# 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long int lroundl ( long double __x ) ; extern long int __lroundl ( long double __x ) ;
# 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
extern long long int llroundl ( long double __x ) ; extern long long int __llroundl ( long double __x ) ;
# 346 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double fdiml ( long double __x , long double __y ) ; extern long double __fdiml ( long double __x , long double __y ) ;
# 349 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double fmaxl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ; extern long double __fmaxl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ;
# 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double fminl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ; extern long double __fminl ( long double __x , long double __y ) __attribute__ ( ( __const__ ) ) ;
# 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __fpclassifyl ( long double __value ) 
     __attribute__ ( ( __const__ ) ) ;
# 360 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern int __signbitl ( long double __value ) 
     __attribute__ ( ( __const__ ) ) ;
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double fmal ( long double __x , long double __y , long double __z ) ; extern long double __fmal ( long double __x , long double __y , long double __z ) ;
# 382 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" <System_Header>
 
extern long double scalbl ( long double __x , long double __n ) ; extern long double __scalbl ( long double __x , long double __n ) ;
# 152 "/usr/include/math.h" <System_Header>
# 167 "/usr/include/math.h" <System_Header>
 
extern int signgam ;
# 172 "/usr/include/math.h" <System_Header>
 
# 206 "/usr/include/math.h" <System_Header>
 
# 208 "/usr/include/math.h" <System_Header>
 
enum
  {
    FP_NAN =
# 213 "/usr/include/math.h" <System_Header>
      0 ,
    FP_INFINITE =
# 216 "/usr/include/math.h" <System_Header>
      1 ,
    FP_ZERO =
# 219 "/usr/include/math.h" <System_Header>
      2 ,
    FP_SUBNORMAL =
# 222 "/usr/include/math.h" <System_Header>
      3 ,
    FP_NORMAL =
# 225 "/usr/include/math.h" <System_Header>
      4
  } ;
# 230 "/usr/include/math.h" <System_Header>
 
# 232 "/usr/include/math.h" <System_Header>
 
# 248 "/usr/include/math.h" <System_Header>
 
# 268 "/usr/include/math.h" <System_Header>
 
# 282 "/usr/include/math.h" <System_Header>
 
# 290 "/usr/include/math.h" <System_Header>
 
# 304 "/usr/include/math.h" <System_Header>
 
# 318 "/usr/include/math.h" <System_Header>
 
# 324 "/usr/include/math.h" <System_Header>
 
# 346 "/usr/include/math.h" <System_Header>
 
typedef enum
{
  _IEEE_ = - 1 ,	
  _SVID_ ,	
  _XOPEN_ ,	
  _POSIX_ ,
  _ISOC_	
} _LIB_VERSION_TYPE ;
# 358 "/usr/include/math.h" <System_Header>
 
extern _LIB_VERSION_TYPE _LIB_VERSION ;
# 368 "/usr/include/math.h" <System_Header>
 
# 372 "/usr/include/math.h" <System_Header>
struct exception
# 374 "/usr/include/math.h" <System_Header>
  {
    int type ;
    char * name ;
    double arg1 ;
    double arg2 ;
    double retval ;
  } ;
# 385 "/usr/include/math.h" <System_Header>
extern int matherr ( struct exception * __exc ) ;
# 390 "/usr/include/math.h" <System_Header>
 
# 398 "/usr/include/math.h" <System_Header>
 
# 411 "/usr/include/math.h" <System_Header>
 
# 430 "/usr/include/math.h" <System_Header>
 
# 450 "/usr/include/math.h" <System_Header>
 
# 470 "/usr/include/math.h" <System_Header>
 
# 476 "/usr/include/math.h" <System_Header>
 
# 482 "/usr/include/math.h" <System_Header>
 
# 484 "/usr/include/math.h" <System_Header>
 
# 492 "/usr/include/math.h" <System_Header>
 
# 500 "/usr/include/math.h" <System_Header>
 
# 508 "/usr/include/math.h" <System_Header>
 
# 516 "/usr/include/math.h" <System_Header>
 
# 524 "/usr/include/math.h" <System_Header>
 
# 60 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
# 254 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 301 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 310 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_acos ( double ) ;
# 313 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_asin ( double ) ;
# 316 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_atan2 ( double , double ) ;
# 319 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_atan ( double ) ;
# 322 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_tan ( double ) ;
# 325 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_cos ( double ) ;
# 328 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_sin ( double ) ;
# 331 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_fabs ( double ) ;
# 334 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_sqrt ( double ) ;
# 337 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_log ( double ) ;
# 340 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_log10 ( double ) ;
# 343 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_exp ( double ) ;
# 346 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_pow ( double , double ) ;
# 350 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_fmin ( double , double ) ;
# 353 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_fminf ( float , float ) ;
# 356 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
double __builtin_fmax ( double , double ) ;
# 359 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_fmaxf ( float , float ) ;
# 362 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_acosf ( float ) ;
# 365 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_asinf ( float ) ;
# 368 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_atan2f ( float , float ) ;
# 371 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_atanf ( float ) ;
# 374 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_tanf ( float ) ;
# 377 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_cosf ( float ) ;
# 380 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_sinf ( float ) ;
# 383 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_fabsf ( float ) ;
# 386 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_sqrtf ( float ) ;
# 389 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_logf ( float ) ;
# 392 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_log10f ( float ) ;
# 395 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_expf ( float ) ;
# 398 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
float __builtin_powf ( float , float ) ;
# 406 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 418 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
#pragma libm ( acosf , acoshf , asinf , asinhf , atanhf , atan2f )
#pragma libm ( cbrtf , ceilf , copysignf , cosf , coshf )
#pragma libm ( erff , erfcf , expf , exp2f , exp10f , expm1f )
#pragma libm ( fabsf , floorf , fmaf , fminf , fmaxf )
#pragma libm ( ilogbf )
#pragma libm ( ldexpf , lgammaf , llrintf , llroundf , logbf , log1pf , logf , log2f , log10f , lrintf , lroundf )
#pragma libm ( nanf , nearbyintf , nextafterf )
#pragma libm ( powf )
#pragma libm ( remainderf , remquof , rintf , roundf , rsqrtf )
#pragma libm ( scalblnf , scalbnf , sinf , sinhf , sqrtf )
#pragma libm ( tanf , tanhf , tgammaf , truncf )
#pragma libm ( abs , acos , acosh , asin , asinh , atanh , atan2 )
#pragma libm ( cbrt , ceil , copysign , cos , cosh )
#pragma libm ( erf , erfc , exp , exp2 , exp10 , expm1 )
#pragma libm ( fabs , floor , fma , fmin , fmax )
#pragma libm ( ilogb , isinf , isfinite , isnan )
#pragma libm ( ldexp , lgamma , llrint , llround , logb , log1p , log , log2 , log10 , lrint , lround )
#pragma libm ( pow )
#pragma libm ( nan , nearbyint , nextafter )
#pragma libm ( remainder , remquo , rint , round , rsqrt )
#pragma libm ( scalbln , scalbn , sin , sinh , sqrt )
#pragma libm ( tan , tanh , tgamma , trunc )
# 743 "main.c"
# 743 "main.c"
# 1 "../../common/type.h"
# 4 "../../common/type.h"
typedef enum { false , true } logical ;
typedef struct { 
  double real ;
  double imag ;
} dcomplex ;
# 744 "main.c"
# 746 "main.c"
void print_results ( char * name , char class , int n1 , int n2 , int n3 , int niter ,
    double t , double mops , char * optype , logical verified , char * npbversion ,
    char * compiletime , char * cs1 , char * cs2 , char * cs3 , char * cs4 , char * cs5 ,
    char * cs6 , char * cs7 ) 
{
  char size [ 16 ] ;
  int j ;
# 754 "main.c"
  printf ( "\n\n %s Benchmark Completed.\n" , name ) ;
  printf ( " Class           =             %12c\n" , class ) ;
# 757 "main.c"
   
   
   
   
# 762 "main.c"
  if ( ( n2 == 0 ) && ( n3 == 0 ) ) {
    if ( ( name [ 0 ] == 'E' ) && ( name [ 1 ] == 'P' ) ) {
      sprintf ( size , "%15.0lf" , __builtin_pow ( 2.0 , n1 ) ) ;
      j = 14 ;
      if ( size [ j ] == '.' ) {
        size [ j ] = ' ' ; 
        j -- ;
      }
      size [ j + 1 ] = '\0' ;
      printf ( " Size            =          %15s\n" , size ) ;
    } else {
      printf ( " Size            =             %12d\n" , n1 ) ;
    }
  } else {
    printf ( " Size            =           %4dx%4dx%4d\n" , n1 , n2 , n3 ) ;
  }
# 779 "main.c"
  printf ( " Iterations      =             %12d\n" , niter ) ;
  printf ( " Time in seconds =             %12.2lf\n" , t ) ;
  printf ( " Mop/s total     =          %15.2lf\n" , mops ) ;
  printf ( " Operation type  = %24s\n" , optype ) ;
  if ( verified ) 
    printf ( " Verification    =             %12s\n" , "SUCCESSFUL" ) ;
  else
    printf ( " Verification    =             %12s\n" , "UNSUCCESSFUL" ) ;
  printf ( " Version         =             %12s\n" , npbversion ) ;
  printf ( " Compile date    =             %12s\n" , compiletime ) ;
  
  printf ( "\n Compile options:\n"
          "    CC           = %s\n" , cs1 ) ;
  printf ( "    CLINK        = %s\n" , cs2 ) ;
  printf ( "    C_LIB        = %s\n" , cs3 ) ;
  printf ( "    C_INC        = %s\n" , cs4 ) ;
  printf ( "    CFLAGS       = %s\n" , cs5 ) ;
  printf ( "    CLINKFLAGS   = %s\n" , cs6 ) ;
  printf ( "    RAND         = %s\n" , cs7 ) ;
# 799 "main.c"
  printf ( "\n--------------------------------------\n"
          " Please send all errors/feedbacks to:\n"
          " Center for Manycore Programming\n"
          " cmp@aces.snu.ac.kr\n"
          " http://aces.snu.ac.kr\n"
          "--------------------------------------\n\n" ) ;
}
# 806 "main.c"
# 1 "/usr/include/stdio.h" <System_Header>
# 17 "/usr/include/stdio.h" <System_Header>
 
# 21 "/usr/include/stdio.h" <System_Header>
 
# 807 "main.c"
# 807 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 808 "main.c"
# 809 "main.c"
double randlc ( double * x , double a )
{
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
# 834 "main.c"
   
   
   
   
   
   
# 841 "main.c"
  const double r23 = 1.1920928955078125e-07 ;
  const double r46 = r23 * r23 ;
  const double t23 = 8.388608e+06 ;
  const double t46 = t23 * t23 ;
# 846 "main.c"
  double t1 , t2 , t3 , t4 , a1 , a2 , x1 , x2 , z ;
  double r ;
# 849 "main.c"
   
   
   
  t1 = r23 * a ;
  a1 = ( int ) t1 ;
  a2 = a - t23 * a1 ;
# 856 "main.c"
   
   
   
   
   
  t1 = r23 * ( * x ) ;
  x1 = ( int ) t1 ;
  x2 = * x - t23 * x1 ;
  t1 = a1 * x2 + a2 * x1 ;
  t2 = ( int ) ( r23 * t1 ) ;
  z = t1 - t23 * t2 ;
  t3 = t23 * z + a2 * x2 ;
  t4 = ( int ) ( r46 * t3 ) ;
  * x = t3 - t46 * t4 ;
  r = r46 * ( * x ) ;
# 872 "main.c"
  return r ;
}
# 876 "main.c"
void vranlc ( int n , double * x , double a , double y [ ] )
{
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
# 901 "main.c"
   
   
   
   
   
   
# 908 "main.c"
  const double r23 = 1.1920928955078125e-07 ;
  const double r46 = r23 * r23 ;
  const double t23 = 8.388608e+06 ;
  const double t46 = t23 * t23 ;
# 913 "main.c"
  double t1 , t2 , t3 , t4 , a1 , a2 , x1 , x2 , z ;
# 915 "main.c"
  int i ;
# 917 "main.c"
   
   
   
  t1 = r23 * a ;
  a1 = ( int ) t1 ;
  a2 = a - t23 * a1 ;
# 924 "main.c"
   
   
   
  for ( i = 0 ; i < n ; i ++ ) {
     
     
     
     
     
    t1 = r23 * ( * x ) ;
    x1 = ( int ) t1 ;
    x2 = * x - t23 * x1 ;
    t1 = a1 * x2 + a2 * x1 ;
    t2 = ( int ) ( r23 * t1 ) ;
    z = t1 - t23 * t2 ;
    t3 = t23 * z + a2 * x2 ;
    t4 = ( int ) ( r46 * t3 ) ;
    * x = t3 - t46 * t4 ;
    y [ i ] = r46 * ( * x ) ;
  }
# 945 "main.c"
  return ;
}
# 948 "main.c"
# 1 "../../common/wtime.h"
# 3 "../../common/wtime.h"
 
# 949 "main.c"
# 949 "main.c"
# 1 "/usr/include/time.h" <System_Header>
# 16 "/usr/include/time.h" <System_Header>
 
# 20 "/usr/include/time.h" <System_Header>
 
# 27 "/usr/include/time.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 28 "/usr/include/time.h" <System_Header>
# 34 "/usr/include/time.h" <System_Header>
 
# 37 "/usr/include/time.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
 
# 16 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
# 22 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 26 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 47 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 50 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 54 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 62 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 93 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 103 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 121 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 123 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 126 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 165 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 245 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 248 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 363 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
 
 
# 398 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include-gcc50/stddef.h" <System_Header>
# 38 "/usr/include/time.h" <System_Header>
# 40 "/usr/include/time.h" <System_Header>
 
# 41 "/usr/include/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 44 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 47 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 60 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 62 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 64 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 66 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 68 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 70 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 72 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 74 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 76 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 78 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 80 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 83 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 42 "/usr/include/time.h" <System_Header>
# 43 "/usr/include/time.h" <System_Header>
 
# 132 "/usr/include/time.h" <System_Header>
 
struct tm
{
  int tm_sec ;	
  int tm_min ;	
  int tm_hour ;	
  int tm_mday ;	
  int tm_mon ;	
  int tm_year ;	
  int tm_wday ;	
  int tm_yday ;	
  int tm_isdst ;	
# 146 "/usr/include/time.h" <System_Header>
  long int tm_gmtoff ;	
  const char * tm_zone ;	
# 152 "/usr/include/time.h" <System_Header>
} ;
# 160 "/usr/include/time.h" <System_Header>
 
struct itimerspec
  {
    struct timespec it_interval ;
    struct timespec it_value ;
  } ;
# 167 "/usr/include/time.h" <System_Header>
 
struct sigevent ;
# 188 "/usr/include/time.h" <System_Header>
 
extern clock_t clock ( void ) ;
# 191 "/usr/include/time.h" <System_Header>
 
extern time_t time ( time_t * __timer ) ;
# 194 "/usr/include/time.h" <System_Header>
 
extern double difftime ( time_t __time1 , time_t __time0 )
      __attribute__ ( ( __const__ ) ) ;
# 198 "/usr/include/time.h" <System_Header>
 
extern time_t mktime ( struct tm * __tp ) ;
# 204 "/usr/include/time.h" <System_Header>
 
extern size_t strftime ( char * __restrict __s , size_t __maxsize ,
			const char * __restrict __format ,
			const struct tm * __restrict __tp ) ;
# 220 "/usr/include/time.h" <System_Header>
 
# 221 "/usr/include/time.h" <System_Header>
# 1 "/usr/include/xlocale.h" <System_Header>
# 18 "/usr/include/xlocale.h" <System_Header>
 
# 222 "/usr/include/time.h" <System_Header>
# 223 "/usr/include/time.h" <System_Header>
extern size_t strftime_l ( char * __restrict __s , size_t __maxsize ,
			  const char * __restrict __format ,
			  const struct tm * __restrict __tp ,
			  __locale_t __loc ) ;
# 238 "/usr/include/time.h" <System_Header>
 
extern struct tm * gmtime ( const time_t * __timer ) ;
# 242 "/usr/include/time.h" <System_Header>
 
extern struct tm * localtime ( const time_t * __timer ) ;
# 248 "/usr/include/time.h" <System_Header>
 
extern struct tm * gmtime_r ( const time_t * __restrict __timer ,
			    struct tm * __restrict __tp ) ;
# 253 "/usr/include/time.h" <System_Header>
 
extern struct tm * localtime_r ( const time_t * __restrict __timer ,
			       struct tm * __restrict __tp ) ;
# 260 "/usr/include/time.h" <System_Header>
 
extern char * asctime ( const struct tm * __tp ) ;
# 263 "/usr/include/time.h" <System_Header>
 
extern char * ctime ( const time_t * __timer ) ;
# 268 "/usr/include/time.h" <System_Header>
 
# 271 "/usr/include/time.h" <System_Header>
 
extern char * asctime_r ( const struct tm * __restrict __tp ,
			char * __restrict __buf ) ;
# 275 "/usr/include/time.h" <System_Header>
 
extern char * ctime_r ( const time_t * __restrict __timer ,
		      char * __restrict __buf ) ;
# 281 "/usr/include/time.h" <System_Header>
 
extern char * __tzname [ 2 ] ;	
extern int __daylight ;	
extern long int __timezone ;	
# 288 "/usr/include/time.h" <System_Header>
 
extern char * tzname [ 2 ] ;
# 292 "/usr/include/time.h" <System_Header>
 
extern void tzset ( void ) ;
# 297 "/usr/include/time.h" <System_Header>
extern int daylight ;
extern long int timezone ;
# 303 "/usr/include/time.h" <System_Header>
 
extern int stime ( const time_t * __when ) ;
# 309 "/usr/include/time.h" <System_Header>
 
# 316 "/usr/include/time.h" <System_Header>
 
# 318 "/usr/include/time.h" <System_Header>
 
extern time_t timegm ( struct tm * __tp ) ;
# 321 "/usr/include/time.h" <System_Header>
 
extern time_t timelocal ( struct tm * __tp ) ;
# 324 "/usr/include/time.h" <System_Header>
 
extern int dysize ( int __year ) __attribute__ ( ( __const__ ) ) ;
# 333 "/usr/include/time.h" <System_Header>
 
extern int nanosleep ( const struct timespec * __requested_time ,
		      struct timespec * __remaining ) ;
# 338 "/usr/include/time.h" <System_Header>
 
extern int clock_getres ( clockid_t __clock_id , struct timespec * __res ) ;
# 341 "/usr/include/time.h" <System_Header>
 
extern int clock_gettime ( clockid_t __clock_id , struct timespec * __tp ) ;
# 344 "/usr/include/time.h" <System_Header>
 
extern int clock_settime ( clockid_t __clock_id , const struct timespec * __tp )
     ;
# 352 "/usr/include/time.h" <System_Header>
 
extern int clock_nanosleep ( clockid_t __clock_id , int __flags ,
			    const struct timespec * __req ,
			    struct timespec * __rem ) ;
# 357 "/usr/include/time.h" <System_Header>
 
extern int clock_getcpuclockid ( pid_t __pid , clockid_t * __clock_id ) ;
# 362 "/usr/include/time.h" <System_Header>
 
extern int timer_create ( clockid_t __clock_id ,
			 struct sigevent * __restrict __evp ,
			 timer_t * __restrict __timerid ) ;
# 367 "/usr/include/time.h" <System_Header>
 
extern int timer_delete ( timer_t __timerid ) ;
# 370 "/usr/include/time.h" <System_Header>
 
extern int timer_settime ( timer_t __timerid , int __flags ,
			  const struct itimerspec * __restrict __value ,
			  struct itimerspec * __restrict __ovalue ) ;
# 375 "/usr/include/time.h" <System_Header>
 
extern int timer_gettime ( timer_t __timerid , struct itimerspec * __value )
     ;
# 379 "/usr/include/time.h" <System_Header>
 
extern int timer_getoverrun ( timer_t __timerid ) ;
# 950 "main.c"
# 951 "main.c"
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 16 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 1 "/usr/include/features.h" <System_Header>
# 16 "/usr/include/features.h" <System_Header>
 
# 22 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 23 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/types.h" <System_Header>
 
# 24 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 25 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 1 "/usr/include/time.h" <System_Header>
# 16 "/usr/include/time.h" <System_Header>
 
# 20 "/usr/include/time.h" <System_Header>
 
# 26 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 27 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 21 "/usr/include/x86_64-linux-gnu/bits/time.h" <System_Header>
 
# 28 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 29 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
# 17 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 19 "/usr/include/x86_64-linux-gnu/sys/select.h" <System_Header>
 
# 30 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
# 54 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
struct timezone
  {
    int tz_minuteswest ;	
    int tz_dsttime ;	
  } ;
# 61 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
typedef struct timezone * __restrict __timezone_ptr_t ;
# 70 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
extern int gettimeofday ( struct timeval * __restrict __tv ,
			 __timezone_ptr_t __tz ) ;
# 76 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
extern int settimeofday ( const struct timeval * __tv ,
			 const struct timezone * __tz )
     ;
# 84 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
extern int adjtime ( const struct timeval * __delta ,
		    struct timeval * __olddelta ) ;
# 90 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
enum __itimer_which
  {
     
    ITIMER_REAL = 0 ,
# 96 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
     
    ITIMER_VIRTUAL = 1 ,
# 99 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
    
 
    ITIMER_PROF = 2
# 103 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
  } ;
# 106 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
struct itimerval
  {
     
    struct timeval it_interval ;
     
    struct timeval it_value ;
  } ;
# 120 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
typedef int __itimer_which_t ;
# 124 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
extern int getitimer ( __itimer_which_t __which ,
		      struct itimerval * __value ) ;
# 130 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
extern int setitimer ( __itimer_which_t __which ,
		      const struct itimerval * __restrict __new ,
		      struct itimerval * __restrict __old ) ;
# 137 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
extern int utimes ( const char * __file , const struct timeval __tvp [ 2 ] )
      ;
# 142 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
extern int lutimes ( const char * __file , const struct timeval __tvp [ 2 ] )
      ;
# 146 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
extern int futimes ( int __fd , const struct timeval __tvp [ 2 ] ) ;
# 161 "/usr/include/x86_64-linux-gnu/sys/time.h" <System_Header>
 
# 952 "main.c"
# 954 "main.c"
void wtime_ ( double * t )
{
  static int sec = - 1 ;
  struct timeval tv ;
  gettimeofday ( & tv , ( void * ) 0 ) ;
  if ( sec < 0 ) sec = tv . tv_sec ;
  * t = ( tv . tv_sec - sec ) + 1.0e-6 * tv . tv_usec ;
}
# 963 "main.c"
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
# 992 "main.c"
 
 
 
 
# 997 "main.c"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
# 1023 "main.c"
 
 
 
# 1027 "main.c"
# 1 "/usr/include/stdio.h" <System_Header>
# 17 "/usr/include/stdio.h" <System_Header>
 
# 21 "/usr/include/stdio.h" <System_Header>
 
# 1028 "main.c"
# 1028 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 17 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 19 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 1 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
# 3 "/opt/pgi/linux86-64/17.10/include/stdlib.h" <System_Header>
 
# 20 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
# 25 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * malloc_managed ( size_t ) ;
extern void * calloc_managed ( size_t , size_t ) ;
extern void free_managed ( void * ) ;
extern void cfree_managed ( void * ) ;
# 31 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
extern void * realloc_managed ( void * , size_t ) ;
extern void * valloc_managed ( size_t ) ;
extern void * pvalloc_managed ( size_t ) ;
extern void * memalign_managed ( size_t , size_t ) ;
extern int posix_memalign_managed ( void * * , size_t , size_t ) ;
extern char * tmpnam_managed ( char * ) ;
# 43 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
 
# 58 "/opt/pgi/linux86-64/17.10/include_man/stdlib.h" <System_Header>
 
# 1029 "main.c"
# 1029 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 14 "/opt/pgi/linux86-64/17.10/include/math.h" <System_Header>
 
# 1030 "main.c"
# 1031 "main.c"
# 1 "../globals.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
# 29 "../globals.h"
 
 
 
 
# 34 "../globals.h"
# 1 "../npbparams.h"
 
# 6 "../npbparams.h"
 
# 35 "../globals.h"
# 35 "../globals.h"
# 1 "../../common/type.h"
# 36 "../globals.h"
# 37 "../globals.h"
 
 
 
 
 
 
 
 
 
 
# 49 "../globals.h"
 
 
 
 
 
 
# 56 "../globals.h"
 
 
 
 
 
 
 
 
# 65 "../globals.h"
 
 
 
 
 
 
 
 
# 74 "../globals.h"
 
 
 
 
 
 
 
 
# 83 "../globals.h"
 
 
 
 
 
 
 
 
# 92 "../globals.h"
 
 
 
 
 
 
 
 
# 101 "../globals.h"
 
 
 
 
 
 
 
 
# 110 "../globals.h"
 
 
 
 
 
 
 
 
# 1032 "main.c"
# 1032 "main.c"
# 1 "../../common/randdp.h"
# 4 "../../common/randdp.h"
double randlc ( double * x , double a ) ;
void vranlc ( int n , double * x , double a , double y [ ] ) ;
# 1033 "main.c"
# 1033 "main.c"
# 1 "../../common/timers.h"
# 4 "../../common/timers.h"
void timer_clear ( int n ) ;
void timer_start ( int n ) ;
void timer_stop ( int n ) ;
double timer_read ( int n ) ;
# 1034 "main.c"
# 1034 "main.c"
# 1 "../../common/print_results.h"
# 4 "../../common/print_results.h"
void print_results ( char * name , char class , int n1 , int n2 , int n3 , int niter ,
    double t , double mops , char * optype , int verified , char * npbversion ,
    char * compiletime , char * cs1 , char * cs2 , char * cs3 , char * cs4 , char * cs5 ,
    char * cs6 , char * cs7 ) ;
# 1035 "main.c"
# 1035 "main.c"
# 1 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
# 10 "/opt/pgi/linux86-64/17.10/include/openacc.h" <System_Header>
 
# 1036 "main.c"
# 1036 "main.c"
 
unsigned int nz = ( 150000 * ( 15 + 1 ) * ( 15 + 1 ) ) ;
unsigned int naz = ( 150000 * ( 15 + 1 ) ) ;
unsigned int na = 150000 ;
 
static int colidx [ ( 150000 * ( 15 + 1 ) * ( 15 + 1 ) ) ] ;
static int rowstr [ 150000 + 1 ] ;
static int iv [ 150000 ] ;
static int arow [ 150000 ] ;
static int acol [ ( 150000 * ( 15 + 1 ) ) ] ;
# 1047 "main.c"
 
static double aelt [ ( 150000 * ( 15 + 1 ) ) ] ;
static double a [ ( 150000 * ( 15 + 1 ) * ( 15 + 1 ) ) ] ;
static double x [ 150000 + 2 ] ;
static double z [ 150000 + 2 ] ;
static double p [ 150000 + 2 ] ;
static double q [ 150000 + 2 ] ;
static double r [ 150000 + 2 ] ;
# 1056 "main.c"
 
static int naa ;
static int nzz ;
static int firstrow ;
static int lastrow ;
static int firstcol ;
static int lastcol ;
# 1064 "main.c"
 
static double amult ;
static double tran ;
# 1068 "main.c"
 
static logical timeron ;
 
# 1073 "main.c"
 
static void conj_grad ( int colidx [ ] ,
                      int rowstr [ ] ,
                      double x [ ] ,
                      double z [ ] ,
                      double a [ ] ,
                      double p [ ] ,
                      double q [ ] ,
                      double r [ ] ,
                      double * rnorm ) ;
static void makea ( int n ,
                  int nz ,
                  double a [ ] ,
                  int colidx [ ] ,
                  int rowstr [ ] ,
                  int firstrow ,
                  int lastrow ,
                  int firstcol ,
                  int lastcol ,
                  int arow [ ] ,
                  int acol [ ] [ 15 + 1 ] ,
                  double aelt [ ] [ 15 + 1 ] ,
                  int iv [ ] ) ;
static void sparse ( double a [ ] ,
                   int colidx [ ] ,
                   int rowstr [ ] ,
                   int n ,
                   int nz ,
                   int nozer ,
                   int arow [ ] ,
                   int acol [ ] [ 15 + 1 ] ,
                   double aelt [ ] [ 15 + 1 ] ,
                   int firstrow ,
                   int lastrow ,
                   int nzloc [ ] ,
                   double rcond ,
                   double shift ) ;
static void sprnvc ( int n , int nz , int nn1 , double v [ ] , int iv [ ] ) ;
static int icnvrt ( double x , int ipwr2 ) ;
static void vecset ( int n , double v [ ] , int iv [ ] , int * nzv , int i , double val ) ;
static int conj_calls = 0 ;
static int loop_iter = 0 ;
 
# 1118 "main.c"
int main ( int argc , char * argv [ ] )
{
  int i , j , k , it ;
  int end ;
# 1123 "main.c"
  double zeta ;
  double rnorm ;
  double norm_temp1 , norm_temp2 ;
# 1127 "main.c"
  double t , mflops , tmax ;
  char Class ;
  int verified ;
  double zeta_verify_value , epsilon , err ;
# 1132 "main.c"
  char * t_names [ 3 ] ;
  acc_init ( acc_device_default ) ;
# 1135 "main.c"
  for ( i = 0 ; i < 3 ; i ++ ) {
    timer_clear ( i ) ;
  }
  
  FILE * fp ;
  if ( ( fp = fopen ( "timer.flag" , "r" ) ) != ( ( void * ) 0 ) ) {
    timeron = true ;
    t_names [ 0 ] = "init" ;
    t_names [ 1 ] = "benchmk" ;
    t_names [ 2 ] = "conjgd" ;
    fclose ( fp ) ;
  } else {
    timeron = false ;
  }
# 1150 "main.c"
  timer_start ( 0 ) ;
# 1152 "main.c"
  firstrow = 0 ;
  lastrow = 150000 - 1 ;
  firstcol = 0 ;
  lastcol = 150000 - 1 ;
# 1157 "main.c"
  if ( 150000 == 1400 && 15 == 7 && 75 == 15 && 110.0 == 10 ) {
    Class = 'S' ;
    zeta_verify_value = 8.5971775078648 ;
  } else if ( 150000 == 7000 && 15 == 8 && 75 == 15 && 110.0 == 12 ) {
    Class = 'W' ;
    zeta_verify_value = 10.362595087124 ;
  } else if ( 150000 == 14000 && 15 == 11 && 75 == 15 && 110.0 == 20 ) {
    Class = 'A' ;
    zeta_verify_value = 17.130235054029 ;
  } else if ( 150000 == 75000 && 15 == 13 && 75 == 75 && 110.0 == 60 ) {
    Class = 'B' ;
    zeta_verify_value = 22.712745482631 ;
  } else if ( 150000 == 150000 && 15 == 15 && 75 == 75 && 110.0 == 110 ) {
    Class = 'C' ;
    zeta_verify_value = 28.973605592845 ;
  } else if ( 150000 == 1500000 && 15 == 21 && 75 == 100 && 110.0 == 500 ) {
    Class = 'D' ;
    zeta_verify_value = 52.514532105794 ;
  } else if ( 150000 == 9000000 && 15 == 26 && 75 == 100 && 110.0 == 1500 ) {
    Class = 'E' ;
    zeta_verify_value = 77.522164599383 ;
  } else {
    Class = 'U' ;
  }
# 1182 "main.c"
  printf ( "\n\n NAS Parallel Benchmarks (NPB3.3-ACC-C) - CG Benchmark\n\n" ) ;
  printf ( " Size: %11d\n" , 150000 ) ;
  printf ( " Iterations: %5d\n" , 75 ) ;
  printf ( "\n" ) ;
# 1187 "main.c"
  naa = 150000 ;
  nzz = ( 150000 * ( 15 + 1 ) * ( 15 + 1 ) ) ;
# 1190 "main.c"
   
   
   
  tran = 314159265.0 ;
  amult = 1220703125.0 ;
  zeta = randlc ( & tran , amult ) ;
# 1197 "main.c"
   
   
   
  makea ( naa , nzz , a , colidx , rowstr , 
        firstrow , lastrow , firstcol , lastcol , 
        arow , 
        ( int ( * ) [ 15 + 1 ] ) ( void * ) acol , 
        ( double ( * ) [ 15 + 1 ] ) ( void * ) aelt ,
        iv ) ;
# 1207 "main.c"
   
   
   
   
   
   
   
   
  for ( j = 0 ; j < lastrow - firstrow + 1 ; j ++ ) {
    for ( k = rowstr [ j ] ; k < rowstr [ j + 1 ] ; k ++ ) {
      colidx [ k ] = colidx [ k ] - firstcol ;
    }
  }
# 1222 "main.c"
#pragma acc data copyin ( colidx [ 0 : nz ] , a [ 0 : nz ] , rowstr [ 0 : na + 1 ] ) create ( x [ 0 : na + 2 ] , z [ 0 : na + 2 ] , p [ 0 : na + 2 ] , q [ 0 : na + 2 ] , r [ 0 : na + 2 ] )
# 1227 "main.c"
{
   
   
   
  int na_gangs = 150000 + 1 ;
  
# 1232 "main.c"
#pragma acc kernels loop gang ( ( na_gangs + 127 ) / 128 ) vector ( 128 ) 
  for ( i = 0 ; i < 150000 + 1 ; i ++ ) {
    x [ i ] = 1.0 ;
  }
# 1237 "main.c"
  end = lastcol - firstcol + 1 ;
  
# 1238 "main.c"
#pragma acc kernels loop gang ( ( end + 127 ) / 128 ) vector ( 128 ) 
  for ( j = 0 ; j < end ; j ++ ) {
    q [ j ] = 0.0 ;
    z [ j ] = 0.0 ;
    r [ j ] = 0.0 ;
    p [ j ] = 0.0 ;
  }
# 1246 "main.c"
  zeta = 0.0 ;
# 1248 "main.c"
   
   
   
   
   
  for ( it = 1 ; it <= 1 ; it ++ ) {
     
     
     
    conj_grad ( colidx , rowstr , x , z , a , p , q , r , & rnorm ) ;
# 1259 "main.c"
     
     
     
     
     
     
    norm_temp1 = 0.0 ;
    norm_temp2 = 0.0 ;
	
# 1267 "main.c"
#pragma acc parallel loop num_gangs ( ( end + 127 ) / 128 ) num_workers ( 4 ) vector_length ( 32 ) reduction ( + : norm_temp2 )
# 1269 "main.c"
    for ( j = 0 ; j < end ; j ++ ) {
       
      norm_temp2 = norm_temp2 + z [ j ] * z [ j ] ;
    }
# 1274 "main.c"
    norm_temp2 = 1.0 / __builtin_sqrt ( norm_temp2 ) ;
# 1276 "main.c"
     
     
     
	
# 1279 "main.c"
#pragma acc kernels loop gang ( ( end + 127 ) / 128 ) vector ( 128 ) 
    for ( j = 0 ; j < end ; j ++ ) { 
      x [ j ] = norm_temp2 * z [ j ] ;
    }
  } 
# 1286 "main.c"
   
   
   
  na_gangs = 150000 + 1 ;
  
# 1290 "main.c"
#pragma acc kernels loop gang ( ( na_gangs + 127 ) / 128 ) vector ( 128 )
  for ( i = 0 ; i < 150000 + 1 ; i ++ ) {
    x [ i ] = 1.0 ;
  }
# 1295 "main.c"
  zeta = 0.0 ;
# 1297 "main.c"
  timer_stop ( 0 ) ;
# 1299 "main.c"
  printf ( " Initialization time = %15.3f seconds\n" , timer_read ( 0 ) ) ;
# 1301 "main.c"
  timer_start ( 1 ) ;
# 1303 "main.c"
   
   
   
   
   
  for ( it = 1 ; it <= 75 ; it ++ ) {
     
     
     
    conj_grad ( colidx , rowstr , x , z , a , p , q , r , & rnorm ) ;
# 1314 "main.c"
     
     
     
     
     
     
    norm_temp1 = 0.0 ;
    norm_temp2 = 0.0 ;
	
# 1322 "main.c"
#pragma acc parallel loop gang worker vector num_gangs ( ( end + 127 ) / 128 ) num_workers ( 4 ) vector_length ( 32 ) reduction ( + : norm_temp1 , norm_temp2 )
# 1324 "main.c"
    for ( j = 0 ; j < end ; j ++ ) {
      norm_temp1 = norm_temp1 + x [ j ] * z [ j ] ;
      norm_temp2 = norm_temp2 + z [ j ] * z [ j ] ;
    }
# 1329 "main.c"
    norm_temp2 = 1.0 / __builtin_sqrt ( norm_temp2 ) ;
# 1331 "main.c"
    zeta = 110.0 + 1.0 / norm_temp1 ;
    if ( it == 1 ) 
      printf ( "\n   iteration           ||r||                 zeta\n" ) ;
    printf ( "    %5d       %20.14E%20.13f\n" , it , rnorm , zeta ) ;
# 1336 "main.c"
     
     
     
	
# 1339 "main.c"
#pragma acc kernels loop gang ( ( end + 127 ) / 128 ) vector ( 128 )
    for ( j = 0 ; j < end ; j ++ ) {
      x [ j ] = norm_temp2 * z [ j ] ;
    }
  } 
# 1345 "main.c"
  timer_stop ( 1 ) ;
} 
 
   
   
   
# 1352 "main.c"
  t = timer_read ( 1 ) ;
# 1354 "main.c"
  printf ( " Benchmark completed\n" ) ;
# 1356 "main.c"
  epsilon = 1.0e-10 ;
  if ( Class != 'U' ) {
    err = __builtin_fabs ( zeta - zeta_verify_value ) / zeta_verify_value ;
    if ( err <= epsilon ) {
      verified = true ;
      printf ( " VERIFICATION SUCCESSFUL\n" ) ;
      printf ( " Zeta is    %20.13E\n" , zeta ) ;
      printf ( " Error is   %20.13E\n" , err ) ;
    } else {
      verified = false ;
      printf ( " VERIFICATION FAILED\n" ) ;
      printf ( " Zeta                %20.13E\n" , zeta ) ;
      printf ( " The correct zeta is %20.13E\n" , zeta_verify_value ) ;
    }
  } else {
    verified = false ;
    printf ( " Problem size unknown\n" ) ;
    printf ( " NO VERIFICATION PERFORMED\n" ) ;
  }
# 1376 "main.c"
  if ( t != 0.0 ) {
    mflops = ( double ) ( 2 * 75 * 150000 )
                   * ( 3.0 + ( double ) ( 15 * ( 15 + 1 ) )
                     + 25.0 * ( 5.0 + ( double ) ( 15 * ( 15 + 1 ) ) )
                     + 3.0 ) / t / 1000000.0 ;
  } else {
    mflops = 0.0 ;
  }
# 1385 "main.c"
  print_results ( "CG" , Class , 150000 , 0 , 0 ,
                75 , t ,
                mflops , "          floating point" , 
                verified , "3.3.1" , "06 Dec 2017" ,
                "icc" , "icc" , "-lm" , "-I../common" , "-O3 -mcmodel=medium" , "-O3 -mcmodel=medium" , "randdp" ) ;
# 1391 "main.c"
   
   
   
  if ( timeron ) {
    tmax = timer_read ( 1 ) ;
    if ( tmax == 0.0 ) tmax = 1.0 ;
    printf ( "  SECTION   Time (secs)\n" ) ;
    for ( i = 0 ; i < 3 ; i ++ ) {
      t = timer_read ( i ) ;
      if ( i == 0 ) {
        printf ( "  %8s:%9.3f\n" , t_names [ i ] , t ) ;
      } else {
        printf ( "  %8s:%9.3f  (%6.2f%%)\n" , t_names [ i ] , t , t * 100.0 / tmax ) ;
        if ( i == 2 ) {
          t = tmax - t ;
          printf ( "    --> %8s:%9.3f  (%6.2f%%)\n" , "rest" , t , t * 100.0 / tmax ) ;
        }
      }
    }
  }
# 1412 "main.c"
  acc_shutdown ( acc_device_default ) ;
  printf ( "conj calls=%d, loop iter = %d. \n" , conj_calls , loop_iter ) ;
# 1415 "main.c"
  return 0 ;
}
# 1419 "main.c"
 
 
 
 
static void conj_grad ( int colidx [ ] ,
                      int rowstr [ ] ,
                      double x [ ] ,
                      double z [ ] ,
                      double a [ ] ,
                      double p [ ] ,
                      double q [ ] ,
                      double r [ ] ,
                      double * rnorm )
{
  int j , k , tmp1 , tmp2 , tmp3 ;
  int end ;
  int cgit , cgitmax = 25 ;
  double d , sum , rho , rho0 , alpha , beta ;
  double sum_array [ 150000 + 2 ] ;
  conj_calls ++ ;
  rho = 0.0 ;
  unsigned int num_gangs = 0 ;
 
# 1441 "main.c"
#pragma acc data present ( colidx [ 0 : nz ] , rowstr [ 0 : na + 1 ] , x [ 0 : na + 2 ] , z [ 0 : na + 2 ] , a [ 0 : nz ] , p [ 0 : na + 2 ] , q [ 0 : na + 2 ] , r [ 0 : na + 2 ] )
# 1446 "main.c"
{
   
   
   
  
# 1450 "main.c"
#pragma acc kernels loop gang ( ( naa + 127 ) / 128 ) vector ( 128 ) independent
  for ( j = 0 ; j < naa ; j ++ ) {
    q [ j ] = 0.0 ;
    z [ j ] = 0.0 ;
    r [ j ] = x [ j ] ;
    p [ j ] = r [ j ] ;
  }
# 1458 "main.c"
   
   
   
   
   
  
# 1463 "main.c"
#pragma acc parallel loop gang worker vector num_gangs ( ( lastcol - firstcol + 1 + 127 ) / 128 ) num_workers ( 4 ) vector_length ( 32 ) reduction ( + : rho ) 
# 1465 "main.c"
  for ( j = 0 ; j < lastcol - firstcol + 1 ; j ++ ) {
    rho = rho + r [ j ] * r [ j ] ;
  }
  
   
   
   
   
   
 
  for ( cgit = 1 ; cgit <= cgitmax ; cgit ++ ) {
   
     
     
     
     
     
     
     
     
     
     
     
	
# 1501 "main.c"
 
    loop_iter ++ ;
     
    end = lastrow - firstrow + 1 ;
# 1506 "main.c"
	
# 1506 "main.c"
#pragma acc parallel num_gangs ( end ) num_workers ( 4 ) vector_length ( 32 )
	{
		
# 1508 "main.c"
#pragma acc loop gang 
		for ( j = 0 ; j < end ; j ++ ) {
		  tmp1 = rowstr [ j ] ;
		  tmp2 = rowstr [ j + 1 ] ;
		  sum = 0.0 ;
		  
# 1513 "main.c"
#pragma acc loop worker vector reduction ( + : sum )
		  for ( k = tmp1 ; k < tmp2 ; k ++ ) {
			tmp3 = colidx [ k ] ;
		    sum = sum + a [ k ] * p [ tmp3 ] ;
		  }
		  q [ j ] = sum ;
		}
    }
     
     
     
    d = 0.0 ;
	end = lastcol - firstcol + 1 ;
	
# 1526 "main.c"
#pragma acc parallel num_gangs ( ( end + 127 ) / 128 ) num_workers ( 4 ) vector_length ( 32 )
	{
		
# 1528 "main.c"
#pragma acc loop gang worker vector reduction ( + : d ) 
		for ( j = 0 ; j < end ; j ++ ) {
		  d = d + p [ j ] * q [ j ] ;
		}
    }
# 1534 "main.c"
     
     
     
    alpha = rho / d ;
# 1539 "main.c"
     
     
     
    rho0 = rho ;
# 1544 "main.c"
     
     
     
     
    rho = 0.0 ;
	
# 1549 "main.c"
#pragma acc kernels loop gang ( ( end + 1023 ) / 1024 ) vector ( 1024 ) independent
    for ( j = 0 ; j < end ; j ++ ) {
      z [ j ] = z [ j ] + alpha * p [ j ] ;
      r [ j ] = r [ j ] - alpha * q [ j ] ;
    }
              
     
     
     
     
	
# 1559 "main.c"
#pragma acc parallel num_gangs ( ( end + 127 ) / 128 ) num_workers ( 4 ) vector_length ( 32 )
	{
		
# 1561 "main.c"
#pragma acc loop gang worker vector reduction ( + : rho )
		for ( j = 0 ; j < end ; j ++ ) 
		{
		  rho = rho + r [ j ] * r [ j ] ;
		}
    }
# 1568 "main.c"
     
     
     
    beta = rho / rho0 ;
# 1573 "main.c"
     
     
     
	
# 1576 "main.c"
#pragma acc kernels loop gang ( ( end + 127 ) / 128 ) vector ( 128 ) independent
    for ( j = 0 ; j < end ; j ++ ) {
      p [ j ] = r [ j ] + beta * p [ j ] ;
    } 
  } 
# 1582 "main.c"
   
   
   
   
   
# 1588 "main.c"
  end = lastrow - firstrow + 1 ;
   
  
# 1590 "main.c"
#pragma acc parallel loop gang num_gangs ( end ) num_workers ( 4 ) vector_length ( 32 )
# 1592 "main.c"
  for ( j = 0 ; j < end ; j ++ ) {
    tmp1 = rowstr [ j ] ;
    tmp2 = rowstr [ j + 1 ] ;
    d = 0.0 ;
	
# 1596 "main.c"
#pragma acc loop worker vector reduction ( + : d )
    for ( k = tmp1 ; k < tmp2 ; k ++ ) {
        tmp3 = colidx [ k ] ;
        d = d + a [ k ] * z [ tmp3 ] ;
    }
    r [ j ] = d ;
  }
   
   
   
   
  sum = 0.0 ;
   
  
# 1609 "main.c"
#pragma acc parallel loop gang worker vector num_gangs ( ( lastcol - firstcol + 1 + 127 ) / 128 ) num_workers ( 4 ) vector_length ( 32 ) reduction ( + : sum )
# 1613 "main.c"
  for ( j = 0 ; j < lastcol - firstcol + 1 ; j ++ ) {
    d = x [ j ] - r [ j ] ;
    sum = sum + d * d ;
  }
# 1618 "main.c"
} 
  * rnorm = __builtin_sqrt ( sum ) ;
}
# 1623 "main.c"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
static void makea ( int n ,
                  int nz ,
                  double a [ ] ,
                  int colidx [ ] ,
                  int rowstr [ ] ,
                  int firstrow ,
                  int lastrow ,
                  int firstcol ,
                  int lastcol ,
                  int arow [ ] ,
                  int acol [ ] [ 15 + 1 ] ,
                  double aelt [ ] [ 15 + 1 ] ,
                  int iv [ ] )
{
  int iouter , ivelt , nzv , nn1 ;
  int ivc [ 15 + 1 ] ;
  double vc [ 15 + 1 ] ;
# 1666 "main.c"
   
   
   
# 1670 "main.c"
   
   
   
  nn1 = 1 ;
  do {
    nn1 = 2 * nn1 ;
  } while ( nn1 < n ) ;
# 1678 "main.c"
   
   
   
  for ( iouter = 0 ; iouter < n ; iouter ++ ) {
    nzv = 15 ;
    sprnvc ( n , nzv , nn1 , vc , ivc ) ;
    vecset ( n , vc , ivc , & nzv , iouter + 1 , 0.5 ) ;
    arow [ iouter ] = nzv ;
    
    for ( ivelt = 0 ; ivelt < nzv ; ivelt ++ ) {
      acol [ iouter ] [ ivelt ] = ivc [ ivelt ] - 1 ;
      aelt [ iouter ] [ ivelt ] = vc [ ivelt ] ;
    }
  }
# 1693 "main.c"
   
   
   
   
  sparse ( a , colidx , rowstr , n , nz , 15 , arow , acol , 
         aelt , firstrow , lastrow ,
         iv , 1.0e-1 , 110.0 ) ;
}
# 1703 "main.c"
 
 
 
 
static void sparse ( double a [ ] ,
                   int colidx [ ] ,
                   int rowstr [ ] ,
                   int n ,
                   int nz ,
                   int nozer ,
                   int arow [ ] ,
                   int acol [ ] [ 15 + 1 ] ,
                   double aelt [ ] [ 15 + 1 ] ,
                   int firstrow ,
                   int lastrow ,
                   int nzloc [ ] ,
                   double rcond ,
                   double shift )
{
  int nrows ;
# 1724 "main.c"
   
   
   
   
  int i , j , j1 , j2 , nza , k , kk , nzrow , jcol ;
  double size , scale , ratio , va ;
  logical cont40 ;
# 1732 "main.c"
   
   
   
  nrows = lastrow - firstrow + 1 ;
# 1737 "main.c"
   
   
   
  for ( j = 0 ; j < nrows + 1 ; j ++ ) {
    rowstr [ j ] = 0 ;
  }
# 1744 "main.c"
  for ( i = 0 ; i < n ; i ++ ) {
    for ( nza = 0 ; nza < arow [ i ] ; nza ++ ) {
      j = acol [ i ] [ nza ] + 1 ;
      rowstr [ j ] = rowstr [ j ] + arow [ i ] ;
    }
  }
# 1751 "main.c"
  rowstr [ 0 ] = 0 ;
  for ( j = 1 ; j < nrows + 1 ; j ++ ) {
    rowstr [ j ] = rowstr [ j ] + rowstr [ j - 1 ] ;
  }
  nza = rowstr [ nrows ] - 1 ;
# 1757 "main.c"
   
   
   
   
  if ( nza > nz ) {
    printf ( "Space for matrix elements exceeded in sparse\n" ) ;
    printf ( "nza, nzmax = %d, %d\n" , nza , nz ) ;
    exit ( 1 ) ;
  }
# 1767 "main.c"
   
   
   
  for ( j = 0 ; j < nrows ; j ++ ) {
    for ( k = rowstr [ j ] ; k < rowstr [ j + 1 ] ; k ++ ) {
      a [ k ] = 0.0 ;
      colidx [ k ] = - 1 ;
    }
    nzloc [ j ] = 0 ;
  }
# 1778 "main.c"
   
   
   
  size = 1.0 ;
  ratio = __builtin_pow ( rcond , ( 1.0 / ( double ) ( n ) ) ) ;
# 1784 "main.c"
  for ( i = 0 ; i < n ; i ++ ) {
    for ( nza = 0 ; nza < arow [ i ] ; nza ++ ) {
      j = acol [ i ] [ nza ] ;
# 1788 "main.c"
      scale = size * aelt [ i ] [ nza ] ;
      for ( nzrow = 0 ; nzrow < arow [ i ] ; nzrow ++ ) {
        jcol = acol [ i ] [ nzrow ] ;
        va = aelt [ i ] [ nzrow ] * scale ;
# 1793 "main.c"
         
         
         
         
        if ( jcol == j && j == i ) {
          va = va + rcond - shift ;
        }
# 1801 "main.c"
        cont40 = false ;
        for ( k = rowstr [ j ] ; k < rowstr [ j + 1 ] ; k ++ ) {
          if ( colidx [ k ] > jcol ) {
             
             
             
            for ( kk = rowstr [ j + 1 ] - 2 ; kk >= k ; kk -- ) {
              if ( colidx [ kk ] > - 1 ) {
                a [ kk + 1 ] = a [ kk ] ;
                colidx [ kk + 1 ] = colidx [ kk ] ;
              }
            }
            colidx [ k ] = jcol ;
            a [ k ] = 0.0 ;
            cont40 = true ;
            break ;
          } else if ( colidx [ k ] == - 1 ) {
            colidx [ k ] = jcol ;
            cont40 = true ;
            break ;
          } else if ( colidx [ k ] == jcol ) {
             
             
             
            nzloc [ j ] = nzloc [ j ] + 1 ;
            cont40 = true ;
            break ;
          }
        }
        if ( cont40 == false ) {
          printf ( "internal error in sparse: i=%d\n" , i ) ;
          exit ( 1 ) ;
        }
        a [ k ] = a [ k ] + va ;
      }
    }
    size = size * ratio ;
  }
# 1840 "main.c"
   
   
   
  for ( j = 1 ; j < nrows ; j ++ ) {
    nzloc [ j ] = nzloc [ j ] + nzloc [ j - 1 ] ;
  }
# 1847 "main.c"
  for ( j = 0 ; j < nrows ; j ++ ) {
    if ( j > 0 ) {
      j1 = rowstr [ j ] - nzloc [ j - 1 ] ;
    } else {
      j1 = 0 ;
    }
    j2 = rowstr [ j + 1 ] - nzloc [ j ] ;
    nza = rowstr [ j ] ;
    for ( k = j1 ; k < j2 ; k ++ ) {
      a [ k ] = a [ nza ] ;
      colidx [ k ] = colidx [ nza ] ;
      nza = nza + 1 ;
    }
  }
  for ( j = 1 ; j < nrows + 1 ; j ++ ) {
    rowstr [ j ] = rowstr [ j ] - nzloc [ j - 1 ] ;
  }
  nza = rowstr [ nrows ] - 1 ;
}
# 1868 "main.c"
 
 
 
 
 
 
 
 
 
static void sprnvc ( int n , int nz , int nn1 , double v [ ] , int iv [ ] )
{
  int nzv , ii , i ;
  double vecelt , vecloc ;
# 1882 "main.c"
  nzv = 0 ;
# 1884 "main.c"
  while ( nzv < nz ) {
    vecelt = randlc ( & tran , amult ) ;
# 1887 "main.c"
     
     
     
    vecloc = randlc ( & tran , amult ) ;
    i = icnvrt ( vecloc , nn1 ) + 1 ;
    if ( i > n ) continue ;
# 1894 "main.c"
     
     
     
    logical was_gen = false ;
    for ( ii = 0 ; ii < nzv ; ii ++ ) {
      if ( iv [ ii ] == i ) {
        was_gen = true ;
        break ;
      }
    }
    if ( was_gen ) continue ;
    v [ nzv ] = vecelt ;
    iv [ nzv ] = i ;
    nzv = nzv + 1 ;
  }
}
# 1912 "main.c"
 
 
 
static int icnvrt ( double x , int ipwr2 )
{
  return ( int ) ( ipwr2 * x ) ;
}
# 1921 "main.c"
 
 
 
 
static void vecset ( int n , double v [ ] , int iv [ ] , int * nzv , int i , double val )
{
  int k ;
  logical set ;
# 1930 "main.c"
  set = false ;
  for ( k = 0 ; k < * nzv ; k ++ ) {
    if ( iv [ k ] == i ) {
      v [ k ] = val ;
      set = true ;
    }
  }
  if ( set == false ) {
    v [ * nzv ] = val ;
    iv [ * nzv ] = i ;
    * nzv = * nzv + 1 ;
  }
}
