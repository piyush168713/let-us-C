// #include<stdio.h>
// #include<string.h>

// int main(){
//     char list[6][20] = {
//         "akshay", "parag", "raman",
//         "srinivas", "gopal", "rajesh"
//     };

//     char name[20];
//     printf("Enter your name: ");
//     scanf("%s", name);
//     for(int i = 0; i <= 5; i++){
//         if(strcmp(&list[i][0], name) == 0){
//             printf("Welcome, you can enter the palace\n");
//             return 0;
//         }
//     }
//     printf("Sorry, you are a trespasser\n");
//     return 0;
// }



// In 2-D array of characters, the strings occupied 120 bytes. As against
// this, in array of pointers, the strings occupy only 41 bytes and the array
// occupies 24 bytes—a total of 65 bytes. Thus, there is a net saving of 55 bytes.



// #include<stdio.h>

// int main(){
//     char *names[] = {
//         "akshay", "parag", "raman",
//         "srinivas", "gopal", "rajesh"
//     };
//     int *temp;
//     printf("Original: %s %s\n", names[2], names[3]);
//     temp = names[2];
//     names[2] = names[3];
//     names[3] = temp;
//     printf("New: %s %s\n", names[2], names[3]);
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){
//     char *names[6], n[50];
//     int len;
//     char *p;
//     for(int i = 0; i <= 5; i++){
//         printf("Enter your name: ");
//         scanf("%s", n);
//         len = strlen(n);
//         p = (char *)malloc(len+1);    // Allocates memory dynamically to store the name
//         strcpy(p, n);
//         names[i] = p;
//     }
//     for(int i = 0; i <= 5; i++){
//         printf("%s\n", names[i]);
//     }
//     return 0;
// }



// 16.1
// Write a program to store a few strings using an array of pointers to
// strings. Receive a string and check if it is present in the array.

// #include<stdio.h>
// #include <string.h>

// int main(){
//     char *str[] = {
//         "We will teach you how to...",
//         "Move a mountain", "Level a building",
//         "Erase the past", "Make a million",
//         "...all through C!"
//     };

//     char str1[20], *p;
//     printf("Enter a string for search: ");
//     scanf("%s", str1);
//     p = NULL;

//     for(int i = 0; i < 6; i++){
//         p = strstr(str[i], str1);
//         if(p){
//             printf("%s found in the array\n", str1);
//             return 0;
//         }
//     }
//     printf("%s not found in the array\n", str1);

//     return 0;
// }



// 16.2
// Write a program to alphabetically sort a set of names stored using an
// array of pointers to strings.

// #include<stdio.h>
// #include <string.h>

// int main(){
//     char *str[] = {
//         "Rajesh", "Ashish", "Milind",
//         "Pushkar", "Akash"
//     };

//     char *t;
//     for(int i = 0; i < 5; i++){
//         for(int j = i+1; j < 5; j++){
//             if(strcmp(str[i], str[j]) > 0){
//                 t = str[i];
//                 str[i] = str[j];
//                 str[j] = t;
//             }
//         }
//     }
//     for(int i = 0; i < 5; i++){
//         printf("%s\n", str[i]);
//     }
//     return 0;
// }




// 16.3
// Write a program to reverse the strings stored in an array of pointers to strings:

// #include<stdio.h>
// #include <string.h>

// void str_rev(char*);

// int main(){
//     char str[ ][ 35 ] = {
//         "To ere is human...",
//         "But to really mess things up...",
//         "One needs to know C !!"
//     };

//     for(int i = 0; i < 3; i++){
//         str_rev(str[i]);
//         printf("%s\n", str[i]);
//     }
//     return 0;
// }

// void str_rev(char* s){
//     int len;
//     char *t, temp;
//     len = strlen(s);
//     t = s+len-1;

//     for(int i = 0; i <= len/2; i++){
//         temp = *s;
//         *s = *t;
//         *t = temp;
//         s++;
//         t--;
//     }
// }





// [A] Answer the following questions:

// a)
// How many bytes in memory would be occupied by the following
// array of pointers to strings? How many bytes would be required to
// store the same strings in a two-dimensional character array?
    // char *mess[] = {
    //     "Hammer and tongs", "Tooth and nail",
    //     "Spit and polish", "You and C"
    // };


// Ans:
// Memory for Pointers:
//     There are 4 pointers, and each pointer typically takes 8 bytes on a 64-bit system.
//     Memory for pointers: 4×8=32 bytes.

// Memory for Strings:

//     "Hammer and tongs": 16 characters + 1 null terminator = 17 bytes.
//     "Tooth and nail": 14 characters + 1 null terminator = 15 bytes.
//     "Spit and polish": 15 characters + 1 null terminator = 16 bytes.
//     "You and C": 9 characters + 1 null terminator = 10 bytes.
//     Total memory for strings: 17+15+16+10=58 bytes.

// Total Memory:
//     Memory for pointers + Memory for strings = 32+58=90 bytes.
    

// Two-Dimensional Character Array
// Determine the Longest String Length:
// The longest string is "Hammer and tongs" with 17 characters (including the null terminator).

// Memory for 2D Array:

//     We need to allocate memory for 4 strings, each of length 17 (to accommodate the longest string).
//     Memory required: 4×17=68 bytes.


// Summary
//     Array of Pointers to Strings: 90 bytes
//     Two-Dimensional Character Array: 68 bytes




// b)
// Write a program to delete all vowels from a sentence. Assume that
// the sentence is not more than 80 characters long.

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

// int isVowel(char ch){
//     char lowerch = tolower(ch);
//     return (lowerch == 'a' || lowerch == 'e' || lowerch == 'i' || lowerch == 'o' || lowerch == 'u');
// }

// void removeVowels(char* str){
//     int i, j = 0;
//     int len = strlen(str);

//     for(int i = 0; i < len; i++){
//         if(!isVowel(str[i])){     // if not vowel
//             str[j++] = str[i];       // copy the char to the j-th position in str and increment it by 1
//         }
//     }
//     str[j] = '\0';
// }

// int main(){
//     char sen[81];
//     printf("Enter a sentence (max 80 characters): ");
//     scanf("%80[^\n]", sen);    // read input until newline character 

//     removeVowels(sen);

//     printf("Sentence after removing vowels: %s\n", sen);

//     return 0;
// }



// c)
// Write a program that will read a line and delete from it all
// occurrences of the word ‘the’.

// #include<stdio.h>
// #include<string.h>

// #define SPACE 32
// #define IS_WORD(line, i) \
//     ((line[i] == 't' || line[i] == 'T') && \
//      (line[i + 1] == 'h' || line[i + 1] == 'H') && \
//      (line[i + 2] == 'e' || line[i + 2] == 'E') && \
//      (line[i + 3] == SPACE || line[i + 3] == '\0'))

// void delete_the(char *line){
//     int i, j;
//     for(i = 0; line[i] != '\0'; i++){
//         if(IS_WORD(line, i)){
//             for(j = i; line[j+3] != '\0'; j++){
//                 line[j] = line[j+4];
//             }
//             line[j] = '\0';
//             i--;     // Adjust index to check the current position again
//         }
//     }
// }

// int main(){
//     char line[80];
//     printf("Enter a line: ");
//     fgets(line, sizeof(line), stdin); 
//     delete_the(line);
//     puts("\nAfter removing all the words 'The'.\n\n");
//     puts(line);
//     return 0;
// }




// d)
// Write a program that stores a set of names of individuals and
// abbreviates the first and middle name to their first letter.

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void abbreviateName(char *fullName, char *abbreviatedName) {
//     int i = 0, j = 0;
//     int namePart = 0;  // 0 for first name, 1 for middle names, 2 for last name

//     // Skip leading spaces
//     while (isspace(fullName[i])) {
//         i++;
//     }

//     while (fullName[i] != '\0') {
//         // If we encounter a space, it means we've moved to the next part of the name
//         if (isspace(fullName[i])) {
//             // Skip multiple spaces
//             while (isspace(fullName[i])) {
//                 i++;
//             }

//             // Check if we are at the end of the string
//             if (fullName[i] == '\0') {
//                 break;
//             }

//             // Append a space to separate name parts
//             abbreviatedName[j++] = ' ';

//             if (namePart == 0 || namePart == 1) {
//                 // If we are still in the first or middle name parts
//                 abbreviatedName[j++] = fullName[i];
//                 abbreviatedName[j++] = '.';
//                 namePart++;
//             } else {
//                 // If we are at the last name part
//                 while (fullName[i] != '\0') {
//                     abbreviatedName[j++] = fullName[i++];
//                 }
//             }
//         } else {
//             if (namePart == 0) {
//                 // For the first name, just append the first character
//                 abbreviatedName[j++] = fullName[i++];
//                 abbreviatedName[j++] = '.';
//                 namePart++;
//             } else if (namePart == 1) {
//                 // For the middle name(s), just append the first character
//                 abbreviatedName[j++] = fullName[i++];
//                 abbreviatedName[j++] = '.';
//                 namePart++;
//             } else {
//                 // For the last name, append the entire last name
//                 while (fullName[i] != '\0') {
//                     abbreviatedName[j++] = fullName[i++];
//                 }
//             }
//         }
//     }

//     abbreviatedName[j] = '\0';  // Null-terminate the abbreviated name
// }

// int main() {
//     char fullName[1000];
//     char abbreviatedName[1000];

//     printf("Enter the full name:\n");
//     fgets(fullName, sizeof(fullName), stdin);

//     size_t len = strlen(fullName);
//     if (len > 0 && fullName[len - 1] == '\n') {
//         fullName[len - 1] = '\0';
//     }

//     abbreviateName(fullName, abbreviatedName);

//     printf("Abbreviated name:\n%s\n", abbreviatedName);

//     return 0;
// }





// e)
// Write a program to count the number of occurrences of any two
// vowels in succession in a line of text. For example, in the following
// sentence:
// “Please read this application and give me gratuity”
// such occurrences are ea, ea, ui.

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int isVowel(char ch) {
//     ch = tolower(ch);  // Convert character to lowercase for case insensitivity
//     return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
// }

// int isUniquePair(char pairs[][3], int pairCount, char first, char second) {
//     for (int i = 0; i < pairCount; i++) {
//         if (pairs[i][0] == first && pairs[i][1] == second) {
//             return 0; // Pair is not unique
//         }
//     }
//     return 1; // Pair is unique
// }

// int countSuccessiveVowels(const char *line) {
//     int count = 0;
//     char pairs[50][3]; // Array to store unique pairs
//     int pairCount = 0;
//     int length = strlen(line);

//     for (int i = 0; i < length - 1; i++) {
//         if (isVowel(line[i]) && isVowel(line[i + 1])) {
//             if (isUniquePair(pairs, pairCount, line[i], line[i + 1])) {
//                 pairs[pairCount][0] = line[i];
//                 pairs[pairCount][1] = line[i + 1];
//                 pairs[pairCount][2] = '\0';
//                 pairCount++;
//                 count++;
//                 printf("%c%c\n", line[i], line[i + 1]);  // Print the successive vowels
//             }
//         }
//     }
//     return count;
// }

// int main() {
//     char line[1000];
//     printf("Enter a line of text:\n");
//     fgets(line, sizeof(line), stdin);

//     // Remove newline character if present
//     size_t len = strlen(line);
//     if (len > 0 && line[len - 1] == '\n') {
//         line[len - 1] = '\0';
//     }

//     int count = countSuccessiveVowels(line);

//     printf("Number of unique successive vowels: %d\n", count);
//     return 0;
// }




// f)
// Write a program that receives an integer (less than or equal to nine
// digits in length) and prints out the number in words. For example, if
// the number input is 12342, then the output should be Twelve
// Thousand Three Hundred Forty Two.



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

const char *one[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                      "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };

const char *ten[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

void numToWords(int num, char *result) {
    if (num >= 1000000000) {
        strcat(result, one[num / 1000000000]);
        strcat(result, " Billion ");
        num %= 1000000000;
    }
    if (num >= 1000000) {
        numToWords(num / 1000000, result);
        strcat(result, " Million ");
        num %= 1000000;
    }
    if (num >= 1000) {
        numToWords(num / 1000, result);
        strcat(result, " Thousand ");
        num %= 1000;
    }
    if (num >= 100) {
        strcat(result, one[num / 100]);
        strcat(result, " Hundred ");
        num %= 100;
    }
    if (num >= 20) {
        strcat(result, ten[num / 10]);
        strcat(result, " ");
        num %= 10;
    }
    if (num > 0) {
        strcat(result, one[num]);
        strcat(result, " ");
    }
}

void trimSpaces(char *str) {
    int i, x;
    for (i = x = 0; str[i]; ++i) {
        if (!isspace(str[i]) || (i > 0 && !isspace(str[i - 1]))) {
            str[x++] = str[i];
        }
    }
    str[x] = '\0';
}

int main() {
    int number;
    char result[1000] = "";

    printf("Enter an integer (up to 9 digits): ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Zero\n");
    } else {
        numToWords(number, result);
        trimSpaces(result); 
        printf("%s\n", result);
    }

    return 0;
}
