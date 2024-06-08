// # include <stdio.h>
// int main( )
// {
//     int i = 10 ;
//     char ch = 'A' ;
//     float a = 3.14 ;
//     char str[ 20 ] ;
//     printf ( "%d %c %f\n", i, ch, a ) ;
//     sprintf ( str, "%d %c %f", i, ch, a ) ;
//     printf ( "%s\n", str ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     char ch ;
//     printf ( "\nType any alphabet: " ) ;
//     ch = getchar( ) ; /* must be followed by enter key */
//     printf ( "You typed: " ) ;
//     putchar ( ch ) ;
//     printf ( "\n" ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     char footballer[ 40 ] ;
//     puts ( "Enter name" ) ;
//     gets ( footballer ) ; /* sends base address of array */
//     puts ( "Happy footballing!" ) ;
//     puts ( footballer ) ;
//     return 0 ;
// }



// # include <stdio.h>
// # include <ctype.h>
// int main( )
// {
//     char ch ;
//     ch = getchar( ) ;
//     if ( islower ( ch ) )
//         putchar ( toupper ( ch ) ) ;
//     else
//         putchar ( tolower ( ch ) ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     int i = 2 ;
//     float f = 2.5367 ;
//     char str[ ] = "Life is like that" ;
//     printf ( "%4d\t%3.3f\t%4s\n", i, f, str ) ;
//     return 0 ;
// }



// # include <stdio.h>
// int main( )
// {
//     printf ( "More often than \b\b not \rthe person who \
//     wins is the one who thinks he can!\n" ) ;
//     return 0 ;
// }

// \b (Backspace)

// \r (Carriage Return):
// The \r escape sequence moves the cursor to the beginning of the current line. 
// This causes the characters after \r to overwrite the characters from the start of the line.



# include <stdio.h>
char p[ ] = "The sixth sick sheikh's sixth ship is sick" ;
int main( )
{
    int i = 0 ;
    while ( p[ i ] != '\0' ){
        putchar ( p[ i ] ) ;
        i++ ;
    }
    return 0 ;
}