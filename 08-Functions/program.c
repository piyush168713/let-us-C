// q - 9

// 8.1)
// Write a function to calculate the factorial value of any integer entered
// through the keyboard.

// #include<stdio.h>

// int solve(int a){
//     int f = 1;
//     for(int i = 1; i <= a; i++){
//         f = f*i;
//     }
//     return f;
// }

// int main(){
//     int num, fact;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     fact = solve(num);
//     printf("Factorial of %d is %d\n", num, fact);
//     return 0;
// }



// 8.2)
// Write a function power ( a, b ), to calculate the value of a raised to b.

// #include<stdio.h>

// int power(int x, int y){
//     int ans = 1;
//     for(int i = 1; i <= y; i++){
//         ans = ans*x;
//     }
//     return ans;
// }

// int main(){
//     int a, b, ans;
//     printf("Enter a and b: ");
//     scanf("%d %d", &a ,&b);
//     ans = power(a,b);
//     printf("%d to power %d is %d\n",a, b, ans);
//     return 0;
// }




// 8.3)
// Define a function to convert any given year into its Roman equivalent.
// Use these Roman equivalents for decimal numbers: 1 – I, 5 – V, 10 – X,
// 50 – L, 100 – C, 500 – D, 1000 – M.
// Example:
// Roman equivalent of 1988 is mdcccclxxxviii.
// Roman equivalent of 1525 is mdxxv.

// #include<stdio.h>

// int solve(int y, int k, char c){
//     int i, j;
//     j = y/k;
//     for(int i = 1; i <= j; i++){
//         printf("%c\n", c);
//     }
//     return y%k;
// }

// int main(){
//     int yr;
//     printf("Enter a year: ");
//     scanf("%d", &yr);
//     yr = solve(yr, 1000, 'm');
//     yr = solve(yr, 500, 'd');
//     yr = solve(yr, 100, 'c');
//     yr = solve(yr, 50, 'l');
//     yr = solve(yr, 10, 'x');
//     yr = solve(yr, 5, 'v');
//     solve(yr, 1, 'i');

//     return 0;
// }



// [A] Point out the errors, if any, in the following programs:

// a
// # include <stdio.h>
// int addmult ( int, int );
// int main( )
// {
//     int i = 3, j = 4, k, l ;
//     k = addmult ( i, j ) ;
//     l = addmult ( i, j ) ;
//     printf ( "%d %d\n", k, l ) ;
//     return 0 ;
// }
// int addmult ( int x, int y )
// {
//     int u, v ;
//     u=x+y;
//     v=x*y;
//     return ( u, v ) ;
// }



// b
// # include <stdio.h>

// void message(void);

// int main( )
// {
//     int a ;
//     message( ) ;
//     return 0 ;
// }
// void message( )
// {
//     printf ( "Learn from him online at ykanetkar.com\n" ) ;
//     return ;
// }



// c
// # include <stdio.h>

// void printit(float, char);

// int main( )
// {
//     float a = 15.5 ;
//     char ch = 'C' ;
//     printit ( a, ch ) ;
//     return 0 ;
// }
// void printit (float a, char ch )
// {
//     printf ( "%f %c\n", a, ch ) ;
// }



// d
// # include <stdio.h>
// void let_us_c(void);
// int main( )
// {
//     let_us_c( );
//     return 0 ;
// }

// void let_us_c( )
// {
//     printf ( "Learn C online…\n" ) ;
//     printf ( "At ykanetkar.com\n" ) ;
// }



// [B] Answer the following questions:

// (a) Any year is entered through the keyboard. Write a function to
// determine whether the year is a leap year or not.

// #include<stdio.h>

// int solve(int yr){
//     if((yr%4 == 0) && (yr%100 != 0 || yr%400 == 0))
//         return 1;
//     else   
//         return 0;
// }

// int main(){
//     int yr, leap;
//     printf("Enter year: ");
//     scanf("%d", &yr);

//     leap = solve(yr);

//     if(leap == 1)
//         printf("Leap Year\n");
//     else
//         printf("Not a Leap Year\n");
//     return 0;
// }




// (b) A positive integer is entered through the keyboard. Write a function
// to obtain the prime factors of this number.
// For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime
// factors of 35 are 5 and 7.

#include<stdio.h>

void prime(int n){
    int i, j, isPrime = 1;

    for(i = 2; i <= n; i++){
        if(n%i == 0){
            isPrime = 1;
            for(j = 2; j <= i/2; j++){
                if(i%j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%d\n", i);
            }
        }
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}