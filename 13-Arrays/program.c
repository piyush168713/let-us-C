// q - 17


// # include <stdio.h>
// int main( )
// {
//     int avg, sum = 0 ;
//     int i ;
//     int marks[ 30 ] ;
//     for ( i = 0 ; i <= 29 ; i++ )
//     {
//         printf ( "Enter marks " ) ;
//         scanf ( "%d", &marks[ i ] ) ;
//     }
//     for ( i = 0 ; i <= 29 ; i++ )
//         sum = sum + marks[ i ] ;
//     avg = sum / 30 ;
//     printf ( "Average marks = %d\n", avg ) ;
//     return 0 ;
// }



// #include<stdio.h>

// void display1(int a){
//     printf("%d ", a);
// }

// void display2(int *b){
//     printf("%d ", *b);
// }

// int main(){
//     int marks[] = {55, 65, 75, 56, 78, 78, 90};
//     for(int i = 0; i <= 6; i++){
//         display1(marks[i]);
//     }
//     printf("\n");
//     for(int i = 0; i <= 6; i++){
//         display2(&marks[i]); 
//     }
//     return 0;
// }



// Pointers and Arrays

// #include<stdio.h>

// int main(){
//     int i = 3, *x ;
//     float j = 1.5, *y ;
//     char k = 'c', *z ;

//     printf("Value of i: %d\n", i);
//     printf("Value of j: %f\n", j);
//     printf("Value of k: %c\n", k);

//     x = &i;
//     y = &j;
//     z = &k;

//     printf("Address of x: %u\n", x);
//     printf("Address of y: %u\n", y);
//     printf("Address of z: %u\n", z);

//     printf("value of x: %d\n", *x);
//     printf("value of y: %f\n", *y);
//     printf("value of z: %c\n", *z);

//     x++; y++; z++;
//     printf("New Address of x: %u\n", x);    // +4
//     printf("New Address of y: %u\n", y);    // +2
//     printf("New Address of z: %u\n", z);    // +1

//     return 0;
// }




// #include<stdio.h>

// int main(){
//     int arr[] = {10, 20, 30, 45, 67, 56, 74};
//     int i = 4, *j, *k, *x, *y;

//     j = &i;
//     j = j + 9;  // pointer plus number

//     k = &i;
//     k = k - 3;  // pointer minus number

//     x = &arr[1];
//     y = &arr[5];
//     printf("%d\n", y-x);
//     j = &arr [5] ;
//     k = ( arr + 5 ) ;
//     if ( j == k )
//         printf ( "The two pointers point to the same location\n" ) ;
//     else
//         printf ( "The two pointers point to different locations\n" ) ;
//     return 0;
// }


// # include <stdio.h>
// int main( )
// {
//     int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
//     int i, *ptr ;
//     ptr = &num[ 0 ] ; /* assign address of zeroth element */
//     for ( i = 0 ; i <= 5 ; i++ )
//     {
//         printf ( "address = %u element = %d\n", ptr, *ptr ) ;
//         ptr++ ; /* increment pointer to point to next integer */
//     }
//     return 0 ;
// }


// pass array to function
// #include<stdio.h>

// void display1(int *ptr, int n){
//     for(int i = 0; i < n; i++){
//         printf("element = %d\n", *ptr);
//         ptr++;
//     }
// }

// void display2(int ptr[], int n){
//     for(int i = 0; i < n; i++){
//         printf("element = %d\n", ptr[i]);
//     }
// }

// int main( )
// {
//     int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
//     display1 ( &num[ 0 ], 6 ) ;
//     display2 ( &num[ 0 ], 6 ) ;
//     return 0 ;
// }




// # include <stdio.h>
// int main( )
// {
//     int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
//     int i ;
//     for ( i = 0 ; i <= 5 ; i++ )
//     {
//         printf ( "address = %u ", &num[ i ] ) ;
//         printf ( "element = %d %d ", num[ i ], *( num + i ) ) ;
//         printf ( "%d %d\n", *( i + num ), i[ num ] ) ;
//     }
//     return 0 ;
// }




