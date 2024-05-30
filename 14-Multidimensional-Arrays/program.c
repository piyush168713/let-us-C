// q - 14

/* Pointer notation to access 2-D array elements */
// # include <stdio.h>
// int main( )
// {
//     int s[ 4 ][ 2 ] = {
//         { 1234, 56 }, { 1212, 33 }, { 1434, 80 }, { 1312, 78 }
//     };
//     int i, j ;
//     for ( i = 0 ; i <= 3 ; i++ ){
//         for ( j = 0 ; j <= 1 ; j++ )
//             printf ( "%d ", *( *( s + i ) + j ) ) ;
//         printf ( "\n" ) ;
//     }
//     return 0 ;
// }



/* Usage of pointer to an array */
// # include <stdio.h>
// int main( )
// {
//     int s[ 4 ][ 2 ] = {
//         { 1234, 56 }, { 1212, 33 }, { 1434, 80 }, { 1312, 78 }
//     };
//     int ( *p )[ 2 ] ;
//     int i, j, *pint ;
//     for ( i = 0 ; i <= 3 ; i++ ){
//         p = &s[ i ] ;
//         pint = ( int * ) p ;
//         printf ( "\n" ) ;
//         for ( j = 0 ; j <= 1 ; j++ )
//             printf ( "%d ", *( pint + j ) ) ;
//     }
//     return 0 ;
// }



/* Passing 2-D array to a function */
// # include <stdio.h>
// void display ( int q[ ][ 4 ], int , int ) ;
// int main( )
// {
//     int a[ 3 ][ 4 ] = {
//         1, 2, 3, 4,
//         5, 6, 7, 8,
//         9, 0, 1, 6
//     };
//     display ( a, 3, 4 ) ;
//     return 0 ;
// }
//     void display ( int q[ ][ 4 ], int row, int col )
//     {
//         int i, j ;
//         for ( i = 0 ; i < row ; i++ ){
//             for ( j = 0 ; j < col ; j++ )
//                 printf ( "%d ", q[ i ][ j ] ) ;
//             printf ( "\n" ) ;
//         }
//         printf ( "\n" ) ;
//     }




// # include <stdio.h>
// int main( )
// {
//     int *arr[ 4 ] ; /* array of integer pointers */
//     int i = 31, j = 5, k = 19, l = 71, m ;
//     arr[ 0 ] = &i ;
//     arr[ 1 ] = &j ;
//     arr[ 2 ] = &k ;
//     arr[ 3 ] = &l ;
//     for ( m = 0 ; m <= 3 ; m++ )
//         printf ( "%d\n", * ( arr[ m ] ) ) ;
//     return 0 ;
// }





// Write a program to pick up the largest number from a 5 row by 5
// column matrix.

// # include <stdio.h>
// int main( )
// {
//     int a[ 5 ][ 5 ] = {
//         { 11, 1, 7, 9, 7 },
//         { 13, 54, 56, 2, 5 },
//         { 23, 43, 89, 22, 13 },
//         { 14, 15, 17, 16, 19 },
//         { 45, 3, 6, 8, 10 }
//     };

//     int i, j, big ;
//     big = a[ 0 ][ 0 ] ;
//     for ( i = 0 ; i <= 4 ; i++ ){
//         for ( j = 0 ; j <= 4 ; j++ ){
//             if ( a[ i ][ j ] > big )
//                 big = a[ i ][ j ] ;
//         }
//     }
//     printf ( "\nLargest number in the matrix is %d\n", big ) ;
//     return 0 ;
// }



// Write a program to obtain transpose of a 3 x 5 matrix. The transpose of
// a matrix is obtained by exchanging the elements of each row with the
// elements of the corresponding column

// #include <stdio.h>
// int main( )
// {
//     int mat1[ 3 ][ 5 ] = {
//         1, 2, 3, 4, 5,
//         6, 7, 8, 9, 10,
//         11, 12, 13, 14, 15
//     };

//     int mat2[ 5 ][ 3 ] ;
//     int i, j ;
//     for ( i = 0 ; i < 3 ; i++ ){
//         for ( j = 0 ; j < 5 ; j++ )
//             mat2[ j ][ i ] = mat1[ i ][ j ] ;
//     }
//     for ( i = 0 ; i < 5 ; i++ ){
//         for ( j = 0 ; j < 3 ; j++ )
//             printf ( "%d\t", mat2[ i ][ j ] ) ;
//         printf ( "\n" ) ;
//     }
//     return 0 ;
// }


// a)

// How will you initialize a three-dimensional array threed[ 3 ][ 2 ][ 3]?
// How will you refer the first and last element in this array?

// #include <stdio.h>

// int main() {
//     int threed[3][2][3] = {
//         {
//             {1, 2, 3},
//             {4, 5, 6}
//         },
//         {
//             {7, 8, 9},
//             {10, 11, 12}
//         },
//         {
//             {13, 14, 15},
//             {16, 17, 18}
//         }
//     };

//     printf("First element: %d\n", threed[0][0][0]);
//     printf("Last element: %d\n", threed[2][1][2]);
//     return 0;
// }



// b)
// Match the following with reference to the program segment given below:
// int i, j, = 25 ;
// int *pi, *pj = & j ;
// *pj = j + 5 ;
// j = *pj + 5 ;
// pj = pj ;
// *pi = i + j ;

