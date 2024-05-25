// q - 27

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
    // while loop is missing


// e) Which of the following statements is true for the following program?
    // # include <stdio.h>
    // int main( )
    // {
    //     int x = 10, y = 100 % 90 ;  // y = 10;
    //     for (int i = 1 ; i <= 10 ; i++ ) ;
    //     if ( x != y ) ;
    //         printf ( "x = %d y = %d\n", x, y ) ;
    //     return 0 ;
    // }

    // The printf( ) function is called 10 times.
    // The program will produce the output x = 10 y = 10. - true
    // The ; after the if ( x != y ) will not produce an error.
    // The program will not produce any output.
    // The printf( ) function is called infinite times.
    


// (f) Which of the following statement is true about a for loop used in a C program?
// 1. for loop works faster than a while loop. - true
// 2. All things that can be done using a for loop can also be done using a while loop. - true
// 3. for ( ; ; ) implements an infinite loop. - true
// 4. for loop can be used if we want statements in a loop to get executed at least once. - false, it can be done with do-while loop
// 5. for loop works faster than a do-while loop. - 



// [B] 
// Attempt the following questions:

// (a) Write a program to print the multiplication table of the number
//     entered by the user. The table should get displayed in the following
//     form:
//     29 * 1 = 29
//     29 * 2 = 58
//     …


// #include<stdio.h>

// int main(){
//     int n, a;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= 10; i++){
//         a = n*i;
//         printf("%d * %d = %d\n", n, i, a);
//     }
//     return 0;
// }


// b).

// #include<stdio.h>

// int main(){
//     int y;
//     float x, i;
//     printf("           y         x      =       i");
//     for (y = 1; y <= 6; y++)
//     {
//         for(x = 5.5; x <= 12.5; x += 0.5){
//             i = 2 + (y + 0.5*x);
//             printf("\n           %d     %f   =   %f", y, x, i);
//         }
//     }
//     return 0;
// }



// c).

// #include<stdio.h>
// #include<math.h>

// int main(){
//     float p, q, r, n, a;
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("Enter principal, rate, time (in year) and compound interest respectively: ");
//         scanf("%f %f %f %f", &p, &r, &n, &q);
//         a = p * (pow((1 + r/q), n*q));
//         printf("The amount is %f\n", a);
//     }
    
//     return 0;
// }



// d).

// #include<stdio.h>
// #include<math.h>

// int main(){
//     int x;
//     double a;
//     printf("Enter the value of n: ");
//     scanf("%d", &x);
//     a = (double)(x-1)/x;

//     for (int i = 2; i <= 7; i++)
//     {
//         a += (1.0/2.0) * pow(((double)(x-1)/x), i);
//     }

//     printf("Sum of 7 terms: %lf", a);
    
//     return 0;
// }



// e). write a program to print pythagorean triplets with side length less than or equal to 30.

// #include<stdio.h>

// int main(){
//     printf("Pythagorean Triplets are: ");
//     for(int i = 1; i <= 30; i++){
//         for(int j = 1; j <= 30; j++){
//             for(int k = 1; k <= 30; k++){
//                 if((i*i + j*j == k*k) || (j*j + k*k == i*i) || (i*i + k*k == j*j)){
//                     printf("\n%d %d %d", i, j, k);
//                 }
//             }
//         }
//     }
//     return 0;
// }



// f).

// #include<stdio.h>

// int main(){
//     int p = 100000;
//     for(int i = 0; i < 10; i++){
//         p = p - (p/100)*10;
//         printf("Year: %d: %d\n", 10-i, p);
//     }
//     return 0;
// }


// g).

// #include<stdio.h>

// int main(){
//     int i, j, k, l, num;
//     for(int num = 0; num < 5000; num++){
        
//     }
//     return 0;
// }


// h).

// #include<stdio.h>

// int main(){
//     int hr;
//     for(hr = 0; hr < 24; hr++){
//         if(hr == 0){
//             printf("12 Midnight\n");
//         }
//         else if(hr > 0 && hr < 12){
//             printf("%d AM\n", hr);
//         }
//         else if(hr == 12){
//             printf("%d Noon\n", hr);
//         }
//         else if(hr > 12 && hr < 24){
//             printf("%d PM\n", hr-12);
//         }
//     }
//     return 0;
// }



// i).

#include<stdio.h>

int main(){
    int num, r, c, sp, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(r = 1; r <= num; r++){
        for(sp = 1; sp <= num-r; sp++){
            printf(" ");
        }
        for(c = 1; c <= r; c++, i++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

