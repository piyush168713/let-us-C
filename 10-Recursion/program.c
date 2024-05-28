// q - 9

// factorial of a number

// #include<stdio.h>

// int solve(int x){
//     if(x == 1)
//         return 1;
//     else
//         return x * solve(x-1);
// }

// int main(){
//     int a, fact;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     fact = solve(a);
//     printf("Factorial of %d: %d\n", a, fact);
//     return 0;
// }



// 10.1)
// A 5-digit positive integer is entered through the keyboard, write a
// recursive function to calculate sum of digits of the 5-digit number.

// #include<stdio.h>

// int solve(int a){
//     int sum, rem;
//     if(a != 0){
//         rem = a%10;
//         sum = rem + solve(a/10);
//     }
//     else
//         return 0;
// }

// int main(){
//     int a, sum;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     sum = solve(a);
//     printf("Sum of digits of %d: %d\n", a, sum);
//     return 0;
// }



// 10.2)
// A positive integer is entered through the keyboard, write a program to
// obtain the prime factors of the number. Modify the function suitably to
// obtain the prime factors recursively.

// #include<stdio.h>

// void factorize(int n){
//     for(int i = 2; i <= n; i++){
//         if(n % i == 0){
//             printf("%d ", i);
//             n = n/i;
//         }
//     }
// }

// // using Recursion
// void factorize1(int n, int i){ 
//     if(i <= n){
//         if(n%i == 0){
//             printf("%d ", i);
//             n = n/i;
//         }
//         else
//             i++;
        
//         factorize1(n,i);
//     }
// }

// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     printf("Prime Factors are: ");
//     factorize(a);
//     printf("\nPrime Factors are: ");
//     factorize1(a, 2);
//     printf("\n");
//     return 0;
// }




// 10.3)
// Write a recursive function to obtain the first 25 numbers of a Fibonacci
// sequence. In a Fibonacci sequence the sum of two successive terms
// gives the third term. Following are the first few terms of the Fibonacci
// sequence: 0 1 1 2 3 5 8 13 21 34 55 89….

// #include<stdio.h>

// int fib(int n){
//     if(n == 0 || n == 1)
//         return n;
//     else
//         return fib(n-1) + fib(n-2);
// }

// int main(){
//     int terms = 25, n = 0;
//     for(int i = 1; i <= 25; i++){
//         printf("%d ", fib(n));
//         n++;
//     }

//     return 0;
// }




// [A] What will be the output of the following programs?

// # include <stdio.h>
// int main( )
// {
//     printf ( "I C, you C, we all C\n" ) ;
//     main( ) ;
//     return 0 ;
// }

// o/p - prints "I C, you C, we all C" infinite times



// # include <stdio.h>
// # include <stdlib.h>
// int main( )
// {
//     int i = 0 ;
//     i++ ;
//     if ( i <= 5 ){
//         printf ( "C adds wings to your thoughts\n" ) ;
//         exit ( 0 ) ;
//         main( ) ;
//     }
//     return 0 ;
// }

// o/p - prints "C adds wings to your thoughts" 1 time



// [B] Attempt the following questions:

// Print the Sum of digits using non-recursive function and recursive function

// #include<stdio.h>

// int nonrec_calc(int num)
// {
//     int a, sum = 0, i;
//     for (i = 0; num; i++)
//     {
//         a = num % 10;
//         sum = sum + a;
//         num = num / 10;
//     }
//     return sum;
// }

// int rec_calc(int num)
// {
//     int sum = 0;
//     if (num == 0)
//         return sum;
//     sum = num % 10 + rec_calc(num / 10);
//     return sum;
// }


// int main(){
//     int num, sum;
//     printf("Enter a five digit number : ");
//     scanf("%d", &num);
//     sum = nonrec_calc(num);
//     printf("Sum of digits using non-recursive function : %d\n", sum);

//     sum = rec_calc(num);
//     printf("Sum of digits using recursive function: %d\n", sum);
// 
//     printf("20BCS9107");
//     return 0;
// }


// (a) A positive integer is entered through the keyboard, write a function
// to find the binary equivalent of this number:
//     (1) Without using recursion
//     (2) Using recursion



// #include <stdio.h>

// void printBinaryRecursive(int n);
// void printBinaryIterative(int n);

// int main() {
//     int num;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     printf("Binary equivalent (recursive): ");
//     if (num == 0) {
//         printf("0");
//     } else {
//         printBinaryRecursive(num);
//     }
//     printf("\n");

//     printf("Binary equivalent (iterative): ");
//     printBinaryIterative(num);

//     return 0;
// }

// void printBinaryRecursive(int n) {
//     if (n > 0) {
//         printBinaryRecursive(n / 2);
//         printf("%d", n % 2);
//     }
// }

// void printBinaryIterative(int n) {
//     if (n == 0) {
//         printf("0");
//         return;
//     }
    
//     int binary[32];
//     int index = 0;
    
//     while (n > 0) {
//         binary[index++] = n % 2;
//         n = n / 2;
//     }
    
//     // Printing the binary array in reverse order
//     for (int i = index - 1; i >= 0; i--) {
//         printf("%d", binary[i]);
//     }
//     printf("\n");
// }



// b)
// Write a recursive function to obtain the sum of first 25 natural numbers.

// #include<stdio.h>

// int solve(int);

// int main(){
//     int n = 25;
//     int sum = solve(n);
//     printf("The sum of the first %d natural numbers is: %d\n", n, sum);
//     return 0;
// }

// int solve(int n){
//     if(n == 1){
//         return 1;
//     }
//     else{
//         return n + solve(n-1);
//     }
// }



// c)
// Tower of Hanoi
// There are three pegs labeled A, B and C. Four disks are placed on
// peg A. The bottom-most disk is largest, and disks go on decreasing
// in size with the topmost disk being smallest. The objective of the
// game is to move the disks from peg A to peg C, using peg B as an
// auxiliary peg. The rules of the game are as follows:
// 
//     (1) Only one disk may be moved at a time, and it must be the top
//     disk on one of the pegs.
//
//     (2) A larger disk should never be placed on the top of a smaller disk.
//
// Write a program to print out the sequence in which the disks should
// be moved such that all disks on peg A are finally transferred to peg
// C.

#include<stdio.h>

void moveDisks(int, char, char, char);

int main(){
    int n = 4;
    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    moveDisks(n, 'A', 'C', 'B');
    return 0;
}

void moveDisks(int n, char fromPeg, char toPeg, char auxPeg){
    if(n == 1){
        printf("Move disk 1 from peg %c to peg %c\n", fromPeg, toPeg);
        return;
    }
    moveDisks(n-1, fromPeg, auxPeg, toPeg);
    printf("Move disk %d from peg %c to peg %c\n", n, fromPeg, toPeg);
    moveDisks(n-1, auxPeg, toPeg, fromPeg);
}