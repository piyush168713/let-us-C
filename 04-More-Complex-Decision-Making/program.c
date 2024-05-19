// The marks obtained by a student in 5 different subjects are
// input through the keyboard. The student gets a division as per the
// following rules:
// Percentage above or equal to 60 - First division
// Percentage between 50 and 59 - Second division
// Percentage between 40 and 49 - Third division
// Percentage less than 40 - Fail
// Write a program to calculate the division obtained by the student.


// pseudocode
// if(per >= 60){
//     printf("First division\n");
// }
// else if(per >= 50){
//     printf("Second division\n");
// }
// else if(per >= 40){
//     printf("Third division\n");
// }
// else{
//     printf("Fail\n");
// }




// #include<stdio.h>

// int main(){
//     float m1, m2, m3, m4, m5, total;
//     float per;
//     printf("Enter marks in five subject: ");
//     scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
//     total = m1 + m2 + m3 + m4 + m5;
//     per = total * 100 / 500;
//     printf("Total marks: %f\n", total);
//     printf("Total percentage: %f\n", per);
//     if(per >= 60)
//         printf("First division\n");
//     if(per >= 50 && per <= 59)
//         printf("Second division\n");
//     if(per >= 40 && per <= 49)
//         printf("Third division\n");
//     if(per < 40)
//         printf("Fail\n");    
//     return 0;
// }


// author - Piyush Kumar



// A company insures its drivers in the following cases:
// - If the driver is married.
// - If the driver is unmarried, male & above 30 years of age.
// - If the driver is unmarried, female & above 25 years of age.
// In all other cases, the driver is not insured. If the marital status, sex and
// age of the driver are the inputs, write a program to determine whether
// the driver should be insured or not.


// #include<stdio.h>

// int main(){
//     char mstatus, sex;
//     int age;
//     printf("Enter the marital status, sex and age: ");
//     scanf("%c %c %d", &mstatus, &sex, &age);
//     if((mstatus == 'M') || (mstatus == 'U' && sex == 'M' && age > 30) || (mstatus == 'U' && sex == 'F' && age > 25)){
//         printf("Driver should be insured\n");
//     }
//     else{
//         printf("Driver should not be insured\n");
//     }
//     return 0;
// }




// Write a program to calculate the salary as per the
// following table:
// Gender    Years of Service    Qualifications    Salary
// Male       >= 10             Post-Graduate       11000
//            >= 10             Graduate            10000
//            < 10              Post-Graduate       10000
//            < 10              Graduate            7000
// Female     >= 10             Post-Graduate       12000
//            >= 10             Graduate            9000
//            < 10              Post-Graduate       10000
//            < 10              Graduate            6000


// #include<stdio.h>

// int main(){
//     char gender;
//     int yos, qual, sal = 0;
//     printf("Enter gender, Years of service and Qualification(0 = G & 1 = PG): ");
//     scanf("%c %d %d", &gender, &yos, &qual);
    
//     if(gender == 'M' && yos >= 10 && qual == 1){
//         sal = 11000;
//     }
//     else if((gender == 'M' && yos >= 10 && qual == 0) || (gender == 'M' && yos < 10 && qual == 1)){
//         sal = 10000;
//     }
//     else if(gender == 'M' && yos < 10 && qual == 0){
//         sal = 7000;
//     }
//     else if(gender == 'F' && yos >= 10 && qual == 1){
//         sal = 12000;
//     }
//     else if(gender == 'F' && yos >= 10 && qual == 0){
//         sal = 9000;
//     }
//     else if(gender == 'F' && yos < 10 && qual == 1){
//         sal = 10000;
//     }
//     else if(gender == 'F' && yos < 10 && qual == 0){
//         sal = 6000;
//     }
//     printf("Salary: %d\n", sal);

//     return 0;
// }




// #include<stdio.h>

// int main(){
//     char a ;
//     int y ;
//     scanf ( "%c", &a ) ;
//     y = ( a >= 65 && a <= 90 ? 1 : 0 ) ;
//     printf("y: %d\n", y);
//     return 0;
// }




// #include<stdio.h>

// int main(){
//     char a = 'z' ;
//     printf ( "%c\n", ( a >= 'a' ? a : '!' ) ) ;
//     return 0;
// }



// 4.1
// A year is entered through the keyboard, write a program to determine
// whether the year is leap or not. Use the logical operators && and ||.


// #include<stdio.h>

// int main(){
//     int year;
//     printf("Enter year: ");
//     scanf("%d", &year);
//     if(year%4 == 0 && (year%100 != 0 || year%400 == 0)){
//         printf("Leap year\n");
//     }
//     else{
//         printf("Non Leap year\n");
//     }
//     return 0;
// }




