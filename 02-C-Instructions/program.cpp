// q - 16
// #include<stdio.h>

// int main(){
//     // char x = 'a', y = 'b' ;
//     // int z = x + y ;
//     // int i=2*3/4+4/4+8-2+5/8;
//     int i=3/2*4+3/8;
//     printf("%d", i);
// }



// If lengths of three sides of a triangle are input through the keyboard,
// write a program to find the area of the triangle.

// #include<stdio.h>
// #include<math.h>

// int main(){
//     float a, b, c, s, area;
//     printf("Enter the length of three sides of triangle: ");
//     scanf("%f %f %f", &a, &b, &c);
//     s = (a+b+c)/2;
//     area = sqrt(s * (s-a) * (s-b) * (s-c));
//     printf("Area of triangle: %f", area);
// }




// If a five-digit number is input through the keyboard, write a program to
// reverse the number.

// #include<stdio.h>

// int main(){
//     int number, reversedno = 0;

//     printf("Enter a five digit number: ");
//     scanf("%d", &number);

//     if(number > 99999 || number < 10000){
//         printf("Error: Enter a five-digit number.\n");
//         return 1;
//     }

//     while(number != 0){
//         int digit = number % 10;
//         reversedno = reversedno * 10 + digit;
//         number /= 10;
//     }

//     printf("Reversed number is %d\n", reversedno);

//     return 0;
// }




// Consider a currency system in which there are notes of six
// denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a
// sum of Rs. N is entered through the keyboard, write a program to
// compute the smallest number of notes that will combine to give Rs. N.


// #include<stdio.h>

// int main(){
//     int n, notes = 0;
//     printf("Enter amount: ");
//     scanf("%d", &n);

//     notes += n/100;
//     n %= 100;

//     notes += n/50;
//     n %= 50;

//     notes += n/10;
//     n %= 10;

//     notes += n/5;
//     n %= 5;

//     notes += n/2;
//     n %= 2;

//     notes += n/1;
//     n %= 1;

//     printf("Number of notes: %d\n", notes);

// }




// # include <stdio.h>
// int main( )
// {
//     int i = 2, j = 3, k, l ;
//     float a, b ;
//     k=i/j*j;
//     l=j/i*i;
//     a=i/j*j;
//     b=j/i*i;
//     printf ( "%d %d %f %f\n", k, l, a, b ) ;
//     return 0 ;
// }


// # include <stdio.h>
// int main( )
// {
//     int a, b, c, d ;
//     a = 2 % 5;
//     b = -2 % 5 ;
//     c = 2 % -5 ;
//     d = -2 % -5 ;
//     printf ( "a = %d b = %d c = %d d = %d\n", a, b, c, d ) ;
//     return 0 ;
// }




// # include <stdio.h>
// int main( )
// {
//     float a = 5, b = 2 ;
//     int c, d ;
//     //c=a%b;
//     d=a/2;
//     printf ( "%d\n", d ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     printf ( "nn \n\n nn\n" ) ;
//     printf ( "nn /n/n nn/n" ) ;
//     return 0 ;
// }




// # include <stdio.h>
// int main( )
// {
//     int a, b;
//     printf ( "Enter values of a and b: " ) ;
//     scanf ("%d %d", &a, &b ) ;
//     printf ("a = %d b = %d\n", a, b) ;
//     return 0 ;
// }



// [E] State whether the following statements are True or False:
// (a) * or /, + or - represents the correct hierarchy of arithmetic operators in C. - F
// (b) [ ] and { } can be used in Arithmetic instructions. - F
// (c) Hierarchy decides which operator is used first. - T
// (d) In C, Arithmetic instruction cannot contain constants on left side of =. - T
// (e) In C ** operator is used for exponentiation operation. - F
// (f) % operator cannot be used with floats. - F

// [F] Fill in the blanks:
// (a) In y = 10 * x / 2 + z ;____ operation will be performed first.
// (b) If a is an integer variable, a = 11 / 2 would store ____ in a.
// (c) The expression, a = 22 / 7 * 5 / 3 would evaluate to ____ .
// (d) The expression x = -7 % 2 - 8 would evaluate to ____ .




// If a five-digit number is input through the keyboard, write a program to calculate 
// the sum of its digits. (Hint: Use the modulus operator %)


// #include<stdio.h>

// int main(){
//     int n, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     while(n != 0){
//         sum += n%10;
//         n = n/10;
//     }

//     printf("Sum of digits: %d\n", sum);

//     return 0;
// }




// #include<stdio.h>
// #include<math.h>

// int main(){
//     float x, y;
//     printf("Enter x and y coordinates: ");
//     scanf("%f %f", &x, &y);

//     printf("Polar coordinates are (%f, %f)\n", sqrt(pow(x, 2.0) + pow(y, 2.0)), atan(y/x));

//     return 0;
// }



// #include<stdio.h>
// #include<math.h>

// int main(){
//     float l1, l2, g1, g2, d;
//     printf("Enter the latitude and longitude: ");
//     scanf("%f %f %f %f", &l1, &l2, &l1, &l2);

//     d = 3967 * acos( sin(l1)*sin(l2) + cos(l1)*cos(l2) * (cos(g2-g1)));
//     printf("%f", d);

//     return 0;
// }



// #include<stdio.h>
// #include<math.h>

// int main(){
//     float t, v, wcf;
//     printf("Enter t and v: ");
//     scanf("%f %f", &t, &v);

//     wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75) * (pow(v, 0.16));
//     printf("wcf: %f", wcf);

//     return 0;
// }




#include<stdio.h>
int main()
{
    int c, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &c, &d);
    printf("Before Interchange C = %d and D = %d\n", c, d);
    c = c+d;
    d = c-d;
    c = c-d;
    printf("After Interchange C = %d and D = %d\n", c, d);
    return 0;
}