// q - 15

// # include <stdio.h>
// int main( )
// {
//     int i = 2 ;
//     switch ( i )
//     {
//         case 1 :
//             printf ( "I am in case 1 \n" ) ;
//         case 2 :
//             printf ( "I am in case 2 \n" ) ;
//         case 3 :
//             printf ( "I am in case 3 \n" ) ;
//         default :
//             printf ( "I am in default \n" ) ;
//     }
//     return 0 ;
// }
// This code will give o/p - 
// // I am in case 2
// // I am in case 3
// // I am in default
// coz once the matching case is found all the statements in subsequent cases and
// default also get executed until there is an break statement.


// # include <stdio.h>
// int main( )
// {
//     int i = 2 ;
//     switch ( i )
//     {
//         case 1 :
//             printf ("I am in case 1\n");
//             break;
//         case 2 :
//             printf ("I am in case 2\n");
//             break;
//         case 3 :
//             printf ("I am in case 3\n");
//             break;
//         default :
//             printf ("I am in default\n");
//             break;
//     }
//     return 0 ;
// }
// // I am in case 2



// #include<stdio.h>

// int main(){
//     char c;
//     printf("Enter any one of the alphabet a, b or c: ");
//     scanf("%c", &c);

//     switch (c)
//     {
//         case 'a':
//         case 'A':
//             printf("a as in apple\n");
//             break;
//         case 'b':
//         case 'B':
//             printf("b as in ball\n");
//             break;
//         case 'c':
//         case 'C':
//             printf("c is in car\n");
//             break;
//         default:
//             printf("wish you knew what are alphabets\n");
//     }
//     return 0;
// }



// The goto Statement
// The goto statement causes an unconditional jump to another statement in the same function.
// goto out ;
// The label out is specified at a place in the program where we wish the control to be transferred.

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int goals;
//     printf("Enter the number of goals against India: ");
//     scanf("%d", &goals);
//     if(goals <= 5){
//         goto sos;
//     }
//     else{
//         printf("About time soccer players learnt C\n");
//         printf("and said goodbye to soccer\n");
//         exit(1);     // program execution terminates
//     }
//     sos:
//         printf ("To err is human!\n");
//     return 0;
// }




// #include<stdio.h>

// int main(){
//     int i, j, k;
//     for(int i = 1; i <= 3; i++){
//         for(int j = 1; j <= 3; j++){
//             for(int k = 1; k <= 3; k++){
//                 if(i == 3 && j == 3 && k == 3){
//                     goto out;
//                 }
//                 else{
//                     printf("%d %d %d\n", i, j, k);
//                 }
//             }
//         }
//     }
//     out:
//         printf("Out of the loops at last.\n");
//     return 0;
// }



// 7.1)
// Write a menu driven program which has following options:
//     1. Factorial of a number
//     2. Prime or not
//     3. Odd or even
//     4. Exit

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int choice, num, fact;
//     while(1){
//         printf("\n1. Factorial\n");
//         printf("2. Prime\n");
//         printf("3. Odd / Even\n");
//         printf("4. Exit\n");
//         printf("Your choice?\n");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//             case 1:
//                 printf("Enter a number: ");
//                 scanf("%d", &num);
//                 fact = 1;
//                 for(int i = 1; i <= num; i++){
//                     fact = fact*i;
//                 }
//                 printf("Factorial value = %d\n", fact);
//                 break;

//             case 2:
//                 printf("Enter a number: ");
//                 scanf("%d", &num);

//                 int i;
//                 for(i = 2; i < num; i++){
//                     if(num%i == 0){
//                         printf("%d is not a Prime number.\n", num);
//                         break;
//                     }
//                 }
//                 if(i == num){
//                     printf("%d is a Prime number.\n", num);
//                 }
//                 break;
            
//             case 3:
//                 printf("Enter a number: ");
//                 scanf("%d", &num);
//                 if(num%2 == 0){
//                     printf("%d is a Even number.\n", num);
//                 }
//                 else{
//                     printf("%d is a Odd number.\n", num);
//                 }
//                 break;

//             case 4:
//                 exit(0);   

//             default:
//                 printf("Wrong choice!\a\n");    
//         }
//     }
//     return 0;
// }



//[A] 
// What will be the output of the following programs?

// a)
// # include <stdio.h>
// int main( )
// {
//     char suite = 3 ;
//     switch ( suite )
//     {
//         case 1 :
//             printf ( "Diamond\n" ) ;
//         case 2 :
//             printf ( "Spade\n" ) ;
//         default :
//             printf ( "Heart\n" ) ;
//     }
//     printf ( "I thought one wears a suite\n" ) ;
//     return 0 ;
// }

// o/p
// Heart
// I thought one wears a suite


// // b)
// # include <stdio.h>
// int main( )
// {
//     int c = 3 ;
//     switch ( c )
//     {
//         case '3' :
//             printf ( "You never win the silver prize\n" ) ;
//             break ;
//         case 3 :
//             printf ( "You always lose the gold prize\n" ) ;
//             break ;
//         default :
//             printf ( "Of course provided you win a prize\n" ) ;
//     }
//     return 0 ;
// }