// 4.2
// If a character is entered through the keyboard, write a program to
// determine whether the character is a capital letter, a small case letter, a
// digit or a special symbol.
// The following table shows the range of ASCII values for various
// characters:
// Characters    ASCII Values
// A–Z           65 – 90
// a–z           97 – 122
// 0–9           48 – 57
// special symbols    0 - 47, 58 - 64, 91 - 96, 123 - 127

// #include<stdio.h>

// int main(){
//     char c;

//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if(c >= 65 && c <= 90){
//         printf("The character is an uppercase letter.\n");
//     }
//     else if( c >= 97 && c <= 122){
//         printf("The character is a lowercase letter.\n");
//     }
//     else if(c >= 48 && c <= 57){
//         printf("The character is a digit.\n");
//     }
//     else if((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 127)){
//         printf("The character is a special symbol.\n");
//     }

//     return 0;
// }




// 4.3
// If the lengths of three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is valid or not.
// The triangle is valid if the sum of two sides is greater than the largest of
// the three sides.

// #include<stdio.h>

// int main(){
//     int a, b, c, sum, maxSide;
//     printf("Enter the length of 3 sides of a triangle: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if(a > b){
//         if(a > c){
//             sum = b+c;
//             maxSide = a;
//         }
//         else{
//             sum = a+b;
//             maxSide = c;
//         }
//     }
//     else{
//         if(b > c){
//             sum = a+c;
//             maxSide = b;
//         }
//         else{
//             sum = a+b;
//             maxSide = c;
//         }
//     }
//     if(sum > maxSide){
//         printf("It is a valid Triangle.\n");
//     }
//     else{
//         printf("It is not a valid Triangle.\n");
//     }
//     return 0;
// }




// Exercises

// [A]
// If a = 10, b = 12, c = 0, find the values of the expressions in the
// following table:

// Expression               Value
// a != 6 && b > 5          1
// a == 9 || b < 3          0
// ! ( a < 10 )             1
// ! ( a > 5 && c )         1
// 5 && c != 8 || !c        1



// [B]
//  What will be the output of the following programs?

// a)
// # include <stdio.h>
// int main( )
// {
// int i = 4, z = 12 ;
// if ( i = 5 || z > 50 )      // comparison operator is not present
// printf ( "Dean of students affairs\n" ) ;
// else
// printf ( "Dosa\n" ) ;
// return 0 ;
// }

// o/p - Dean of students affairs


// b)
// #include <stdio.h>
// int main( )
// {
//     int i = 4, j = -1, k = 0, w, x, y, z ;
//     w = i || j || k ;
//     x = i && j && k ;
//     y = i || j && k ;
//     z = i && j || k ;
//     printf ( "w = %d x = %d y = %d z = %d\n", w, x, y, z ) ;
//     return 0 ;
// }

// o/p - 1 0 1 1




// c)
// # include <stdio.h>
// int main( )
// {
//     int x = 20, y = 40, z = 45 ;
//     if ( x > y && x > z )
//         printf ( "biggest = %d\n", x ) ;
//     else if ( y > x && y > z )
//         printf ( "biggest = %d\n", y ) ;
//     else if ( z > x && z > y )
//         printf ( "biggest = %d\n", z ) ;
//     return 0 ;
// }

// o/p - biggest = 45




// d)
// # include <stdio.h>
// int main( )
// {
//     int i = -4, j, num ;
//     j = ( num < 0 ? 0 : num * num ) ;
//     printf ( "%d\n", j ) ;
//     return 0 ;
// }

// o/p - j can not assigned


// e)
// # include <stdio.h>
// int main( )
// {
//     int k, num = 30 ;
//     k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ;
//     printf ( "%d\n", num ) ;
//     printf ( "%d\n", k ) ;
//     return 0 ;
// }

// o/p - 30   200



// [C] 
// Point out the errors, if any, in the following programs:

// (a) 
// # include <stdio.h>
// int main( )
// {
//     char spy = 'a', password = 'z' ;
//     if ( spy == 'a' || password == 'z' )
//     printf ( "All the birds are safe in the nest\n" ) ;
//     return 0 ;
// }


// b)
// # include <stdio.h>
// int main( )
// {
//     int i = 10, j = 20 ;
//     if (( i = 5 ) &&  ( j = 10 ))
//         printf ( "Have a nice day\n" ) ;
//     return 0 ;
// }

// or

// # include <stdio.h>
// int main( )
// {
//     int i = 10, j = 20 ;
//     if (( i == 5 ) &&  ( j == 10 ))
//         printf ( "Have a nice day\n" ) ;
//     return 0 ;
// }


// c)
// # include <stdio.h>
// int main( )
// {
//     int x = 10, y = 20 ;
//     if ( x >= 2 && y <= 50 )
//     printf ( "%d\n", x ) ;
//     return 0 ;
// }