// # include <stdio.h>
// # include <stdlib.h>
// int main( )
// {
//     int max, i, *p ;
//     printf ( "Enter array size: " ) ;
//     scanf ( "%d", &max ) ;
//     p = ( int * ) malloc ( max * sizeof ( int ) ) ;    // convert the void pointer into an int pointer
//     for ( i = 0 ; i <= 5 ; i++ )
//     {
//         p[ i ] = i * i ;
//         printf ( "%d ", p[ i ] ) ;
//     }
//     return 0 ;
// }




// Returning the array

// # include <stdio.h>
// int * fun ( int *num ) ;
// int main( )
// {
//     int max, *p, i ;
//     p = fun ( &max ) ;
//     for ( i = 0 ; i < max ; i++ )
//         printf ( "%d ", p[ i ] ) ;
//     return 0 ;
// }

// int * fun ( int *num ){
//     static int arr[ ] = { 10, 20, 30, 40, 50 } ;
//     *num = sizeof ( arr ) / sizeof ( arr[ 0 ] ) ;
//     return arr ;
// }









// 13.1
// Write a program that interchanges elements at odd position with
// elements at even position in an array of 10 elements.


// #include<stdio.h>

// int main(){
//     int num[ ] = { 12, 4, 5, 1, 9, 13, 11, 19, 54, 34 } ;
//     int t;
//     for(int i = 0; i <= 9; i += 2){
//         t = num[i];
//         num[i] = num[i+1];
//         num[i+1] = t;
//     }

//     for(int i = 0; i <= 9; i++){
//         printf("%d ", num[i]);
//     }

//     return 0;
// }



// 13.2
// Write a program to copy the contents of a 5-element integer array into
// another array in reverse order.

// #include<stdio.h>

// int main(){
//     int arr1[ 5 ], arr2[ 5 ], i, j ;
//     printf ( "\nEnter 5 elements of array: " ) ;
//     for ( i = 0 ; i <= 4 ; i++ )
//         scanf ( "%d", &arr1[ i ] ) ;

//     for(i = 0, j = 4; i <= 4; i++, j--){
//         arr2[j] = arr1[i];
//     }

//     printf("Elements in reverse order: ");
//     for(i = 0; i <= 4; i++){
//         printf("%d ", arr2[i]);
//     }

//     return 0;
// }




// 13.3
// An array contains 10 integers. Receive the number to be searched in the
// array as input. Write a program to search this number in the array and
// display the number of times it occurs in the array.

// #include<stdio.h>

// int main(){
//     int num[] = {7, 3, 5, 4, 6, 7, 2, 4, 6, 7};
//     int n, count = 0;

//     printf("Enter an element to search: ");
//     scanf("%d", &n);

//     for(int i = 0; i < 10; i++){
//         if(num[i] == n)
//             count++;
//     }

//     printf("%d is found %d times\n", n, count);

//     return 0;
// }



// [B] Attempt the following questions:

// a.
// Twenty-five numbers are entered from the keyboard into an array.
// Write a program to find out how many of them are positive, how
// many are negative, how many are even and how many odd.

// #include<stdio.h>

// int main(){
//     int arr[25];
//     int pCount = 0, nCount = 0, even = 0, odd = 0;
//     for(int i = 0; i < 25; i++){
//         scanf("%d", &arr[i]);
//     }

//     for(int i = 0; i < 25; i++){
//         if(arr[i] >= 0){
//             pCount++;
//         }
//         else
//             nCount++;
//     }
    

//     for(int i = 0; i < 25; i++){
//         if(arr[i]%2 == 0){
//             even++;
//         }
//         else
//             odd++;
//     }

//     printf("Negative Count: %d\nPositive Count: %d\nEven Count: %d\nOdd Count: %d\n", nCount, pCount, even, odd);
//     return 0;
// }



// b)
// If an array arr contains n elements, then write a program to check if
// arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on.

// #include<stdio.h>
// #include<stdbool.h>

// bool checkedArray(int arr[], int n){
//     for(int i = 0; i < n/2; i++){
//         if(arr[i] != arr[n-i-1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int arr[] = {1,2,3,2,1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     if(checkedArray(arr, n)){
//         printf("Condition Satisfied\n");
//     }
//     else{
//         printf("Condition not satisfied");
//     }
//     return 0;
// }




