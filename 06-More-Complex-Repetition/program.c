

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

// #include<stdio.h>

// int main(){
//     int n, i;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     i = 2;
//     while(i < n){
//         if(n%i == 0){
//             printf ("Not a prime number\n") ;
//             break ;
//         }
//         i++;
//     }
//     if(i == n){
//         printf("Prime Number\n");
//     }

//     printf("Author: Piyush Kumar\n)");
//     printf("20BCS9107\n)");

//     return 0;
// }


// or


// #include<stdio.h>

// void isPrime(int n){
//     int i = 2;
//     for( i = 2; i < n; i++){
//         if(n%i == 0){
//             printf("Not Prime\n");
//             break;
//         }
//     }
//     if(i == n){
//         printf("Prime\n");
//     }
//     return;
// }

// int main(){
//     int n = 5;
//     isPrime(n);
    
//     return 0;
// }



// The continue Statement
// # include <stdio.h>
// int main( )
// {
//     int i, j ;
//     for ( i = 1 ; i <= 2 ; i++ )
//     {
//         for ( j = 1 ; j <= 2 ; j++ )
//         {
//             if ( i == j )
//                 continue ;
//             printf ( "%d %d\n", i, j ) ;  // if i and j are not same then print the values
//             // contiue;
//         }
//     }
//     return 0 ;
// }



// The Odd Loop
// # include <stdio.h>
// int main( )
// {
// char another ;
// int num ;
// do
// {
//     printf ( "Enter a number " ) ;
//     scanf ( "%d", &num ) ;
//     printf ( "square of %d is %d\n", num, num * num ) ;
//     printf ( "Want to enter another number y/n " ) ;
//     fflush ( stdin ) ;
//     scanf ( "%c", &another ) ;
//     } while ( another == 'y' ) ;
// return 0 ;
// }




// 6.1
// Write a program to print all prime numbers from 1 to 300.

// #include<stdio.h>

// void isPrime(int n){
//     int i = 2;
//     for( i = 2; i < n; i++){
//         if(n%i == 0){
//             // printf("Not Prime\n");
//             break;
//         }
//     }
//     if(i == n){
//         printf("%d\n", n);
//         // printf("Prime\n");
//     }
//     return;
// }

// int main(){
//     for(int n = 0; n <= 300; n++){
//         isPrime(n);
//     }
    
//     return 0;
// }

// or

// #include<stdio.h>

// int main(){
//     for(int n = 0; n <= 300; n++){
//         int i = 2;
//         for(i = 2; i < n; i++){
//             if(n%i == 0){
//                 break;
//             }
//         }
//         if(i == n){
//             printf("%d\n", n);
//         }
//     }
//     return 0;
// }




// 6.2
// Write a program to add first seven terms of the following series using a
// for loop.
// 1/1! + 2/2! + 3/3! + ....


// pseudocode for finding factorial
// int fact = 1, n;
// if(n < 0){
//     printf("Error! Factorial of a negative number doesn't exist.");
// }
// else{
//     for(int i = 1; i <= n; i++){
//         fact *= i;
//     }
// }
// printf("Factorial of %d: %d\n", n, fact);



// #include<stdio.h>

// int main(){
//     int n = 5;
//     float fact, sum = 0.0;
//     for (int i = 0; i < n; i++)
//     {
//         // Calculate factorial
//         fact = 1.0;
//         for(int j = 1; j <= i; j++){
//             fact *= j;
//         }
//         sum += i/fact;
//     }
//     printf("Sum of Series: %f\n", sum);
    
//     return 0;
// }




// 6.3)
// Write a program to generate all combinations of 1, 2 and 3 using for loop.
// #include<stdio.h>

// int main(){
//     int i = 1, j = 1, k = 1;
//     for(int i = 1; i <= 3; i++){
//         for(int j = 1; j <= 3; j++){
//             for(int k = 1; k <= 3; k++){
//                 printf("%d %d %d\n", i, j, k);
//             }
//         }
//     }
//     return 0;
// }




// [A] Answer the following questions:
// (a) The break statement is used to exit from:
//     1. An if statement
//     2. A for loop   - true
//     3. A program
//     4. The main( ) function

// (b) A do-while loop is useful when we want that the statements within
//     the loop must be executed:
//     1. Only once
//     2. At least once    - true
//     3. More than once
//     4. None of the above

// (c) In what sequence the initialization, testing and execution of body is
//     done in a do-while loop?
//     1. Initialization, execution of body, testing   - true
//     2. Execution of body, initialization, testing
//     3. Initialization, testing, execution of body
//     4. None of the above

// (d) Which of the following is not an infinite loop?
    // 1.  int i = 1 ;
    //     while ( 1 )
    //     {
    //         i++ ;
    //     }
        // Infinite loop

    // 2. for ( ; ; ) ;   - Infinite loop
        // use cases
        // #include <stdio.h>
        // int main() {
        //     int count = 0;
        //     for ( ; ; ) {
        //         count++;
        //         if (count >= 1000) {
        //             break;  // Exit the loop when count reaches 10
        //         }
        //     }
        //     printf("Loop exited after %d iterations.\n", count);
        //     return 0;
        // }

    // 3. int t = 0, f ;
    //    while ( t )
    //    {
    //       f=1;
    //    }    
    // No Loop Execution

    // 4. int y, x = 0 ;
    //    do
    //    {
    //       y=x;
    //    }


#include<stdio.h>

int main(){
    int y, x = 0 ;
    do
    {
        y=x;
    }
    return 0;
}