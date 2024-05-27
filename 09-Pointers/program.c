// q - 15

// # include <stdio.h>
// int main( )
// {
//     int i = 3 ;
//     int *j ;
//     j = &i ;
//     printf("Address of i: %u\n", &i);
//     printf("Address of i: %u\n", j);
//     printf("Address of j: %u\n", &j);
//     printf("Value of j: %u\n", j);
//     printf("Value of i: %d\n", i);
//     printf("Value of i: %d\n", *(&i));
//     printf("Value of i: %d\n", *j);

//     return 0;
// }



// # include <stdio.h>
// int main( )
// {
//     int i = 3, *j, **k ;
//     j = &i ;
//     k = &j ;

//     printf("Address of i: %u\n", &i);
//     printf("Address of i: %u\n", j);
//     printf("Address of i: %u\n", *k);
//     printf("Address of j: %u\n", &j);
//     printf("Address of j: %u\n", k);
//     printf("Address of k: %u\n", &k);
//     printf("Value of j: %u\n", &i);
//     printf("Value of k: %u\n", &j);
//     printf("Value of i: %u\n", i);
//     printf("Value of i: %u\n", *j);
//     printf("Value of i: %u\n", **k);
//     printf("Value of i: %u\n", *(&i));

//     return 0;
// }


// Pass by Value

// #include<stdio.h>

// void swapFn(int x, int y){
//     int m = x;
//     x = y;
//     y = m;
//     printf("a: %d, b: %d\n", x, y);
// }

// int main(){
//     int a = 2, b = 3;
//     swapFn(a,b);
//     printf("a: %d, b: %d\n", a,b);
//     return 0;
// }


// Pass by Reference

// #include<stdio.h>

// void swapFn(int *x, int *y){
//     int m = *x;
//     *x = *y;
//     *y = m;
// }

// int main(){
//     int a = 2, b = 3;
//     swapFn(&a, &b);
//     printf("a: %d, b: %d\n", a, b);
//     return 0;
// }



// Utility of Call by Reference

// #include<stdio.h>

// void areaPeri(int, float*, float*);

// int main(){
//     int r;
//     float area, perimeter;
//     printf("Enter the radius of circle: ");
//     scanf("%d", &r);
//     areaPeri(r, &area, &perimeter);
//     printf("Area: %f\n", area);
//     printf("Perimeter: %f\n", perimeter);
//     return 0;
// }

// void areaPeri(int r, float *a, float *p){
//     *a = 3.14 * r * r;
//     *p = 2 * 3.14 * r;
// }


// 9.1
// Write a function that receives 5 integers and returns the sum, average
// and standard deviation of these numbers. Call this function from main( )
// and print the results in main( ).

// #include<stdio.h>
// #include<math.h>

// void solve(int*, int*, double*);

// int main(){
//     int sum, avg;
//     double sd;

//     solve(&sum, &avg, &sd);

//     printf("Sum: %d\nAverage: %d\nStandard Deviation: %lf\n", sum, avg, sd);

//     return 0;
// }

// void solve(int *sum, int *avg, double *sd){
//     int n1, n2, n3, n4, n5;
//     printf("Enter 5 numbers: ");
//     scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
//     *sum = n1+n2+n3+n4+n5;
//     *avg = *sum/5;
//     *sd = sqrt((pow((n1-*avg), 2.0))  + (pow((n2-*avg), 2.0)) + (pow((n3-*avg), 2.0)) + (pow((n4-*avg), 2.0)) + (pow((n5-*avg), 2.0))/4);
// }




// 9.2
// Write a program that defines a function that calculates power of one
// number raised to another and factorial value of a number in one call.

// #include<stdio.h>

// void solve(float*, int*);

// int main(){
//     float power;
//     int fact;

//     solve(&power, &fact);
//     printf("Power: %f\nFactorial: %d\n", power, fact);
//     return 0;
// }

// void solve(float *power, int *fact){
//     float a;
//     int b, num, i;
//     printf("Enter a and b for calculating a raised to b: ");
//     scanf("%f %d", &a, &b);
//     printf("Enter a number for calculating factorial: ");
//     scanf("%d", &num);
//     printf("Author: Piyush Kumar\n");
//     printf("20BCS9107\n");

//     // calculating power
//     int res = 1;
//     for(i = 1; i <= b; i++){
//         res = res*a;
//     }
//     *power = res;

//     // calculating factorial
//     res = 1;
//     for(i = 2; i <= num; i++){
//         res = res*i;
//     }
//     *fact = res;
// }




// 9.3
// Figure 9.4 shows three memory locations and values stored in them.
// Write a program to declare variables that implement the relationship
// shown. How will you print the values and addresses shown in the figure?
// On which machine the program should be executed to get such
// addresses?

// #include<stdio.h>

// int main(){
//     float x = 3.14;
//     float *y;
//     float **z;

//     y = &x;
//     z = &y;

//     printf("Address of x: %p\n", &x);
//     printf("Address of x: %p\n", y);
//     printf("Address of x: %p\n", *z);
//     printf("Address of y: %p\n", &y);
//     printf("Address of y: %p\n", z);
//     printf("Address of z: %p\n", &z);

//     printf("Value of x: %f\n", x);
//     printf("Value of x: %f\n", *y);
//     printf("Value of x: %f\n", **z);
//     printf("Value of y: %p\n", y);
//     printf("Value of y: %p\n", *z);
//     printf("Value of z: %p\n", z);


//     return 0;
// }



// [A] What will be the output of the following programs?

// a)
// # include <stdio.h>
// void fun ( int, int ) ;
// int main( )
// {
//     int i = 5, j = 2 ;
//     fun ( i, j ) ;
//     printf ( "%d %d\n", i, j ) ;
//     return 0 ;
// }

