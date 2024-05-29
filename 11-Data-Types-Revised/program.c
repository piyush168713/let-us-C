// # include <stdio.h>
// int main( )
// {
//     char ch = 128 ;
//     char dh = -132 ;
//     printf ( "%hhd %hhd\n", ch, dh ) ;    // signed gives -128 to +127
//     return 0 ;
// }


// Automatic Storage Class

// # include <stdio.h>
// int main( )
// {
//     auto int i = 1 ;
//     {
//         auto int i = 2 ;
//         {
//             auto int i = 3 ;
//             printf ( "%d ", i ) ;
//         }
//         printf ( "%d ", i ) ;
//     }
//     printf ( "%d\n", i ) ;
//     return 0 ;
// }


// static storage class

// #include <stdio.h>
// void increment( ) ;
// int main( )
// {
//     increment( ) ;
//     increment( ) ;
//     increment( ) ;
//     return 0 ;
// }
// void increment( )
// {
//     auto int i = 1 ;
//     static int j = 1 ;
//     i=i+1;
//     j=j+1;
//     printf ("%d %d\n", i, j) ;
// }
// the variable i dies, whereas j being static, continues to live with its latest value. 
// j dies only when execution of the program comes to an end.




// External Storage Class

// # include <stdio.h>

// int i ;
// void increment( ) ;
// void decrement( ) ;

// int main( ){
//     printf ( "\ni = %d", i ) ;
//     increment( ) ;
//     increment( ) ;
//     decrement( ) ;
//     decrement( ) ;
//     return 0 ;
// }

// void increment( )
// {
//     i=i+1;
//     printf ( "on incrementing i = %d\n", i ) ;
// }

// void decrement( )
// {
//     i=i-1;
//     printf ( "on decrementing i = %d\n", i ) ;
// }

// o/p - 0 1 2 1 0


// # include <stdio.h>
// int x = 21 ;
// int main( )
// {
//     extern int y ;
//     printf ( "%d %d\n", x, y ) ;
//     return 0 ;
// }
// int y = 31 ;



// # include <stdio.h>

// int x = 10 ;
// void display( ) ;

// int main( ){
//     int x = 20 ;
//     printf ( "%d\n", x ) ;
//     display( ) ;
//     return 0 ;
// }

// void display( ){
//     printf ( "%d\n", x ) ;
// }



// # include <stdio.h>
// int fun1( ) ;
// int fun2( ) ;
// extern int i ;
// int i = 35 ;

// int main( )
// {
//     printf ( "%d\n", i ) ;
//     fun1( ) ;
//     fun2( ) ;
//     return 0 ;
// }

// int fun1( ){
//     i++ ;
//     printf ( "%d\n", i ) ;
//     return 0 ;
// }
// int fun2( ){
//     i-- ;
//     printf ( "%d\n", i ) ;
//     return 0 ;
// }





// [A] What will be the output of the following programs?


// # include <stdio.h>
// int i = 0 ;
// void val( ) ;
// int main( )
// {
//     printf ( "main's i = %d\n", i ) ;
//     i++ ;
//     val( ) ;
//     printf ( "main's i = %d\n", i ) ;
//     val( ) ;
//     return 0 ;
// }
// void val( )
// {
//     i = 100 ;
//     printf ( "val's i = %d\n", i ) ;
//     i++ ;
// }

// o/p - 
// main's i = 0
// val's i = 100
// main's i = 101
// val's i = 100




// # include <stdio.h>
// int main( )
// {
//     static int count = 5 ;
//     printf ( "count = %d\n", count-- ) ;
//     if ( count != 0 )
//         main( ) ;
//     return 0 ;
// }

// count = 5
// count = 4
// count = 3
// count = 2
// count = 1




// # include <stdio.h>
// void fnc( ) ;
// int main( )
// {
//     func( ) ;
//     func( ) ;
//     return 0 ;
// }
// void func( )
// {
//     auto int i = 0 ;
//     register int j = 0 ;
//     static int k = 0 ;
//     i++ ; j++ ; k++ ;
//     printf ( "%d % d %d\n", i, j, k ) ;
// }

// o/p - 1 1 1
     //  1 1 2


// # include <stdio.h>
// int x = 10 ;
// int main( )
// {
//     int x = 20 ;{
//         int x = 30 ;
//         printf ( "%d\n", x ) ;
//     }
//     printf ( "%d\n", x ) ;
//     return 0 ;
// }

// o/p - 30 20



// [B] Point out the errors, if any, in the following programs:

// # include <stdio.h>
// int main( )
// {
// long num = 2 ;
// printf ( "%ld\n", num ) ;
// return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
// char ch = 200 ;
// printf ( "%c\n", ch ) ;
// return 0 ;
// }


// # include <stdio.h>
// int main( )
// {
//      double a = 25.345e4 ;
//      double b = 25.0 ;
//      printf ("%lf %lf\n", a, b ) ;
//      return 0 ;
// }



// # include <stdio.h>
// static int y ;
// int main( )
// {
//      static int z ;
//      printf ( "%d %d\n", y, z ) ;
//      return 0 ;
// }



