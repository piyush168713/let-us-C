// q - 15

// Macro expansion


// #include<stdio.h>
// # define PI 3.1428

// int main(){
//     float r = 2.5, area;
//     area = PI * r * r;
//     printf ( "Area of circle = %f\n", area ) ;
//     return 0;
// }

// PI is called ‘macro template’
// 3.1428 is called ‘macro expansion’



// #include<stdio.h>
// #define AREA(x) (3.14 * x * x)

// int main(){
//     float r1 = 6.25, r2 = 2.5, a;
//     a = AREA(r1);
//     printf("Area of circle = %f\n", a);
//     a = AREA(r2);
//     printf("Area of circle = %f\n", a);

//     return 0;
// }


// #include<stdio.h>
// # define SQUARE(x) (x*x)

// int main(){
//     int m;
//     m = 64 / SQUARE(4);
//     printf("m: %d\n", m);
//     return 0;
// }




// Conditional Compilation


// #include<stdio.h>
// #define PI 3.14
// #define AREA

// int main(){
//     float r;
//     printf("Enter radius: ");
//     scanf("%f", &r);
    
    
//     /* Area of Circle */
//     #ifdef AREA
//         printf("Area of circle: %f\n", (PI * r * r));   // it works when (#define AREA) is written as header file
//     #endif
//     printf("Circumference of circle: %f\n", (2 * PI * r));

//     return 0;
// }



// #include<stdio.h>
// #define PI 3.14
// #define AREA

// int main(){
//     float r;
//     printf("Enter radius: ");
//     scanf("%f", &r);
    
    
//     /* Area of Circle */
//     #ifdef AREA
//         printf("Area of circle: %f\n", (PI * r * r));   // it works when (#define AREA) is written as header file
//     #else
//         printf("Circumference of circle: %f\n", (2 * PI * r));    // it works when (#define AREA) is not written as header file
//     #endif
//     // works as if-else statement


//     return 0;
// }




// Used to design software based on different operating system
// #include<stdio.h>
// #define iOS

// int main(){    
    
//     #ifdef iOS
//         printf("This is an iOS code\n");   // This line is compiled and executed when iOS is defined
//     #else
//         printf("This is an Android code\n");    // This line is compiled and executed when iOS is not defined
//     #endif
//     // works as if-else statement


//     return 0;
// }

// ifdef - code will run if defined
// ifndef - code will run if not defined



// #include<stdio.h>
// #define iOS

// int main(){    
    
//     #ifndef iOS
//         printf("This is an iOS code\n");   // This line is compiled and executed when iOS is not defined
//     #else
//         printf("This is an Android code\n");    // This line is compiled and executed when iOS is defined
//     #endif
//     // works as if-else statement

//     return 0;
// }



// use of #if, #elif, #else, #endif

// #include<stdio.h>
// #define A 30
// #define B 10

// int main(){
//     int ans;

//     #if (A > B)
//         ans = A+B;
//         printf("Sum: %d\n", ans);
//     #elif (A == B)
//         ans = A-B;
//         printf("Diff: %d\n", ans);
//     #else
//         ans = A*B;
//         printf("Mul: %d\n", ans);
//     #endif
    
//     return 0;
// }





// Miscellaneous Directives
    // 1. #pragma
    // 2. #undef


// 1. #pragma
    // 1.1 #pragma startup - execute fn. before entering main()
    // 1.2 #pragma exit - execute fn. after exiting main()
    // 1.3 #pragma warn

// example of 1.1 AND 1.2
// GCC does not support #pragma startup or exit.

// #include<stdio.h>

// void fun1();
// void fun2();

// #pragma startup fun1
// #pragma exit fun2

// int main(){
//     printf("Inside main()\n");
//     return 0;
// }

// void fun1(){
//     printf("Inside fun1()\n");
// }

// void fun2(){
//     printf("Inside fun2()\n");
// }


// GCC does not support #pragma startup or exit.   see - https://gcc.gnu.org/onlinedocs/gcc/Function-Attributes.html#Function-Attributes
// In gcc and clang, you should use __attribute__((constructor)) and __attribute__((destructor)) instead.

// #include<stdio.h>

// void fun1();
// void fun2();

// // #pragma startup fun1
// // #pragma exit fun2

// void __attribute__((constructor)) fun1();
// void __attribute__((destructor)) fun2();

// int main(){
//     printf("Inside main()\n");
//     return 0;
// }

// void fun1(){
//     printf("Inside fun1()\n");
// }

// void fun2(){
//     printf("Inside fun2()\n");
// }