// d)
// # include <stdio.h>
// int main( )
// {
//     int x = 2 ;
//     if ( x == 2 && x != 0 ) 
//     printf ( "Hello\n" ) ;
//     else
//     printf ( "Bye\n" ) ;
//     return 0 ;
// }


// e)
// # include <stdio.h>
// int main( )
// {
//     int j = 65 ;
//     printf ( "j >= 65 ? %d : %c\n", j, 'j' ) ;
//     return 0 ;
// }



// f)
// # include <stdio.h>
// int main( )
// {
//     int i = 10, j ;
//     j = i >= 5 ? 10 : 15 ;
//     printf ( "%d %d\n", i, j ) ;
//     return 0 ;
// }



// g)
// # include <stdio.h>
// int main( )
// {
//     int a = 5, b = 6 ;
//     ( a == b ) ? printf ( "%d\n", a ) : printf("%d\n", b) ;
//     return 0;
// }


// h)
// #include<stdio.h>

// int main(){
//     int n = 9;
//     (n == 9) ? printf("Correct\n") : printf("Wrong\n");
//     return 0;
// }



// [D]
// Attempt the following questions:

// a)

// #include<stdio.h>

// int main(){
//     float a, b, c;
//     printf("Enter the length of 3 sides of triangle: ");
//     scanf("%f %f %f", &a, &b, &c);
//     if((a == b) && (b == c)){
//         printf("The triangle is equilateral\n");
//     }
//     else if(a*a + b*b == c*c){
//         printf("The triangle is right angle\n");
//     }
//     else if(((a == b) && (a != c)) || ((b == c) && (b != a)) || ((a == c) && (a != b))){
//         printf("The triangle is isoceles\n");
//     }
//     else{
//         printf("The triangle is scalene\n");
//     }
//     return 0;
// }



// b)

// pseudocode
//     find max value among r, g, b
//     w = max(max(r/255, g/255), b/255);
//     c = (w - (r/255))/w;
//     m = (w - (g/255))/w;
//     y = (w - (b/255))/w;
//     k = 1-w;



// #include<stdio.h>

// int main(){
//     float r, g, b, c, m, y, k, w = 0;
//     printf("Enter the color of R, G and B: ");
//     scanf("%f %f %f", &r, &g, &b);

//     r /= 255;
//     g /= 255;
//     b /= 255;

//     // find max value among r, g, b
//     // if(w < r)
//     //     w = r;
    
//     // if(w < g)
//     //     w = g;
    
//     // if(w < b)
//     //     w = b;

//     // find max value among r, g, b
//     // if(r > g){
//     //     if(r > b){
//     //         w = r;
//     //     }
//     //     else{
//     //         w = b;
//     //     }
//     // }
//     // else{
//     //     if(g > b){
//     //         w = g;
//     //     }
//     //     else{
//     //         w = b;
//     //     }
//     // }

//     // find max value among r, g, b
//     (r > g) ? (r > b ? (w=r) : (w=b)) : (g > b ? (w=g) : (w=b));


//     c = (w - r)/w;
//     m = (w - g)/w;
//     y = (w - b)/w;
//     k = 1-w;

//     printf("\nC : %f\nM : %f\nY : %f\nK : %f", c,m,y,k);
//     return 0;
// }




// c)
// condition 1: Hardness must be greater than 50
// condition 2: Carbon content must be less than 0.7
// condition 3: Tensile strenth must be greater then 5600

// The grades are as follows:
// Grade is 10 if all three conditions are met
// Grade is 9 if conditions (i) and (ii) are met
// Grade is 8 if conditions (ii) and (iii) are met
// Grade is 7 if conditions (i) and (iii) are met
// Grade is 6 if only one condition is met
// Grade is 5 if none of the conditions are met
// Write a program, which will require the user to give values of
// hardness, carbon content and tensile strength of the steel under
// consideration and output the grade of the steel.

// #include<stdio.h>

// int main(){
//     int hard, tensile;
//     float carbon;
//     printf("Enter the strength of hardness, carbon and tensile: ");
//     scanf("%d %f %d", &hard, &carbon, &tensile);
//     printf("Author - Piyush Kumar\n");

//     if(hard > 50 && carbon < 0.7 && tensile > 5600){
//         printf("Grade is 10\n");
//     }
//     else if(hard > 50 && carbon < 0.7 && tensile <= 5600){
//         printf("Grade is 9\n");
//     }
//     else if(hard <= 50 && carbon < 0.7 && tensile > 5600){
//         printf("Grade is 8\n");
//     }
//     else if(hard > 50 && carbon >= 0.7 && tensile > 5600){
//         printf("Grade is 7\n");
//     }
//     else if((hard > 50 && carbon >= 0.7 && tensile <= 5600) || (hard <= 50 && carbon < 0.7 && tensile <= 5600) || (hard <= 50 && carbon >= 0.7 && tensile > 5600)){
//         printf("Grade is 6\n");
//     }
//     else{
//         printf("Grade is 5\n");
//     }
//     return 0;
// }