// c)
// Write a program using pointers to find the smallest number in an
// array of 25 integers.

// #include<stdio.h>

// int solve(int *arr, int n){
//     int small = *arr;

//     for(int i = 1; i < n; i++){
//         if(*(arr+i) < small)
//             small = *(arr+i);
//     }
//     return small;
// }

// int main(){
//     int a[25];
//     int *ptr;
//     printf("Enter 25 integers: ");

//     for(int i = 0; i < 25; i++){
//         scanf("%d", &a[i]);
//     }

//     int small = solve(a, 25);
//     printf("The smallest number in the array is: %d\n", small);

//     return 0;
// }




// e)
// Write a program which performs the following tasks:

//  - Initialize an integer array of 10 elements in main( )
//  - Pass the entire array to a function modify( )
//  - In modify() multiply each element of array by 3
//  - Return the control to main and print the new array element in main()

// #include<stdio.h>

// int modify(int *arr){
//     for(int i = 0; i < 10; i++){
//         arr[i] *= 3;
//     }
//     return *arr;
// }

// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     modify(arr);

//     for(int i=0; i<10; i++){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }




// f)  calculate mean and sd
// #include<stdio.h>
// #include<math.h>

// int main(){
//     double data[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
//     int n = sizeof(data) / sizeof(data[0]);

//     double sum = 0.0;
//     for (int i = 0; i < n; i++) {
//         sum += data[i];
//     }

//     double mean = sum / n;

//     double sum_squared_diff = 0.0;
//     for (int i = 0; i < n; i++) {
//         sum_squared_diff += pow(data[i] - mean, 2);
//     }

//     double standard_deviation = sqrt(sum_squared_diff / n);
//     printf("Mean: %.2f\n", mean);
//     printf("Standard Deviation: %.2f\n", standard_deviation);
//     printf("Piyush Kumar 20BCS9107");

//     return 0;
// }




// g)
// calculate area of triangle


// #include<stdio.h>
// #include<math.h>

// double solve(double a, double b, double angle){
//     double pi = 3.14159265359;
//     double angleRad = angle * (180.0 / pi);
//     double area = 0.5 * a * b * sin(angleRad);
//     return area;
// }

// int main(){
//     int a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
//     int b[] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
//     int angle[] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
//     int max_area = 0;
//     int max_plot = -1;

//     for(int i = 0; i < 6; i++){
//         double area = solve(a[i], b[i], angle[i]);
//         printf("Plot no. %d has an area of %.2f square units.\n", i+1, area);
//         if(area > max_area){
//             max_area = area;
//             max_plot = i+1;
//         }
//     }

//     printf("The plot with the largest area is plot no. %d with an area of %.2f square units.\n", max_plot, max_area);

//     return 0;
// }



// h)


// #include <stdio.h>
// #include <math.h>

// float correlationCoefficient(int X[], int Y[], int n) {
//     int sum_X = 0, sum_Y = 0, sum_XY = 0;
//     int squareSum_X = 0, squareSum_Y = 0;

//     for (int i = 0; i < n; i++) {
//         sum_X += X[i];
//         sum_Y += Y[i];

//         sum_XY += X[i] * Y[i];

//         squareSum_X += X[i] * X[i];
//         squareSum_Y += Y[i] * Y[i];
//     }

//     float corr = (float)(sum_XY - sum_X * sum_Y) / sqrt((n * squareSum_X - sum_X * sum_X) * (n * squareSum_Y - sum_Y * sum_Y));

//     return corr;
// }

// int main() {
//     int X[] = {15, 18, 21, 24, 27};
//     int Y[] = {25, 25, 27, 31, 32};
//     int n = sizeof(X) / sizeof(X[0]);

//     float r = correlationCoefficient(X, Y, n);
//     printf("The correlation coefficient is: %.2f\n", r);

//     return 0;
// }


// or



#include <stdio.h>
#include <math.h>

