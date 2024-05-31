/* A look-alike of the function strlen( ) */

// #include<stdio.h>
// int strlen_solve(char*);

// int main(){
//     char arr[] = "Piyush";
//     int len1, len2;
//     len1 = strlen_solve(arr);
//     len2 = strlen_solve("Humpty Dumpty");
//     printf ( "string = %s length = %d\n", arr, len1 ) ;
//     printf ( "string = %s length = %d\n", "Humpty Dumpty", len2 ) ;
//     return 0;
// }

// int strlen_solve(char *ch){
//     int len = 0;
//     while(*ch != '\0'){
//         len++;
//         ch++;
//     }
//     return len;
// }



// #include<stdio.h>
// #include<string.h>

// int main(){
//     char a[] = "Piyush", b[10];
//     strcpy(b, a);
//     printf("Source string: %s\n", a);
//     printf("Target string: %s\n", b);
//     return 0;
// }



// #include<stdio.h>

// void strcpy_solve(char*, char*);

// int main(){
//     char a[] = "Piyush", b[10];
//     strcpy_solve(b, a);
//     printf("Source string: %s\n", a);
//     printf("Target string: %s\n", b);
//     return 0;
// }

// void strcpy_solve(char* b, char* a){
//     while(*a != '\0'){
//         *b = *a;
//         b++;
//         a++;
//     }
//     *b = '\0';
// }





// 15.1)
// Write a program that extracts part of the given string from the specified
// position. For example, if from the sting "Working with strings is fun",
// starting from position 3, 4 characters are extracted then it should return "king".

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main(){
//     char str[20], subStr[20];
//     char *s, *t;
//     int pos, n;
//     printf("Enter a string: ");
//     scanf("%s", str);
//     printf("Enter position and no. of character to extract: ");
//     scanf("%d %d", &pos, &n);
//     s = str;
//     t = subStr;

//     if(pos < 0 || pos > strlen(str)){
//         printf("Improper position value");
//         exit(1);
//     }

//     if(n < 0)
//         n = 0;
    
//     if(n > strlen(str))
//         n = n-strlen(str)-1;

//     // Move the pointer s to the start position
//     s = s+pos;

//     for(int i = 0; i < n; i++){
//         *t = *s;
//         t++;
//         s++;
//     }
//     *t = '\0';
//     printf("The Substring is: %s\n", subStr);

//     return 0;
// }




// 15.2
// Write a program that converts a string like "124" to an integer 124.

// #include<stdio.h>

// int main(){
//     char str[10];
//     int num = 0;
//     printf("Enter a string containing number: ");
//     scanf("%s", str);

//     for(int i = 0; str[i] != '\0'; i++){
//         if(str[i] >= 48 && str[i] <= 57){
//             num = num*10 + (str[i] - 48);
//         }
//         else{
//             printf("Not a valid string\n");
//             return 1;
//         }
//     }
//     printf("The number is: %d\n", num);
//     return 0;
// }




// 15.3)
// Write a program that generates and prints the Fibonacci words of order
// 0 through 5. For example, f(0) = "A", f(1) = "B", f(2) = "BA", f(3) = "BAB",
// f(4) = "BABBA", etc.


// #include<stdio.h>
// #include<string.h>

// void generateFib(char fib[6][100], int n){
//     strcpy(fib[0], "A");
//     strcpy(fib[1], "B");

//     for(int i = 2; i <= n; i++){
//         strcpy(fib[i], fib[i-1]);
//         strcat(fib[i], fib[i-2]);
//     }
// }

// int main(){
//     int n = 5;
//     char fib[6][100];

//     generateFib(fib, n);

//     for(int i = 0; i <= n; i++){
//         printf("fib(%d): %s\n", i, fib[i]);
//     }

//     return 0;
// }





// [C] Attempt the following questions:

// a)
// If the string "Alice in wonder land" is fed to the following scanf( )
// statement, what will be the contents of arrays str1, str2, str3 and str4?
// scanf ( "%s%s%s%s", str1, str2, str3, str4 ) ;

// #include<stdio.h>

// int main(){
//     char str1[20], str2[20], str3[20], str4[20];
//     char input[] = "Alice in wonder land";

//     sscanf(input, "%s %s %s %s", str1, str2, str3, str4);

//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);
//     printf("str3: %s\n", str3);
//     printf("str4: %s\n", str4);

//     return 0;
// }




// b)
// To uniquely identify a book a 10-digit ISBN (International Standard
// Book Number) is used. The rightmost digit in ISBN is a checksum
// digit. This digit is determined from the other 9 digits using the
// condition that d1 + 2d2 + 3d3 + ... + 10d10 must be a multiple of 11
// (where di denotes the ith digit from the right). The checksum digit d1
// can be any value from 0 to 10: the ISBN convention is to use the
// value X to denote 10. Write a program that receives a 10-digit
// integer, computes the checksum, and reports whether the ISBN
// number is correct or not.

// #include<stdio.h>

// int isValidISBN(char isbn[]){
//     int len = strlen(isbn);
//     if(len != 10)
//         return 0;

//     int sum = 0;
//     for(int i = 0; i < 10; i++){
//         int digit;
//         if(isbn[i] == 'X'){
//             digit = 10;
//         }
//         else if(isbn[i] > '0' && isbn[i] <= '9'){
//             digit = isbn[i] - '0';

//         }
//         else
//             return 0;
//         sum += (digit * (10-i));
//     }
//     return (sum % 11 == 0);
// }

// int main(){
//     char isbn[11];
//     printf("Enter a 10-digit ISBN number: ");
//     scanf("%10s", isbn);

//     if (isValidISBN(isbn)) {
//         printf("The ISBN number is correct.\n");
//     } else {
//         printf("The ISBN number is incorrect.\n");
//     }

//     return 0;
// }



// c)

#include<stdio.h>

int main(){
    char num[20];
    int sum = 0;
    printf("Enter the 16 digit credit card number: ");
    scanf("%s", num);

    for(int i = 0; i <=15; i++){
        num[i] -= 48;     // convert char to int
        if(i % 2 == 0){
            num[i] *= 2;
            if(num[i] >= 10){
                num[i] -= 9;
            }
        }
        sum += num[i];
    }

    if(sum%10 == 0){
        printf("\nNumber is valid.\n");
    }
    else{
        printf("\nNumber is not valid.\n");
    }

    return 0;
}



// #include<stdio.h>
// #include <string.h>

// int main(){
//     char num[20];
//     int sum = 0;
//     printf("Enter the 16 digit credit card number: ");
//     scanf("%s", num);

//     if(strlen(num) != 16){
//         printf("Invalid input. Please enter exactly 16 digits.\n");
//         return 1;
//     }

//     for(int i = 15; i >= 0; i--){
//         int digit = num[i] - '0';     // convert char into int
//         if((15-i) % 2 == 1){
//             digit *= 2;
//             if(digit >= 10){
//                 digit -= 9;
//             }
//         }
//         sum += digit;
//     }

//     if(sum % 10 == 0){
//         printf("\nNumber is valid.\n");
//     }
//     else{
//         printf("\nNumber is not valid.\n");
//     }

//     return 0;
// }

// i/p - 4567123456789129