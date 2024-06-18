// # include <stdio.h>
// int main( )
// {
//     FILE *fp;
//     char ch;
//     fp = fopen("PR1.C", "r");      // open
//     while(1){
//         ch = fgetc(fp);     // reads the character
//         if(ch == EOF){
//             break;
//         }
//         printf("%c", ch);
//     }
//     printf("\n");
//     fclose(fp);      // close
//     return 0 ;
// }

// counting chars, spaces, tabs and newlines in a file

// #include<stdio.h>

// int main(){
//     FILE *fp;
//     char ch;
//     int noc = 0, nos = 0, not = 0, nol = 0;
//     fp = fopen("PR1.C", "r");     // open the file
//     while(1){
//         ch = fgetc(fp);        // read the file

//         if(ch == EOF)
//             break;

//         noc++;

//         if(ch == ' '){
//             nos++;
//         }

//         if(ch == '\t'){
//             not++;
//         }

//         if(ch == '\n'){
//             nol++;
//         }
//     }

//     fclose(fp);

//     printf("Number of characters: %d\n", noc);
//     printf("Number of spaces: %d\n", nos);
//     printf("Number of tabs: %d\n", not);
//     printf("Number of line: %d\n", nol);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     FILE *fs, *ft;
//     char ch;
//     fs = fopen("PR1.C", "r");
//     if(fs == NULL){
//         puts("Cannot open source file");
//         exit(1);
//     }
//     ft = fopen("PR2.C", "w");
//     if(ft == NULL){
//         puts("Cannot open target file");
//         fclose(fs);
//         exit(2);
//     }
//     while(1){
//         ch = fgetc(fs);
//         if (ch == EOF)
//             break;
//         else
//             fputc(ch, ft);
//     }
//     fclose(fs);
//     fclose(ft);
//     return 0;
// }