// d)
// The Body Mass Index (BMI) is defined as ratio of the weight of a
// person (in kilograms) to the square of the height (in meters). Write
// a program that receives weight and height, calculates the BMI, and
// reports the BMI category as per the following table:

// #include<stdio.h>

// int main(){
//     float ht, wt, bmi;
//     printf("Enter height(in meters) and weight(in kilograms): ");
//     scanf("%f %f", &ht, &wt);
//     bmi = wt / (ht*ht);
//     printf("Your BMI category is: %f\n", bmi);

//     if(bmi < 15){
//         printf("Starvation\n");
//     }
//     else if(bmi >= 15.1 && bmi <= 17.5){
//         printf("Anorexic\n");
//     }
//     else if(bmi >= 17.6 && bmi <= 18.5){
//         printf("Underweight\n");
//     }
//     else if(bmi >= 18.6 && bmi <= 24.9){
//         printf("Ideal\n");
//     }
//     else if(bmi >= 25 && bmi <= 25.9){
//         printf("Overweight\n");
//     } 
//     else if(bmi >= 30 && bmi <= 30.9){
//         printf("Obese\n");
//     }
//     else if(bmi >= 40){
//         printf("Morbidly Obese\n");
//     }
//     return 0;
// }





// [E] 
// Answer the following questions:

// a)

// Using conditional operators determine:
// (1) Whether the character entered through the keyboard is a lower case alphabet or not.

// #include<stdio.h>

// int main(){
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);
//     (c >= 97 && c <= 122) ? (printf("Lower case alphabet\n")) : (printf("Not a lower case alphabet\n"));
//     return 0;
// }

// (2) Whether a character entered through the keyboard is a special symbol or not.

// #include<stdio.h>

// int main(){
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     (c >= 97 && c <= 122 ) || (c >= 65 && c <= 90) ? (printf("Not a special symbol\n")) : (printf("Special symbol\n"));

//     return 0;
// }



// (b) 
// Write a program using conditional operators to determine whether
// a year entered through the keyboard is a leap year or not.

// #include<stdio.h>

// int main(){
//     int yr;
//     printf("Enter year: ");
//     scanf("%d", &yr);

//     ((yr%4 == 0) && (yr%100 != 0 || yr%400 == 0)) ? (printf("Leap year\n")) : (printf("Not a leap year\n"));
//     return 0;
// }




// c)
// Write a program to find the greatest of the three numbers entered
// through the keyboard. Use conditional operators.

// #include<stdio.h>

// int main(){
//     int a, b, c;
//     printf("Enter a, b and c: ");
//     scanf("%d %d %d", &a, &b, &c);

//     (a > b) ? (a > c ? printf("%d\n", a) : printf("%d\n", c)) : (b > c ? printf("%d\n", b) : printf("%d\n", c));

//     return 0;
// }



// d)
// Write a program to receive value of an angle in degrees and check
// whether sum of squares of sine and cosine of this angle is equal to 1.

// #include<stdio.h>
// #include<math.h>

// int main(){
//     float x;
//     printf("Enter the angle in degrees: ");
//     scanf("%f", &x);
//     x = 0.0174533*x;
//     if((sin(x)*sin(x)) + (cos(x)*cos(x)) == 1){
//         printf("sin^2+cos^2=1 is true");
//     }
//     else{
//         printf("sin^2+cos^2=1 is not true");
//     }
//     return 0;
// }



// (e) 
// Rewrite the following program using conditional operators.
// # include <stdio.h>
// int main( )
// {
//     float sal ;
//     printf ( "Enter the salary" ) ;
//     scanf ( "%f", &sal ) ;
//     if ( sal >= 25000 && sal <= 40000 )
//         printf ( "Manager\n" ) ;
//     else
//         if ( sal >= 15000 && sal < 25000 )
//             printf ( "Accountant\n" ) ;
//         else
//             printf ( "Clerk\n" ) ;
//     return 0 ;
// }

// using conditional operator

#include<stdio.h>

int main(){
    float sal ;
    printf ( "Enter the salary: " ) ;
    scanf ( "%f", &sal ) ;

    (sal >= 25000 && sal <= 40000) ? (printf("Manager\n")) : ((sal >= 15000 && sal < 25000) ? printf("Accountant\n"): printf("Clerk\n"));

    return 0;
}