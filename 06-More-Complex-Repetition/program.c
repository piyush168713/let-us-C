

/* Calculation of simple interest for 3 sets of p, n and r */
// # include <stdio.h>
// int main( )
// {
//     int p, n, count ;
//     float r, si ;
//     for ( count = 1 ; count <= 3 ; count = count + 1 )
//     {
//         printf ( "Enter values of p, n, and r " ) ;
//         scanf ( "%d %d %f", &p, &n, &r ) ;
//         si = p * n * r / 100 ;
//         printf ( "Simple Interest = Rs.%f\n", si ) ;
//     }
//     return 0 ;
// }


// # include <stdio.h>
// int main( )
// {
//     int i ;
//     for ( i = 1 ; i <= 10 ; i = i + 1 )
//         printf ( "%d\n", i ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     int i ;
//     for ( i = 1 ; i <= 10 ; )
//     {
//         printf ( "%d\n", i ) ;
//         i=i+1;
//     }
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     int i = 1 ;
//     for ( ; i <= 10 ; i = i + 1 )
//         printf ( "%d\n", i ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     int i ;
//     for ( i = 0 ; i++ < 10 ; )
//         printf ( "%d\n", i ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     int i ;
//     for ( i = 0 ; ++i <= 10 ; )
//         printf ( "%d\n", i ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     int r, c, sum ;
//     for ( r = 1 ; r <= 3 ; r++ ) /* outer loop */
//     {
//         for ( c = 1 ; c <= 2 ; c++ ) /* inner loop */
//         {
//             sum = r + c ;
//             printf ( "r = %d c = %d sum = %d\n", r, c, sum ) ;
//         }
//     }
//     return 0 ;
// }



// The do-while Loop

// do-while tests the condition after having executed the statements within the loop.
// do-while would execute its statements at least once, even if the condition fails for the first time.


// # include <stdio.h>
// int main( )
// {
//     do
//     {
//         printf ( "Credit is yours, pleasure is mine\n" ) ;
//     } while ( 4 < 1 ) ;
//     return 0 ;
// }



// The break Statement

// When break is encountered inside a while, for or do-while loop, control automatically 
// passes to the first statement after the loop.
// A break is usually associated with an if.



// Example 6.1: Write a program to determine whether a number is prime
// or not. A prime number is said to be prime if it is divisible only by 1 or
// itself.

#include<stdio.h>

int main(){
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    i = 2;
    while(i <= num-1){
        if(num%i == 0){
            printf ("Not a prime number\n") ;
            break ;
        }
        i++;
    }
    if(i == num){
        printf("Prime Number\n");
    }

    return 0;
}