// 1.3 - Pragma warn
    // - pragma warn -rvl   /* return value */    /* we use -ve sign, so it hides the warning */
    // - pragma warn -par   /* parameter never used */  /* if we use +ve sign , then it shows the warning */
    // - pragma warn -rch   /* unreachable code */


// #pragma warn +xxx (To show the warning) 
// #pragma warn -xxx (To hide the warning) 
// #pragma warn .xxx (To toggle between hide and show)

// # include <stdio.h>

// # pragma warn –rvl /* return value */
// # pragma warn –par /* parameter not used */
// # pragma warn –rch /* unreachable code */

// int f1(){
//     int a = 5 ;
// }

// void f2(int x){
//     printf("Inside f2\n");
// }

// int f3(){
//     int x = 6 ;
//     return x ;
//     x++;
// }

// int main(){
//     f1();
//     f2(7);
//     f3();
//     return 0 ;
// }

// #pragma message isn't supported in GCC 
// see - https://gcc.gnu.org/onlinedocs/gcc-4.2.1/gcc/Diagnostic-Pragmas.html#Diagnostic-Pragmas



// 2. #undef
// it may be desirable to cause a defined name to become ‘undefined’.
// This would cause the definition of PENTIUM to be removed. All
// subsequent #ifdef PENTIUM statements would evaluate to false.

// #include<stdio.h>
// #define num 10
// int s1 = num*num;

// #undef num

// #define num 15
// int s2 = num*num;

// int main(){
//     printf("s1: %d\n", s1);
//     printf("s2: %d\n", s2);
//     return 0;
// }









// 12.1)
// Write macro definitions for the following:
//     1. To test whether a character is a lowercase letter or not.
//     2. To test whether a character is an uppercase letter or not.
//     3. To test whether a character is an alphabet or not. Make use of the
//     macros you defined in 1 and 2 above.
//     4. To obtain the bigger of two numbers.


// #include<stdio.h>
// #define ISLOWER(x) (x >= 97 && x <= 122 ? 1 : 0)
// #define ISUPPER(x) (x >= 65 && x <= 90 ? 1 : 0)
// #define ISALPHABET(x) (ISUPPER(x) || ISLOWER(x))
// #define BIG(x, y) (x > y ? x : y)

// int main(){
//     char c;
//     int a, b, d;

