// we wish to calculate simple interest for 3 sets of values of principal, 
// number of years and rate of interest.

// #include<stdio.h>

// int main(){
//     int p, n, cnt = 1;
//     float rate, si;

//     while(cnt <= 3){
//         printf("Enter value of p, n, rate: ");
//         scanf("%d %d %f", &p, &n, &rate);
//         si = p * n * rate /100;
//         printf("Simple Interest: Rs %f\n", si);
//         cnt++;
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int i = 5 ;
//     while ( i >= 1 )
//     {
//         printf ( "Make the computer literate!\n" ) ;
//         i=i-1;
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     float a = 10.0 ;
//     while ( a <= 10.5 )
//     {
//         printf ( "Raindrops on roses..." ) ;
//         printf ( "...and whiskers on kittens\n" ) ;
//         a = a + 0.1 ;
//     }
//     return 0;
// }



// # include <stdio.h>
// int main( )
// {
//     int i = 1 ;
//     while ( i <= 10 ) ;
//     {
//         printf ( "%d\n", i ) ;
//         i=i+1;
//     }
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     int i = 1;
//     while(i <= 10){
//         printf("%d\n", i);
//         // i = i+1;
//         i++;
//     }
//     return 0 ;
// }



// prints 1 to 11
// # include <stdio.h>
// int main( )
// {
//     int i = 0;
//     while(i++ <= 10){
//         printf("%d\n", i);
//     }
//     return 0 ;
// }




// prints 1 to 10
// # include <stdio.h>
// int main( )
// {
//     int i = 0;
//     while(++i <= 10){
//         printf("%d\n", i);
//     }
//     return 0 ;
// }




// 5.1
// Write a program to calculate overtime pay of 10 employees. Overtime is
// paid at the rate of Rs. 120.00 per hour for every hour worked above 40
// hours. Assume that employees do not work for fractional part of an hour.

// #include<stdio.h>

// int main(){
//     int hr;
//     float overtimeTotal;
//     int i = 1;
//     while(i <= 10){
//         printf("Enter the no. of hour worked: ");
//         scanf("%d", &hr);
//         if(hr > 40){
//             overtimeTotal = (hr - 40) * 120;
//         }
//         else{
//             overtimeTotal = 0;
//         }
//         printf("Hours: %d Overtime Pay: %f\n", hr, overtimeTotal);
//         i++;
//     }
//     return 0;
// }



// 5.2)
// Write a program to find the factorial value of any number entered
// through the keyboard.

// #include<stdio.h>

// int main(){
//     int n, i = 1, fact = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while(i <= n){
//         fact = fact * i;
//         i++;
//     }
//     printf("%d\n", fact);
//     return 0;
// }




// 5.3)
// Two numbers are entered through the keyboard. Write a program to
// find the value of one number raised to the power of another.

// #include<stdio.h>

// int main(){
//     float a, n = 1;
//     int  b, i=1;
//     printf("Enter two number: ");
//     scanf("%f %d", &a, &b);
//     while(i <= b){
//         n = n * a;
//         i++;
//     }
//     printf("%f to the power %d is %f\n", a, b, n);
//     return 0;
// }




// # include <stdio.h>
// int main( )
// {
//     int i = 1 ;
//     while ( i <= 10 ) 
//     {
//         printf ( "%d\n", i ) ;
//         i++ ;
//     }
//     return 0 ;
// }




// # include <stdio.h>
// int main( )
// {
//     int x = 4, y, z ;
//     y = --x ;
//     z = x-- ;
//     printf ( "%d %d %d\n", x, y, z ) ;
//     return 0 ;
// }
// 2 3 3



// # include <stdio.h>
// int main( )
// {
//     int x = 4, y = 3, z ;
//     z = x-- - y ;
//     printf ( "%d %d %d\n", x, y, z ) ;
//     return 0 ;
// }
// 3 3 1



// # include <stdio.h>
// int main( )
// {
//     while ( 'a' < 'b' )
//         printf ( "malayalam is a palindrome\n" ) ;
//     return 0 ;
// }

// print infinite times



// # include <stdio.h>
// int main( )
// {
//     int i ;
//     while ( i = 10 )    // it is assignment operator, not a comparison
//     {
//         printf ( "%d\n", i ) ;
//         i=i+1;
//     }
//     return 0 ;
// }
// print 10 infinite times



// # include <stdio.h>
// int main( )
// {
//     float x = 1.1 ;
//     while ( x == 1.1 )
//     {
//         printf ( "%f\n", x ) ;
//         x = x - 0.1 ;
//     }
//     return 0 ;
// }
// prints nothing due to precision issue



// # include <stdio.h>
// int main( )
// {
//     int x = 10 ;
//     while ( x == 11 )    // this condition is false, so loop will not start
//     {
//         printf ( "%d\n", x ) ;
//         x-- ;
//     }
//     return 0 ;
// }
// nothing prints



// # include <stdio.h>
// int main( )
// {
//     int x = 11 ;
//     while ( x == 11 )    // here condition is true so it enters in the loop
//     {
//         printf ( "%d\n", x ) ;
//         x-- ;
//     }
//     return 0 ;
// }
// o/p - 11


// [B] 
// Attempt the following questions:


// a)
// Write a program to print all the ASCII values and their equivalent
// characters using a while loop. The ASCII values vary from 0 to 255.

// #include<stdio.h>

// int main(){
//     int i = 0;
//     while(i < 255){
//         printf("%d = %c\n", i,i);
//         i++;
//     }
//     return 0;
// }



// C program to check given number is
// Armstrong number or not using Sum 
// of Digits

// #include<stdio.h>

// int main(){
//     int n = 153;
//     int temp = n;
//     int ans = 0;
//     while(n > 0){
//         int rem = n%10;
//         ans = ans + (rem*rem*rem);
//         n /= 10;
//     }
//     if(temp == ans){
//         printf("It is a Armstrong number\n");
//     }
//     else{
//         printf("It is not a Armstrong number\n");
//     }

//     return 0;
// }




// b)
// Write a program to print out all Armstrong numbers between 1 and
// 500. If sum of cubes of each digit of the number is equal to the
// number itself, then the number is called an Armstrong number. For
// example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).

#include<stdio.h>

int main(){
    int num, sum, count = 1, r;
    while(count <= 500){
        num = count;
        sum = 0;
        while(num){
            r = num%10;
            sum = sum + (r*r*r);
            num /= 10;
        }
        if(count == sum){
            printf("%d is an Armstrong Number.\n", count);
        }
        count++;
    }
    return 0;
}




