// 3.1

// While purchasing certain items, a discount of 10% is
// offered if the quantity purchased is more than 1000. If quantity and
// price per item are input through the keyboard, write a program to
// calculate the total expenses.


// #include<stdio.h>

// int main(){
//     int qnty, dis;
//     float rate, total;
//     printf("Enter quantity and rate: ");
//     scanf("%d %f", &qnty, &rate);

//     if(qnty > 1000){
//         dis = 10;
//     }
//     else{
//         dis = 0;
//     }

//     total = (qnty*rate) - (qnty * rate * dis/100);
//     printf("Total Expenses: Rs. %f\n", total);

//     return 0;
// }



// In a company an employee is paid as under:
// If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary
// and DA = 90% of basic salary. If his salary is either equal to or above Rs.
// 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's
// salary is input through the keyboard write a program to find his gross
// salary.


// #include<stdio.h>

// int main(){
//     int bsal;
//     float hra, da, gsal;

//     printf("Enter the salary of employee: ");
//     scanf("%d", &bsal);

//     if(bsal < 1500){
//         hra = bsal*10/100;
//         da = bsal*90/100;
//     }
//     else if(bsal >= 1500){
//         hra = 500;
//         da = bsal*98/100;
//     }

//     gsal = bsal + hra + da;
//     printf("Gross Salary: Rs. %f\n", gsal);

//     return 0;
// }



// If cost price and selling price of an item is input through the keyboard,
// write a program to determine whether the seller has made profit or
// incurred loss. Also determine how much profit he made or loss he
// incurred.

// #include<stdio.h>

// int main(){
//     float cp, sp, profit, loss;
//     printf("Enter cost price and selling price: ");
//     scanf("%f %f", &cp, &sp);

//     profit = sp - cp;
//     loss = cp - sp;

//     if(profit > 0){
//         printf("The seller made a profit of Rs. %f\n", profit);
//     }
//     if(loss > 0){
//         printf("The seller made a loss of Rs. %f\n", loss);
//     }
//     if(profit == 0){
//         printf("There is no loss, no profit\n") ;
//     }

//     return 0;
// }




// Any integer is input through the keyboard. Write a program to find out
// whether it is an odd number or even number.


// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a integer: ");
//     scanf("%d", &n);

//     if(n%2 == 0){
//         printf("%d is even\n", n);
//     }   
//     else{
//         printf("%d is odd\n", n);
//     }

//     return 0;
// }



// Any year is input through the keyboard. Write a program to determine
// whether the year is a leap year or not.

// #include<stdio.h>

// int main(){
//     int yr;
//     printf("Enter a integer: ");
//     scanf("%d", &yr);

//     if(yr%100 == 0){
//         if(yr%400 == 0){
//             printf("%d is a leap year\n", yr);
//         }
//         else{
//             printf("%d is not a leap year\n", yr);
//         }
//     }
//     else{
//         if(yr%4 == 0){
//             printf("%d is a leap year\n", yr);
//         }
//         else{
//             printf("%d is not a leap year\n", yr);
//         }
//     }

//     return 0;
// }




// # include <stdio.h>
// int main( )
// {
//     int a = 300, b, c ;
//     if ( a >= 400 )
//         b = 300 ;
//     c = 200 ;
//     printf ( "%d %d\n", b, c ) ;
//     return 0 ;
// }

// o/p - 0 200



// # include <stdio.h>
// int main( )
// {
//     int x = 10, y = 20 ;
//     if ( x == y ) ;
//         printf ( "%d %d\n", x, y ) ;
//     return 0 ;
// }

// o/p - 10 20



// # include <stdio.h>
// int main( )
// {
//     int x = 3 ;
//     float y = 3.0 ;
//     if ( x == y )
//         printf ( "x and y are equal\n" ) ;
//     else
//         printf ( "x and y are not equal\n" ) ;
//     return 0 ;
// }

// o/p - x and y are equal



// # include <stdio.h>
// int main( )
// {
//     int x = 3, y, z ;
//     y = x = 10 ;
//     z = x < 10 ;
//     printf ( "x = %d y = %d z = %d\n", x, y, z ) ;
//     return 0 ;
// }