//     printf("Enter a character: ");
//     scanf("%c", &c);
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     if(ISLOWER(c) == 1){
//         printf("You entered a small letter\n");
//     }

//     if(ISUPPER(c) == 1){
//         printf("You entered a capital letter\n");
//     }

//     if(ISALPHABET(c) == 1){
//         printf("You entered character other than an alphabet\n");
//     }

//     d = BIG(a,b);
//     printf("Bigger number is: %d\n", d);

//     return 0;
// }





// 12.2) - File inclusion

// Write macro definitions with arguments for calculation of area and
// perimeter of a triangle, a square and a circle. Store these macro
// definitions in a file “areaperi.h”. Include this file in your program, and
// use the macro definitions for calculating area and perimeter for
// different squares, triangles and circles.


// #include<stdio.h>
// #include "areaperi.h"

// int main(){
//     float base, height, s1, s2, s3, x, r;
//     float a_tri, p_tri, a_sq, p_sq, a_cir, p_cir;

//     printf("Enter the radius of circle: ");
//     scanf("%f", &r);

//     a_cir = AREAC(r);
//     p_cir = PERIC(r);

//     printf("Enter the side of square: ");
//     scanf("%f", &x);

//     a_sq = AREAS(x);
//     p_sq = PERIS(x);

//     printf("Enter base and height of triangle: ");
//     scanf("%f %f", &base, &height);

//     a_tri = AREAT(base, height);

//     printf("Enter the length of 3 sides of triangle: ");
//     scanf("%f %f %f", &s1, &s2, &s3);
//     printf("Piyush Kumar \n20BCS9107")

//     p_tri = PERIT(s1, s2, s3);

//     printf("\n\nArea of circle = %f\n", a_cir);
//     printf("Perimeter of circle = %f\n", p_cir);

//     printf("Area of square = %f\n", a_sq);
//     printf("Perimeter of square = %f\n", p_sq);

//     printf("Area of triangle = %f\n", a_tri);
//     printf("Perimeter of triangle = %f\n", p_tri);


//     return 0;
// }




// [A] Answer the following questions:


// a) 
// A preprocessor directive is:
//     1. A message from compiler to the programmer
//     2. A message from compiler to the linker
//     3. A message from programmer to the preprocessor - t
//     4. A message from programmer to the microprocessor


// (b) Which of the following are correctly formed #define statements?
//     #define INCH PER FEET 12
//     #define SQR (X) ( X * X )
//     #define SQR(X) X * X
//     #define SQR(X) ( X * X ) - t


// (c) State True or False:
    // 1. A macro must always be written in capital letters. - f
    // 2. A macro must always be accommodated in a single line. - f
    // 3. After preprocessing when the program is sent for compilation 
    // the macros are removed from the expanded source code. - t
    // 4. Macros with arguments are not allowed. f
    // 5. In a macro call the control is passed to the macro. - f


// (d) A header file is:
//     A file that contains standard library functions
//     A file that contains function declarations and macros - t
//     A file that contains user-defined functions
//     A file that is present in current working directory

// (e) All macro substitutions in a program are done:
//     Before compilation of the program - t
//     After compilation of the program
//     During execution of the program
//     During linking of the program



// # include <stdio.h>
// int main( )
// {
//     int i = 2 ;
//     # ifdef DEF
//     i *= i ;
//     # else
//     printf ( "%d\n", i ) ;
//     # endif
//     return 0 ;
// }

// o/p - 2


// # include <stdio.h>
// # define PRODUCT(x) ( x * x )
// int main( )
// {
//     int i = 3, j, k, l;
//     j = PRODUCT( i + 1 ) ;
//     k = PRODUCT(i++);
//     l = PRODUCT ( ++i);
//     printf("%d %d %d %d\n", i, j, k, l);
//     return 0 ;
// }

// o/p - 



// # include <stdio.h>
// # define PI 3.14
// # define AREA( x, y, z ) ( PI * x * x + y * z ) 
// int main( )
// {
//     float a = AREA ( 1, 5, 8 ) ;
//     float b = AREA ( AREA ( 1, 5, 8 ), 4, 5 ) ;
//     printf ( " a = %f\n", a ) ;
//     printf ( " b = %f\n", b ) ;
//     return 0 ;
// }

// o/p - 43.1415  5863.727051




// [C] Attempt the following questions:

// a)
// If a macro is not getting expanded as per your expectation, how will
// you find out how is it being expanded by the preprocessor?

// ans:
// Before compilation, our source code is expanded and stored in
// the file FILENAME.I, so we can open this file and check how our program
// is getting expand.

// command to generate FILENAME.I
// C:\>cpp PR1.C              - in Turbo C/C++
// $ gcc -E -o PR1.I PR1.C    - in gcc




// b)
// Write macro definitions for the following:
//     To find arithmetic mean of two numbers.
//     To find absolute value of a number.
//     To convert an uppercase alphabet to lowercase.
//     To obtain the biggest of three numbers.


// #include<stdio.h>

// #define MEAN(a,b) ((a+b)/2.0)
// #define ABSVAL(a) (a < 0 ? (-1*a) : a)
// #define UPTOLOWER(a) (a+32)
// #define BIGGEST(a, b, c) ((a>b) ? (a > c ? a : c) : (b > c ? b : c))

// int main(){
//     float a, b, mean;
//     int c, absVal;
//     char ch, lowerChar;
//     int x, y, z, max;

//     printf("Enter two number to find arithmetic mean: ");
//     scanf("%f %f", &a, &b);
//     mean = MEAN(a,b);

//     printf("Enter a integer value: ");
//     scanf("%d", &c);
//     absVal = ABSVAL(c);

//     printf("Enter three number: ");
//     scanf("%d %d %d", &x, &y, &z);
//     max = BIGGEST(x,y,z);

//     printf("Enter a upper case character: ");
//     scanf("%c", &ch);
//     lowerChar = UPTOLOWER(ch);

//     printf("Arithmetic mean of %f and %f: %f\n", a, b, mean);
//     printf("Absolute value of %d: %d\n", c, absVal);
//     printf("Maximum number among %d, %d, %d: %d\n", x, y, z, max);
//     printf("Lowercase: %c\n", lowerChar);

//     return 0;
// }




// c)
// Write macro definitions with arguments for calculation of Simple
// Interest and Amount. Store these macro definitions in a file
// “interest.h”. Include this file in your program, and use the macro
// definitions for calculating Simple Interest and Amount.

#include<stdio.h>
#include "interest.h"

int main(){
    float p, t, r, si, amount;
    printf("Enter the principal, time in year and rate of interest: ");
    scanf("%f %f %f", &p, &t, &r);
    si = SI(p, t, r);
    amount = AMOUNT(si, p);
    printf("\nSimple Interest : %f\nAmount : %f\n", si, amount);
    return 0;
}