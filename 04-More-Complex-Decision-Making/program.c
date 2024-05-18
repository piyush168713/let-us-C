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