// o/p - 10 10 0



// # include <stdio.h>
// int main( )
// {
//     int i = 65 ;
//     char j = 'A' ;
//     if ( i == j )
//         printf ( "C is WOW\n" ) ;
//     else
//         printf ( "C is a headache\n" ) ;
//     return 0 ;
// }

// refer - https://www.asciitable.com/
// o/p - C is WOW


// # include <stdio.h>
// int main( )
// {
//     float a = 12.25, b = 12.52 ;
//     if ( a == b )
//         printf ( "a and b are equal\n" ) ;
//     return 0 ;
// }

// o/p - a and b are equal



// # include <stdio.h>
// int main( )
// {
//     int j = 10, k = 12 ;
//     if ( k >= j )
//     {
//         {
//             k=j;
//             j=k;
//         }
//     }
//     // printf("%d %d", j, k);
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     if ( 'X' < 'x' )
//         printf ( "ascii value of X is smaller than that of x\n" ) ;
// }


// # include <stdio.h>
// int main( )
// {
//     int x = 10 ;
//     if ( x >= 2 ) 
//         printf ( "%d\n", x ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     int x = 10, y = 15 ;
//     if ( x % 2 == y % 3 )
//         printf ( "Carpathians\n" ) ;
// }



// # include<stdio.h>
// int main()
// {
//     int a, b ;
//     scanf ( "%d %d", &a, &b ) ;
//     if ( a > b )
//         printf ( "This is a game\n" ) ;
//     else
//         printf ( "You have to play it\n" ) ;
//     return 0 ;
// }




// A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine whether
// the original and reversed numbers are equal or not.

// #include<stdio.h>

// int main(){
//     int n, reversedno = 0;
//     printf("Enter a five digit number: ");
//     scanf("%d", &n);

//     int temp = n;

//     if(n > 99999 || n < 10000){
//         printf("Error: Enter a five-digit number.\n");
//         return 1;
//     }

//     while(n != 0){
//         int digit = n%10;
//         reversedno = reversedno * 10 + digit;
//         n = n/10;
//     }

//     printf("Reversed number is %d\n", reversedno);

//     if(temp == reversedno){
//         printf("Original and Reversed Number are same\n");
//     }
//     else{
//         printf("Original and Reversed Number are not same\n");
//     }

//     return 0;
// }




// If ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three.

// #include<stdio.h>

// int main(){
//     int a, b, c;
//     printf("Enter the age of Ram, Shyam and Ajay: ");
//     scanf("%d %d %d", &a, &b, &c);

//     int youngest;
//     youngest = a<b ? (a<c?a:c) : (b<c?b:c);

//     if(youngest == a)
//         printf("Ram is youngest.\n");
//     else if(youngest == b)
//         printf("Shyam is youngest.\n");
//     else    
//         printf("Ajay is youngest.\n");
//     return 0;
// }




// Write a program to check whether a triangle is valid or not, if three
// angles of the triangle are entered through the keyboard. A triangle
// is valid if the sum of all the three angles is equal to 180 degrees.

// #include<stdio.h>

// int main(){
//     float a, b, c;
//     printf("Enter the angle of a, b, c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     // int sum = a+b+c;

//     if(a+b+c == 180){
//         printf("It is a valid Triangle\n");
//     }
//     else{
//         printf("It is a invalid Triangle\n");
//     }

//     return 0;
// }



// Write a program to find the absolute value of a number entered
// through the keyboard.

// #include<stdio.h>
// #include <stdlib.h>

// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     printf("Absolute value of %d is %d.\n", n, abs(n));
//     return 0;
// }



// Given the length and breadth of a rectangle, write a program to find
// whether the area of the rectangle is greater than its perimeter. For
// example, the area of the rectangle with length = 5 and breadth = 4
// is greater than its perimeter.

// #include<stdio.h>

// int main(){
//     int l, b;
//     printf("Enter the length and breadth of rectangle: ");
//     scanf("%d %d", &l, &b);
//     if(l*b > 2*(l+b)){
//         printf("Area is greater than Perimeter\n");
//     }
//     else{
//         printf("Perimeter is greater than Area\n");
//     }
//     return 0;
// }




// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to
// check if the three points fall on one straight line.

// #include<stdio.h>

// int main(){
//     float x1, x2, x3, y1, y2, y3;
//     printf("Enter first coordinates (x1, y1): ");
//     scanf("%f %f", &x1, &y1);
//     printf("Enter second coordinates (x2, y2): ");
//     scanf("%f %f", &x2, &y2);
//     printf("Enter third coordinates (x3, y3): ");
//     scanf("%f %f", &x3, &y3);

//     // condition for collinear
//     float area = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);

//     if(area == 0){
//         printf("Point lies on straight line.\n");
//     }
//     else{
//         printf("Point doesn't lies on straight line.\n");
//     }

//     return 0;
// }



// #include<stdio.h>

// int main(){
//     float x1, x2, x3, y1, y2, y3;
//     printf("Enter first coordinates (x1, y1): ");
//     scanf("%f %f", &x1, &y1);
//     printf("Enter second coordinates (x2, y2): ");
//     scanf("%f %f", &x2, &y2);
//     printf("Enter third coordinates (x3, y3): ");
//     scanf("%f %f", &x3, &y3);

//     // condition for collinear
//     if((y2-y1)/(x2-x1) == (y3-y1)/(x3-x1)){
//         printf("Point lies on straight line.\n");
//     }
//     else{
//         printf("Point doesn't lies on straight line.\n");
//     }

//     return 0;
// }



// Given the coordinates (x, y) of center of a circle and its radius, write
// a program that will determine whether a point lies inside the circle,
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
// functions)


// #include<stdio.h>
// #include<math.h>

// int main(){
//     float cen_x, cen_y, r, d, x, y;
//     printf("Enter the center of the circle and radius: ");
//     scanf("%f %f %f", &cen_x, &cen_y, &r);

//     printf("Enter the point of the coordinate: ");
//     scanf("%f %f", &x, &y);

//     d = sqrt(pow((x - cen_x), 2.0) + pow((y - cen_y), 2.0));

//     if(d == r){
//         printf("The point lies on the circle.\n");
//     }
//     else if(d < r){
//         printf("The point lies inside the circle.\n");
//     }
//     else{
//         printf("The point lies outside the circle.\n");
//     }

//     return 0;
// }



// Given a point (x, y), write a program to find out if it lies on X-axis, Y-
// axis or origin.

// #include<stdio.h>

// int main(){
//     float x, y;
//     printf("Enter the coordinate of x and y: ");
//     scanf("%f %f", &x, &y);

//     if(x == 0.0 && y == 0.0){
//         printf("Point lies on origin.\n");
//     }
//     else if(x == 0.0 && y > 0.0){
//         printf("Point lies on Y-axis.\n");
//     }
//     else if(x > 0.0 && y == 0.0){ 
//         printf("Point lies on X-axis.\n");
//     }
//     else{
//         printf("Point lies on the plane.\n");
//     }
//     return 0;
// }



// According to Gregorian calendar, it was Monday on the date
// 01/01/01. If any year is input through the keyboard write a program
// to find out what is the day on 1st January of this year.

#include<stdio.h>

int main(){
    int givenYear = 2001;
    int year;    // 2005
    printf("Enter a year: ");
    scanf("%d", &year);

    int diff = year - givenYear;    // 2005 - 2001 = 4
    int leapYear = diff/4;          // 4/4 = 1
    int nonLeapYear = diff - leapYear;    // 4-1 = 3

    int days = (leapYear * 366) + (nonLeapYear * 365) + 1;    // (1*366) + (3*365) + 1 // +1 for 1 Jan of next year

    if(days%7 == 0){
        printf("Sunday");
    }
    if(days%7 == 1){
        printf("Monday");
    }
    if(days%7 == 2){
        printf("Tuesday");
    }
    if(days%7 == 3){
        printf("Wednesday");
    }
    if(days%7 == 4){
        printf("Thursday");
    }
    if(days%7 == 5){
        printf("Friday");
    }
    if(days%7 == 6){
        printf("Saturday");
    }

    return 0;
}