// void fun ( int i, int j )
// {
//     i=i*i;
//     j=j*j;
// }

// o/p - 5 2



// b)
// # include <stdio.h>
// void fun ( int *, int * ) ;
// int main( )
// {
//     int i = 5, j = 2 ;
//     fun ( &i, &j ) ;
//     printf ( "%d %d\n", i, j ) ;
//     return 0 ;
// }
// void fun ( int *i, int *j )
// {
//     *i = *i * *i ;
//     *j = *j * *j ;
// }

// o/p - 25 4



// c)
// # include <stdio.h>
// int main( )
// {
//     float a = 13.5 ;
//     float *b, *c ;
//     b = &a ; /* suppose address of a is 1006 */
//     c=b;
//     printf ( "%u %u %u\n", &a, b, c ) ;
//     printf ( "%f %f %f %f %f\n", a, *(&a), *&a, *b, *c ) ;
//     return 0 ;
// }

// o/p - addr addr addr
// 13.5 13.5 13.5 13.5 13.5



// [B] Point out the errors, if any, in the following programs:

// a)
// # include <stdio.h>
// int main( )
// {
//     float p = 23.24 ;
//     float *q, **r ;
//     q = &p ;
//     r = &q ;
//     printf ( "%f %f\n", *q, **r ) ;
//     return 0 ;
// }



// b)
// # include <stdio.h>
// int main( )
// {
//     char ch = 'A' ;
//     int k = 35 ;
//     float a = 3.14 ;
//     printf ( "%p %p %p\n", &ch, &k, &a ) ;
//     return 0 ;
// }


// c)
// # include <stdio.h>
// int function ( int * ) ;
// int main( )
// {
//     int i = 35, z ;
//     z = function ( &i ) ;
//     printf ( "%d\n", z ) ;
//     return 0 ;
// }
// int function ( int *m )
// {
//     return ( *m + 2 ) ;
// }




// [C] Attempt the following questions:

// a)
// Given three variables x, y, z, write a function to circularly shift their
// values to right. In other words, if x = 5, y = 8, z = 10, after circular
// shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
// circularly shift values.

// #include<stdio.h>

// void chnge(int *, int *, int *);

// int main(){
//     int a, b, c;
//     printf("Enter the value of a, b and c: ");
//     scanf("%d %d %d", &a, &b, &c);
//     printf("\n\nBefore Shifting\na: %d  b: %d  c: %d\n", a, b, c);

//     chnge(&a, &b, &c);
//     printf("\n\nAfter Shifting\na: %d  b: %d  c: %d\n", a, b, c);

//     return 0;
// }

// void chnge(int *a, int *b, int *c){
//     int x;
//     x = *c;
//     *c = *b;
//     *b = *a;
//     *a = x;
// }



// b)
// Define a function that receives weight of a commodity in Kilograms
// and returns the equivalent weight in Grams, Tons and Pounds. Call
// this function from main( ) and print the results in main( ).

// #include<stdio.h>

// void solve(float *, float *, float *, float *);

// int main(){
//     float kg, grams, tons, pounds;
//     printf("Enter the weight in kilograms: ");
//     scanf("%f", &kg);
//     solve(&kg, &grams, &tons, &pounds);
//     printf("Weight in Kg: %f\n", kg);
//     printf("Weight in grams: %f\n", grams);
//     printf("Weight in tons: %f\n", tons);
//     printf("Weight in pounds: %f\n", pounds);
//     return 0;
// }

// void solve(float *kg, float *g, float *tn, float *pnd){
//     *g = *kg * 1000;
//     *tn = *kg / 1000;
//     *pnd = *kg * 2.2;

// }




// c)
// Define a function to compute the distance between two points and
// use it to develop another function that will compute the area of the
// triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
// these functions to develop a function which returns a value 1 if the
// point (x, y) lines inside the triangle ABC, otherwise returns a value
// 0. Would you get any advantage if you develop these functions to
// work on call be reference principle?

#include<stdio.h>
// #include<conio.h>
#include<math.h>

float area(int, int, int, int, int, int);
float dist(int, int, int, int);


int main(){
    int x1, x2, x3, y1, y2, y3, x, y;
    float A1, A2, A3, A;
    printf("Enter the cordinates of first point of the triangle: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the cordinates of second point of the triangle: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the cordinates of third point of the triangle: ");
    scanf("%d %d", &x3, &y3);
    printf("Enter the coordinate to check its position: ");
    scanf("%d %d", &x, &y);

    A1 = area(x1, y1, x2, y2, x, y);
    printf("A1: %f\n", A1);

    A2 = area(x1, y1, x3, y3, x, y);
    printf("A2: %f\n", A2);

    A3 = area(x2, y2, x3, y3, x, y);
    printf("A3: %f\n", A3);

    A = area(x1, y1, x2, y2, x3, y3);
    printf("A: %f\n", A);

	if (!(A1 + A2 + A3>A || A1 + A2 + A3<A))
		printf("\n\nThe point (%d,%d) lies inside of triangle.", x, y);
	else
		printf("\n\nThe point (%d,%d) lies outside of triangle.", x, y);
	getch();

    getch();

    return 0;
}

float dist(int x1, int y1, int x2, int y2){
    float d;
    d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    return d;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3){
    float a, b, c, S, ar;
    a = dist(x1, y1, x2, y2);
    b = dist(x1, y1, x3, y3);
    c = dist(x2, y2, x3, y3);
    S = (a+b+c)/2;
    ar = sqrt(S * (S-a) * (S-b) * (S-c));
    return ar;
}