// write and read file

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){
//     FILE *fp;
//     char str[80];

//     fp = fopen("POEM.TXT", "w");
//     if(fp == NULL){
//         puts("Cannot open file");
//         exit(1);
//     }

//     printf("\nEnter a few lines of text (press Enter on an empty line to stop):\n");
//     while(fgets(str, sizeof(str), stdin) != NULL && strlen(str) > 1){
//         fputs(str, fp);
//     }
//     fclose(fp);

//     // read the file
//     printf("\nFile contents are being read now...\n");
//     fp = fopen("POEM.TXT", "r");

//     if(fp == NULL){
//         puts("Cannot open file");
//         exit(2);
//     }
//     while(fgets(str, sizeof(str), fp) != NULL){
//         printf("%s", str);
//     }
//     fclose(fp);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     FILE *fp;
//     struct emp {
//         char name[40];
//         int age;
//         float bs;
//     };

//     struct emp e;
//     char ch = 'Y';

//     // Opening file in write mode
//     fp = fopen("EMPLOYEE.DAT", "w");
//     if (fp == NULL) {
//         perror("Unable to open file");
//         return 1;
//     }

//     // Loop to input employee data
//     while (ch == 'Y') {
//         printf("Enter name, age, salary: ");
//         scanf("%s %d %f", e.name, &e.age, &e.bs);
//         fprintf(fp, "%s %d %f\n", e.name, e.age, e.bs);

//         // Consume the newline character left by scanf
//         getchar();

//         printf("Another record (Y/N): ");
//         ch = getchar();

//         // Consume the newline character left by getchar
//         getchar();
//     }

//     fclose(fp);

//     // Opening file in read mode
//     fp = fopen("EMPLOYEE.DAT", "r");
//     if (fp == NULL) {
//         perror("Unable to open file");
//         return 1;
//     }

//     // Loop to read and print employee data
//     while (fscanf(fp, "%s %d %f", e.name, &e.age, &e.bs) != EOF) {
//         printf("%s %d %f\n", e.name, e.age, e.bs);
//     }

//     fclose(fp);

//     // Binary file operations
//     ch = 'Y';
//     fp = fopen("EMP.DAT", "wb");
//     if (fp == NULL) {
//         perror("Unable to open file");
//         return 1;
//     }

//     // Loop to input employee data in binary format
//     while (ch == 'Y') {
//         printf("Enter name, age, salary: ");
//         scanf("%s %d %f", e.name, &e.age, &e.bs);
//         fwrite(&e, sizeof(e), 1, fp);

//         // Consume the newline character left by scanf
//         getchar();

//         printf("Another record (Y/N): ");
//         ch = getchar();

//         // Consume the newline character left by getchar
//         getchar();
//     }

//     fclose(fp);

//     // Opening binary file in read mode
//     fp = fopen("EMP.DAT", "rb");
//     if (fp == NULL) {
//         perror("Unable to open file");
//         return 1;
//     }

//     // Loop to read and print employee data in binary format
//     while (fread(&e, sizeof(e), 1, fp) == 1) {
//         printf("%s %d %f\n", e.name, e.age, e.bs);
//     }

//     fclose(fp);
//     return 0;
// }

// 19.1

// Write a program to read a file and display its contents along with line
// numbers before each line.

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     FILE *fp;
//     char filename[100];
//     char line[256];
//     int line_number = 1;

//     // Prompting the user to enter the filename
//     printf("Enter the filename: ");
//     scanf("%s", filename);

//     // Opening the file in read mode
//     fp = fopen(filename, "r");
//     if (fp == NULL) {
//         perror("Error opening file");
//         return 1;
//     }

//     // Reading and displaying the file's contents with line numbers
//     while (fgets(line, sizeof(line), fp)) {
//         printf("%d: %s", line_number, line);
//         line_number++;
//     }

//     // Closing the file
//     fclose(fp);
//     return 0;
// }

// 19.2
// Write a program to append the contents of one file at the end of another.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     FILE *fs, *ft;
//     char source[67], target[67], str[80];
//     puts("Enter source file name: ");
//     gets(source);
//     puts("Enter target file name: ");
//     gets(target);
//     fs = fopen(source, "r");

//     if (fs == NULL){
//         puts("Unable to open source file");
//         exit(0);
//     }

//     ft = fopen(target, "a");

//     if (ft == NULL){
//         fclose(fs);
//         puts("Unable to open target file");
//         exit(0);
//     }

//     while (fgets(str, 79, fs) != NULL)
//         fputs(str, ft);

//     printf("Appending file completed!!");
//     fclose(fs);
//     fclose(ft);
//     return 0;
// }

// [B] Attempt the following questions:

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[50];
//     FILE *f1, *f2;
//     f1 = fopen("File (d)1.txt", "r");
//     f2 = fopen("File (d)2.txt", "w");
//     while (fgets(str, 49, f1) != NULL)
//     {
//         _strupr(str);
//         fputs(str, f2);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *f1, *f2, *fp;
//     char ch1 = 'a', ch2 = 'a';
//     f1 = fopen("File (e)1.txt", "r");
//     f2 = fopen("File (e)2.txt", "r");
//     fp = fopen("File (e)3.txt", "w");

//     if (f1 == NULL)
//     {
//         printf("Can't open the file1\n");
//         exit(1);
//     }
//     if (f2 == NULL)
//     {
//         printf("Can't open the file1\n");
//         exit(2);
//     }

//     puts("\nWork on progress\n.\n.\n.\n.\n");

//     while (1)
//     {
//         if (ch1 != EOF)
//         {
//             ch1 = fgetc(f1);
//             /*A line is ends when a . is encounter*/
//             while (ch1 != '.')
//             {
//                 if (ch1 == EOF)
//                     break;
//                 fputc(ch1, fp);
//                 ch1 = fgetc(f1);
//             }
//             if (ch1 != EOF)
//                 fputc('.', fp);
//         }
//         if (ch2 != EOF)
//         {
//             ch2 = fgetc(f2);
//             /*A line is ends when a . is encounter*/
//             while (ch2 != '.')
//             {
//                 if (ch2 == EOF)
//                     break;
//                 fputc(ch2, fp);
//                 ch2 = fgetc(f2);
//             }
//             if (ch2 != EOF)
//                 fputc('.', fp);
//         }
//         /*Getting out of the loop after end of both files*/
//         if (ch1 == EOF && ch2 == EOF)
//             break;
//     }
//     printf("\nTask completed.\nExiting . . . \n");
//     return 0;
// }