float correlationCoefficient(float X[][2], int n) {
    float xSum = 0, ySum = 0, xySum = 0;
    float x2Sum = 0, y2Sum = 0;

    for (int i = 0; i < n; i++) {
        xSum += X[i][0];
        ySum += X[i][1];

        xySum += X[i][0] * X[i][1];

        x2Sum += X[i][0] * X[i][0];
        y2Sum += X[i][1] * X[i][1];
    }

    float r = (float)(xySum - xSum * ySum) / sqrt((n * x2Sum - (xSum * xSum)) * (n * y2Sum - (ySum * ySum)));
    return r;
}

int main() {
    float x[11][2] = {
        34.22, 102.43,
        39.87, 100.93,
        41.85, 97.43,
        43.23, 97.81,
        40.06, 98.32,
        53.29, 98.32,
        53.29, 100.07,
        49.12, 91.59,
        40.71, 94.85,
        55.15, 94.65,
    };
    int n = 11;
    float r = correlationCoefficient(x, n);
    printf("The correlation coefficient is: %.2f\n", r);

    return 0;
}







// i)

// #include <stdio.h>
// #include <math.h>

// int main() {
//     double x[10], y[10];
//     double totalDist = 0.0;

//     printf("Enter the X and Y coordinates of 10 points:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Point %d:\n", i + 1);
//         printf("X: ");
//         printf("X: ");
//         scanf("%lf", &x[i]);
//         printf("Y: ");
//         scanf("%lf", &y[i]);
//     }

//     for (int i = 0; i < 9; i++) {
//         double deltaX = x[i + 1] - x[i];
//         double deltaY = y[i + 1] - y[i];
//         totalDist += sqrt(deltaX * deltaX + deltaY * deltaY);
//     }

//     printf("Total distance from the first point to the last point: %.2f\n", totalDist);

//     return 0;
// }



// j)

// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 10  

// char dequeue[MAX];
// int left = -1, right = -1;

// int isEmpty() {
//     return (left == -1);
// }

// int isFull() {
//     return ((left == 0 && right == MAX - 1) || (left == right + 1));
// }

// void insertLeft(char item) {
//     if (isFull()) {
//         printf("Dequeue is full!\n");
//         return;
//     }
//     if (left == -1) {  // If dequeue is initially empty
//         left = right = 0;
//     } else if (left == 0) {
//         left = MAX - 1;
//     } else {
//         left--;
//     }
//     dequeue[left] = item;
// }

// void insertRight(char item) {
//     if (isFull()) {
//         printf("Dequeue is full!\n");
//         return;
//     }
//     if (right == -1) {  // If dequeue is initially empty
//         left = right = 0;
//     } else if (right == MAX - 1) {
//         right = 0;
//     } else {
//         right++;
//     }
//     dequeue[right] = item;
// }

// char retrieveLeft() {
//     if (isEmpty()) {
//         printf("Dequeue is empty!\n");
//         return '\0';
//     }
//     char item = dequeue[left];
//     if (left == right) {  // Dequeue has only one element
//         left = right = -1;
//     } else if (left == MAX - 1) {
//         left = 0;
//     } else {
//         left++;
//     }
//     return item;
// }

// char retrieveRight() {
//     if (isEmpty()) {
//         printf("Dequeue is empty!\n");
//         return '\0';
//     }
//     char item = dequeue[right];
//     if (left == right) {  // Dequeue has only one element
//         left = right = -1;
//     } else if (right == 0) {
//         right = MAX - 1;
//     } else {
//         right--;
//     }
//     return item;
// }

// int main() {
//     insertRight('A');
//     insertRight('B');
//     insertLeft('C');
//     insertLeft('D');
    
//     printf("Retrieve Left: %c\n", retrieveLeft());
//     printf("Retrieve Right: %c\n", retrieveRight());
//     printf("Retrieve Left: %c\n", retrieveLeft());
//     printf("Retrieve Right: %c\n", retrieveRight());
    
//     retrieveLeft(); 
//     insertRight('E');
//     insertLeft('F');
//     insertRight('G');
//     insertLeft('H');
//     insertRight('I');
//     insertLeft('J');
//     insertRight('K');
//     insertLeft('L');
//     insertRight('M');
    
//     return 0;
// }