// o/p - You always lose the gold prize


// c).
// # include <stdio.h>
// int main( )
// {
//     int i = 3 ;
//     switch ( i )
//     {
//         case 0 :
//             printf ( "Customers are dicey\n" ) ;
//         case 1 + 2 :
//             printf ( "Markets are pricey\n" ) ;
//         case 4 / 2 :
//             printf ( "Investors are moody\n" ) ;
//     }
//     return 0 ;
// }

// o/p
// Markets are pricey
// Investors are moody


// d).
// # include <stdio.h>
// int main( )
// {
//     int k ;
//     float j = 2.0 ;
//     switch ( k = j + 1 )
//     {
//         case 3 :
//             printf ( "Trapped\n" ) ;
//             break ;
//         default :
//             printf ( "Caught!\n" ) ;
//     }
//     return 0;
// }

// o/p - Trapped


// e).
// # include <stdio.h>
// int main( )
// {
//     int ch = 'a' + 'b' ;
//     switch ( ch )
//     {
//         case 'a' :
//         case 'b' :
//             printf ( "Look at 10 ideas, 11th will occur to you\n" ) ;
//         case 'A' :
//             printf ( "If you have a good idea, project it\n" ) ;
//         case 'b' + 'a' :
//             printf ( "Have ideas, will fly\n" ) ;
//     }
//     return 0 ;
// }

// o/p - Have ideas, will fly



// [B] 
// Point out the errors, if any, in the following programs:

// a).
// # include <stdio.h>
// int main( )
// {
//     int suite = 1 ;
//     switch ( suite ) 
//     {
//         case 0 :
//             printf ( "Club\n" ) ;
//         case 1 :
//             printf ( "Diamond\n" ) ;
//     }
//     return 0 ;
// }


// b).
// # include <stdio.h>
// int main( )
// {
//     int temp ;
//     scanf ( "%d", &temp ) ;
//     switch ( temp )
//     {
//         case ( temp <= 20 ) :
//             printf ( "Ooooooohhhh! Damn cool!\n" ) ;
//         case ( temp > 20 && temp <= 30 ) :
//             printf ( "Rain rain here again!\n" ) ;
//         case ( temp > 30 && temp <= 40 ) :
//             printf ( "Wish I am on Everest\n" ) ;
//         default :
//             printf ( "Good old Nagpur weather\n" ) ;
//     }
//     return 0 ;
// }
// temp can't appear in constant expression.We can never have a variable in case statement


// c).
// # include <stdio.h>
// int main( )
// {
//     float a = 3.5 ;
//     switch ( a )
//     {
//         case 0.5 :
//             printf ( "The art of C\n" ) ; break ;
//         case 1.5 :
//             printf ( "The spirit of C\n" ) ; break ;
//         case 2.5 :
//             printf ( "See through C\n" ) ; break ;
//     }
//     return 0 ;
// }

// 'a' is an float variable and we cannot test floats in switch statements.


// d).
// # include <stdio.h>
// int main( )
// {
//     int a = 3, b = 4, c ;
//     c = b - a;
//     switch ( c )
//     {
//         case 1 || 2 :
//             printf ( "God give me a chance to change things\n" ) ;
//             break ;
//         case a || b :
//             printf ( "God give me a chance to run my show\n" ) ;
//             break ;
//     }
//     return 0 ;
// }

// The expression must be a constant value, but a, b are present




// [C].

// [C] Write a program to find the grace marks for a student using switch.
// The user should enter the class obtained by the student and the
// number of subjects he has failed in. Use the following logic:
//
//     -If the student gets first class and he fails in more than 3
//     subjects, he does not get any grace. Otherwise, he gets a grace
//     of 5 marks per subject.
//     -If the student gets second class and he fails in more than 2
//     subjects, he does not get any grace. Otherwise, he gets a grace
//     of 4 marks per subject.
//     -If the student gets third class and he fails in more than 1
//     subject, then he does not get any grace. Otherwise, he gets a
//     grace of 5 marks.


#include<stdio.h>

int main(){
    int class, fail;
    printf("Enter the class: ");
    scanf("%d", &class);
    printf("Enter the total number of subject student got failed: ");
    scanf("%d", &fail);

    switch(class){
        case 1:
            switch(fail){
                case 0:
                case 1:
                case 2:
                case 3:
                    printf("Got grace of 5 marks per subject\n");
                    break;
                default:
                    printf("You didn't got any grace\n");
                    break;
            }
            break;

        case 2:
            switch(fail){
                case 0:
                case 1:
                case 2:
                    printf("Got grace of 5 marks per subject\n");
                    break;
                case 3:
                default:
                    printf("You didn't got any grace\n");
                    break;
            }
            break;

        case 3:
            switch(fail){
                case 0:
                case 1:
                    printf("Got grace of 5 marks per subject\n");
                    break;
                case 2:
                case 3:
                default:
                    printf("You didn't got any grace\n");
                    break;
            }
            break;
        
        default:
            printf("Wrong Choice. Please try again!!");
            break;
    }
    return 0;
}