// Each integer quantity occupies 2 bytes of memory. The value
// assigned to i begins at (hexadecimal) address F9C and the value
// assigned to j begins at address F9E. Match the value represented by
// expression in left column with values in the right column.

    // &i - F9C
    // &j - F9E
    // pj - F9e
    // *pj - 35
    // i  - unspecified
    // pi - F9C
    // *pi - 25
    // ( pi + 2 ) - F9E
    // (*pi + 2) - 27
    // * ( pi + 2 ) - 35




// c)
// Match the following with reference to the following program segment:
// int x[ 3 ][ 5 ] = {
//         { 1, 2, 3, 4, 5 },
//         { 6, 7, 8, 9, 10 },
//         { 11, 12, 13, 14, 15 }
// }, *n = &x ;


// *( *( x + 2 ) + 1) - 12    (x+2) denotes third row
// *( *x + 2 ) + 5 - 8        (*x + 2) denotes third element of 1st row
// *( *( x + 1) ) - 6
// *( *( x ) + 2 ) + 1 - 4
// * ( *( x + 1 ) + 3 ) - 9
// *n - 1
// *( n +2 ) - 3
// (*(n + 3 ) + 1 - 5
// *(n + 5)+1 - 7
// ++*n - 2



// d)

// Match the following with reference to the following program
// segment:
// unsigned int arr[ 3 ][ 3 ] = {
//     { 2, 4, 6 }, { 9, 1, 10 }, { 16, 64, 5 }
// };

// **arr - 2
// **arr < *( *arr + 2 ) - t
// *( arr + 2 ) / ( *( *arr + 1 ) > **arr ) - t
// *( arr[ 1 ] + 1 ) | arr[ 1 ][ 2 ]  - 1 | 10 - 11
// *( arr[ 0 ] ) | *( arr[ 2 ] )  - 2 | 16 - 18
// arr[ 1 ][ 1 ] < arr[ 0 ][ 1 ] - 1 < 4 - t
// arr[ 2 ][ [ 1 ] & arr[ 2 ][ 0 ] - 64 & 16 - 0
// arr[ 2 ][ 2 ] | arr[ 0 ][ 1 ] - 5 | 4 - 5
// arr[ 0 ][ 1 ] ^ arr[ 0 ][ 2 ] - 4^6 - 2
// ++**arr + --arr[ 1 ][ 1 ] - 3 + 0 - 3



// e)
// Write a program to find if a square matrix is symmetric.
// #include<stdio.h>

// int main(){
//     int n, count = 0;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d", &n);
//     int a[n][n];

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             if(a[i][j] == a[j][i])
//                 count++;
//         }
//     }

//     int d = n*n;
//     if(count == d){
//         printf("This is Symmetric Matrix");
//     }
//     else{
//         printf("This is not a Symmetric Matrix");
//     }
    
//     return 0;
// }



// f)
// Write a program to add two 6 x 6 matrices.

// #include<stdio.h>

// int main(){
//     int a[6][6],b[6][6], ans[6][6];
//     printf("Enter the elements in first matrix: ");
//     for(int i = 0; i < 6; i++){
//         for(int j = 0; j < 6; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter the elements in second matrix: ");
//     for(int i = 0; i < 6; i++){
//         for(int j = 0; j < 6; j++){
//             scanf("%d", &b[i][j]);
//         }
//     }

//     for(int i = 0; i < 6; i++){
//         for(int j = 0; j < 6; j++){
//             ans[i][j] = a[i][j] + b[i][j];
//         }
//     }

//     printf("Sum of the matrix: ");
//     for(int i = 0; i < 6; i++){
//         for(int j = 0; j < 6; j++){
//             printf("%d", ans[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// g)
// Write a program to multiply any two 3 x 3 matrices.

// #include<stdio.h>

// int main(){
//     int a[3][3],b[3][3],c[3][3];

//     printf("Enter the elements in first matrix: ");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter the elements in second matrix: ");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             scanf("%d", &b[i][j]);
//         }
//     }

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             c[i][j] = 0;
//             for(int k = 0; k < 3; k++){
//                 c[i][j] += a[i][k] + b[k][j];
//             }
//         }
//     }

//     printf("Multiplication result: ");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }




// h)
// Given an array p[ 5 ], write a function to shift it circularly left by two
// positions. Thus, if the original array is { 15, 30, 28, 19, 61 } then after
// shifting it will be { 28, 19, 61, 15, 30 } Call this function for a 4 x 5
// matrix and get its rows left shifted.


// #include<stdio.h>

// void shiftLeftByTwo(int a[], int n){
//     int temp1 = a[0];
//     int temp2 = a[1];

//     for(int i = 0; i < n-2; i++){
//         a[i] = a[i+2];
//     }

//     a[n-2] = temp1;
//     a[n-1] = temp2;
// }

// void printMatrix(int a[4][5], int r, int c){
//     for(int i = 0; i < r; i++){
//         for(int j = 0; j < c; j++){
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int matrix[4][5] = {
//         {15, 30, 28, 19, 61},
//         {22, 31, 17, 91, 45},
//         {10, 20, 30, 40, 50},
//         {1, 2, 3, 4, 5}
//     };

//     printf("Original Matrix:\n");
//     printMatrix(matrix, 4, 5);

//     for(int i = 0; i < 4; i++){
//         shiftLeftByTwo(matrix[i], 5);
//     }

//     printf("Matrix after shifting each row left by two positions:\n");
//     printMatrix(matrix, 4, 5);

//     return 0;
// }