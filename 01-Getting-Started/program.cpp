// Day - 1

// Ramesh’s basic salary is input through the keyboard. His dearness
// allowance is 40% of basic salary, and house rent allowance is 20% of
// basic salary. Write a program to calculate his gross salary.

/* Calculate Ramesh’s gross salary */
// # include <stdio.h>
// int main( )
// {
//     float sal, da, hra, gSal;
//     printf("Enter basic Salary: ");
//     scanf("%f", &sal);
//     da = 0.4 * sal;
//     hra = 0.2 * sal;
//     gSal = sal + da + hra;
//     printf("Basic Salary: %f\n", sal);
//     // cout<<"Dearness Allowance"<<da;
//     printf("Dearness allowance: %f\n", da);
//     printf("House rent allowance: %f\n", hra);
//     printf("Gross Salary %f\n", gSal);
//     return 0 ;
// }




// The distance between two cities (in kilometers) is input through the
// keyboard. Write a program to convert and print this distance in meters,
// feet, inches and centimeters.


// #include<stdio.h>

// int main(){
//     float km, m, ft, in, cm;
//     printf("Enter distance b/w two cities in kilometers: ");
//     scanf("%f", &km);
//     m = km * 1000;
//     cm = m * 100;
//     in = cm / 2.54;
//     ft = in / 12;
//     printf ("Distance in meters = %f\n", m ) ;
//     printf ("Distance in centimeter = %f\n", cm ) ;
//     printf ("Distance in feet = %f\n", ft ) ;
//     printf("Distance in inch: %f\n", in);
//     return 0;
// }



// If the marks obtained by a student in five different subjects are input
// through the keyboard, write a program to find out the aggregate marks
// and percentage marks obtained by the student. Assume that the
// maximum marks that can be obtained by a student in each subject is
// 100.

// #include<stdio.h>

// int main(){
//     int a, b, c, d, e, aggr;
//     float percentage;
//     printf("Enter marks in 5 subjects: ");
//     scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//     aggr = a+b+c+d+e;
//     percentage = aggr/5;
//     printf("Total marks: %d\n", aggr);
//     printf("Total Percentage: %f\n", percentage);
//     return 0;
// }



// Temperature of a city in Fahrenheit degrees is input through the
// keyboard. Write a program to convert this temperature into
// Centigrade degrees.

// #include<stdio.h>

// int main(){
//     float tempF, tempC;
//     printf("Enter temperature in Farenheit: ");
//     scanf("%f", &tempF);
//     tempC = (tempF - 32)*5/9;
//     printf("Temperature in Centigrade: %f\n", tempC);
//     return 0;
// }



// The length and breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the area
// and perimeter of the rectangle, and the area and circumference of
// the circle.


// #include<stdio.h>

// int main(){
//     float l, b, r, aor, por, aoc, coc;
//     printf("Enter length, breadth of rectangle and radius of circle: ");
//     scanf("%f %f %f", &l, &b, &r);
//     aor = l*b;
//     por = 2 * (l+b);
//     aoc = 3.14 * r * r;
//     coc = 2 * 3.14 * r;
//     printf("Area of rectangle: %f\n", aor);
//     printf("Perimeter of rectangle: %f\n", por);
//     printf("Area of circle: %f\n", aoc);
//     printf("Circumference of circle: %f\n", coc);
//     return 0;
// }




// Paper of size A0 has dimensions 1189 mm x 841 mm. Each
// subsequent size A(n) is defined as A(n-1) cut in half, parallel to its
// shorter sides. Thus, paper of size A1 would have dimensions 841
// mm x 594 mm. Write a program to calculate and print paper sizes
// A0, A1, A2, … A8.


#include<stdio.h>
#include<iostream>

int main(){
    int length = 1189, breadth = 841;
    for(int i = 0; i <= 8; i++){
        // printf("The size of A(%d) sheet = %d mm x %d mm.\n", i, length, breadth);
        std::cout<<"The size of A("<<i<<") sheet: "<<length<<" mm x "<<breadth<<" mm"<<std::endl;
        int temp = length;
        length = breadth;
        breadth = temp/2;
    }
    return 0;
}




// #include<stdio.h>

// int main()
// {
//     int A0_a, A0_b, A1_a, A1_b, A2_a, A2_b, A3_a, A3_b, A4_a, A4_b, A5_a, A5_b, A6_a, A6_b, A7_a, A7_b, A8_a, A8_b;
//     A0_a = 1189;
//     A0_b = 841;
//     printf("\nA0 : %dmm x %dmm ", A0_a, A0_b);
//     A1_a = A0_b;
//     A1_b = A0_a/2;
//     printf("\nA1 : %dmm x %dmm ", A1_a, A1_b);
//     A2_a = A1_b;
//     A2_b = A1_a/2;
//     printf("\nA2 : %dmm x %dmm", A2_a, A2_b);
//     A3_a = A2_b;
//     A3_b = A2_a/2;
//     printf("\nA3 : %dmm x %dmm", A3_a, A3_b);
//     A4_a = A3_b;
//     A4_b = A3_a/2;
//     printf("\nA4 : %dmm x %dmm", A4_a, A4_b);
//     A5_a = A4_b;
//     A5_b = A4_a/2;
//     printf("\nA5 : %dmm x %dmm", A5_a, A5_b);
//     A6_a = A5_b;
//     A6_b = A5_a/2;
//     printf("\nA6 : %dmm x %dmm", A6_a, A6_b);
//     A7_a = A6_b;
//     A7_b = A6_a/2;
//     printf("\nA7 : %dmm x %dmm", A7_a, A7_b);
//     A8_a = A7_b;
//     A8_b = A7_a/2;
//     printf("\nA8 : %dmm x %dmm", A8_a, A8_b);
//     return 0;
// }



