// 17.1

// A stack is a data structure in which addition of new element or deletion
// of existing element always takes place at the same end known as ‘top’ of
// stack. Write a program to implement a stack using a linked list.

// #include<stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *link;
// };

// void push(struct node **s, int item){
//     struct node *q;
//     q = (struct node*)malloc(sizeof(struct node));
//     q->data = item;
//     q->link = *s;
//     *s = q;
// }

// int pop(struct node **s){
//     int item;
//     struct node *q;
//     if(*s == NULL){
//         printf("Stack is empty.\n");
//     }
//     else{
//         q = *s;
//         item = q->data;
//         *s = q->link;
//         free(q);
//         return item;
//     }
// }


// int main(){
//     struct node *top;
//     int t, item;
//     top = NULL;

//     push(&top, 45);
//     push(&top, 28);
//     push(&top, 63);
//     push(&top, 55);

//     item = pop(&top);
//     printf("Popped: %d\n", item);
//     item = pop(&top);
//     printf("Popped: %d\n", item);

//     return 0;
// }




// 17.2
// In a data structure called queue the addition of new element takes place
// at the end (called ‘rear’ of queue), whereas deletion takes place at the
// other end (called ‘front’ of queue). Write a program to implement a
// queue using a linked list.

// #include<stdio.h>
// #include <stdlib.h>

// struct queue
// {
//     int data;
//     struct queue *node;
// };

// struct queue *rear, *front;

// void add(int item){
//     struct queue *q = (struct queue*)malloc(sizeof(struct queue));
//     q->data = item;
//     q->node = NULL;
//     if(rear == NULL){
//         rear = q;
//         front = q;
//     }
//     else{
//         q->node = rear;
//         rear = q;
//     }
// }

// int del_queue(){
//     int item;
//     struct queue *q = rear;
//     if(front == NULL){
//         printf("Queue is empty\n");
//         return -1;
//     }
//     else{
//         if(front == rear){
//             item = q->data;
//             front = rear = NULL;
//             free(q);
//         }
//         else{
//             while(q->node->node != NULL){
//                 q = q->node;
//             }
//             item = q->node->data;
//                 free(q->node);
//                 front = q;
//                 q->node = NULL;
//         }
//     }
//     return item;
// }

// int main(){
//     int item;
//     rear = front = NULL;
//     add(10);
//     add(20);
//     add(30);
//     add(40);
//     add(50);
//     add(60);

//     item = del_queue();
//     printf("Deleted item: %d\n", item);
//     item = del_queue();
//     printf("Deleted item: %d\n", item);

//     return 0;
// }





// [B] Attempt the following questions:

// a)
// Create a structure called student that can contain data given below:
// Roll number, Name, Department, Course, Year of joining
// Assume that there are not more than 450 students in the college.
// (1) Write a function to print names of all students who joined in a
// particular year.
// (2) Write a function to print the data of a student whose roll
// number is received by the function.


// #include<stdio.h>
// #include <string.h>

// struct student{
//     int roll;
//     char name[50];
//     char dept[50];
//     char course[20];
//     int yoj;
// };  

// struct student students[450];
// int student_count = 0;

// void add_student(int roll, char name[], char dept[], char course[], int yoj){
//     if(student_count < 450){
//         students[student_count].roll = roll;
//         strcpy(students[student_count].name, name);
//         strcpy(students[student_count].dept, dept);
//         strcpy(students[student_count].course, course);
//         students[student_count].yoj = yoj;
//         student_count++;
//     }
//     else{
//         printf("Cannot add more students, array is full.\n");
//     }
// }

// void print_students_by_year(int year){
//     printf("Students who joined in %d:\n", year);
//     for(int i = 0; i < student_count; i++){
//         if(students[i].yoj == year){
//             printf("%s\n", students[i].name);
//         }
//     }
// }

// void print_student_by_roll_number(int roll){
//     for(int i = 0; i < student_count; i++){
//         if(students[i].roll == roll){
//             printf("\nStudent data:\n");
//             printf("Roll Number: %d\n", students[i].roll);
//             printf("Name: %s\n", students[i].name);
//             printf("Department: %s\n", students[i].dept);
//             printf("Course: %s\n", students[i].course);
//             printf("Year of Joining: %d\n", students[i].yoj);
//             return;
//         }
//     }
//     printf("Student with roll number %d not found.\n", roll);
// }

// int main(){
//     add_student(1, "John Doe", "Computer Science", "B.Tech", 2022);
//     add_student(2, "Jane Smith", "Electrical Engineering", "B.Tech", 2021);
//     add_student(3, "Alice Johnson", "Mechanical Engineering", "B.Tech", 2022);

//     print_students_by_year(2022);

//     print_student_by_roll_number(2);
//     print_student_by_roll_number(4);
    
//     return 0;
// }




// b)
// Create a structure that can contain data of customers in a bank. The
// data to be stored is Account number, Name and Balance in account.
// Assume maximum of 200 customers in the bank.
// (1) Define a function to print the Account number and name of
// each customer with balance below Rs. 1000.
// (2) If a customer requests for withdrawal or deposit, it should
// receive as input Account number, amount and code (1 for
// deposit, 0 for withdrawal).
// Define a function that prints a message, “The balance is
// insufficient for the specified withdrawal”, if on withdrawal the
// balance falls below Rs. 1000.


// #include <stdio.h>
// #include <string.h>

// struct customer {
//     int account_number;
//     char name[100];
//     float balance;
// };

// struct customer customers[200];
// int customer_count = 0;

// void add_customer(int account_number, char name[], float balance) {
//     if (customer_count < 200) {
//         customers[customer_count].account_number = account_number;
//         strcpy(customers[customer_count].name, name);
//         customers[customer_count].balance = balance;
//         customer_count++;
//     } else {
//         printf("Cannot add more customers, array is full.\n");
//     }
// }

// void print_customers_with_low_balance() {
//     printf("Customers with balance below Rs. 1000:\n");
//     for (int i = 0; i < customer_count; i++) {
//         if (customers[i].balance < 1000) {
//             printf("Account Number: %d, Name: %s\n", customers[i].account_number, customers[i].name);
//         }
//     }
// }

// void update_balance(int account_number, float amount, int code) {
//     for (int i = 0; i < customer_count; i++) {
//         if (customers[i].account_number == account_number) {
//             if (code == 1) {
//                 // Deposit
//                 customers[i].balance += amount;
//                 printf("Deposited Rs. %.2f to account number %d. New balance: Rs. %.2f\n", amount, account_number, customers[i].balance);
//             } else if (code == 0) {
//                 // Withdrawal
//                 if (customers[i].balance - amount < 1000) {
//                     printf("The balance is insufficient for the specified withdrawal.\n");
//                 } else {
//                     customers[i].balance -= amount;
//                     printf("Withdrew Rs. %.2f from account number %d. New balance: Rs. %.2f\n", amount, account_number, customers[i].balance);
//                 }
//             }
//             return;
//         }
//     }
//     printf("Customer with account number %d not found.\n", account_number);
// }

// int main() {
//     add_customer(101, "Alice", 1200.50);
//     add_customer(102, "Bob", 950.00);
//     add_customer(103, "Charlie", 3000.75);

//     // Test printing customers with balance below Rs. 1000
//     print_customers_with_low_balance();

//     update_balance(102, 200.00, 1); // Deposit
//     update_balance(103, 2500.00, 0); // Withdrawal
//     update_balance(102, 500.00, 0); // Attempted Withdrawal that should fail

//     return 0;
// }




// c)
// An automobile company has serial number for engine parts starting
// from AA0 to FF9. The other characteristics of parts are year of
// manufacture, material and quantity manufactured.
// (1) Create a structure to store information corresponding to a
// part.
// (2) Write a program to retrieve information on parts with serial
// numbers between BB1 and CC6.

// #include<stdio.h>
// #include<string.h>

// typedef struct{
//     char serNo[4];
//     int yom;
//     char material[20];
//     int quantity;
// }Company;

// int isInRange(char serialNo[]){
//     if(strcmp(serialNo, "BB1") >= 0 && strcmp(serialNo, "CC6") <= 0){
//         return 1;
//     }
//     return 0;
// }

// int main(){
//     Company parts[] = {
//         {"AA0", 2020, "Steel", 100},
//         {"BB1", 2021, "Aluminum", 150},
//         {"BB2", 2021, "Steel", 200},
//         {"CC5", 2022, "Iron", 120},
//         {"CC6", 2022, "Plastic", 180},
//         {"DD1", 2023, "Composite", 90}
//     };

//     int numParts = sizeof(parts) / sizeof(parts[0]);

//     printf("Parts with serial numbers between BB1 and CC6:\n");
//     for(int i = 0; i < numParts; i++){
//         if(isInRange(parts[i].serNo)){
//             printf("Serial Number: %s\n", parts[i].serNo);
//             printf("Year: %d\n", parts[i].yom);
//             printf("Material: %s\n", parts[i].material);
//             printf("Quantity: %d\n", parts[i].quantity);
//             printf("\n");
//         }
//     }
    
//     return 0;
// }




// d)
// A record contains name of cricketer, his age, number of test
// matches that he has played and the average runs that he has
// scored. Create an array of structures to hold records of 20 such
// cricketers and then write a program to read these records and
// arrange them in ascending order by average runs. Use the qsort( )
// standard library function.


// #include<stdio.h>

// typedef struct {
//     char name[50];
//     int age;
//     int noOfTest;
//     float avg_runs;
// } Cricketer;

// void printCricketer(Cricketer cricketers[], int n){
//     for(int i = 0; i < n; i++){
//         printf("Name: %s\nAge: %d\nNumber of test played: %d\nAverage Runs: %f\n",cricketers[i].name, cricketers[i].age, cricketers[i].noOfTest, cricketers[i].avg_runs);
//     }
// }

// int compare(const void *a, const void *b){
//     Cricketer *cricketerA = (Cricketer *)a;
//     Cricketer *cricketerB = (Cricketer *)b;
//     if (cricketerA->avg_runs < cricketerB->avg_runs) return -1;
//     if (cricketerA->avg_runs > cricketerB->avg_runs) return 1;
//     return 0;
// }

// int main(){

//     Cricketer cricketers[] = {
//         {"Sachin Tendulkar", 47, 200, 53.78},
//         {"Brian Lara", 51, 131, 52.88},
//         {"Ricky Ponting", 45, 168, 51.85},
//         {"Kane Williamson", 30, 83, 54.31},
//         {"David Warner", 34, 86, 48.94},
//     };

//     printf("Cricketers without sorting:\n");
//     printCricketer(cricketers, 5);

//     qsort(cricketers, 5, sizeof(Cricketer), compare);

//     printf("\nCricketers after sorting by average runs:\n");
//     printCricketer(cricketers, 5);
    
//     return 0;
// }




// e)
// Suppose there is a structure called employee that holds
// information like employee code, name and date of joining. Write a
// program to create an array of structures and enter some data into
// it. Then ask the user to enter current date. Display the names of
// those employees whose tenure is greater than equal to 3 years.

// #include<stdio.h>

// typedef struct {
//     int code;
//     char name[50];
//     int day;
//     int month;
//     int year;
// } Employee;

// void readEmployeeData(Employee employees[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("Enter details for employee %d\n", i + 1);
//         printf("Employee Code: ");
//         scanf("%d", &employees[i].code);
//         printf("Name: ");
//         scanf(" %[^\n]%*c", employees[i].name);
//         printf("Date of Joining (dd mm yyyy): ");
//         scanf("%d %d %d", &employees[i].day, &employees[i].month, &employees[i].year);
//     }
// }

// int calculateTenure(int curr_day, int curr_mnth, int curr_yr, int join_day, int join_month, int join_year) {
//     int tenure = curr_yr - join_year;
//     if (curr_mnth < join_month || (curr_mnth == join_month && curr_day < join_day)) {
//         tenure--;
//     }
    
//     return tenure;
// }

// void displayLongTenureEmployees(Employee employees[], int size, int curr_day, int curr_mnth, int curr_yr) {
//     printf("Employees with tenure >= 3 years:\n");
//     for (int i = 0; i < size; i++) {
//         int tenure = calculateTenure(curr_day, curr_mnth, curr_yr, employees[i].day, employees[i].month, employees[i].year);
//         if (tenure >= 3) {
//             printf("Name: %s\n", employees[i].name);
//         }
//     }
// }


// int main(){
//     int n = 5;
//     Employee employees[n];

//     readEmployeeData(employees, n);

//     int curr_day, curr_mnth, curr_yr;

//     printf("Enter current date (dd mm yyyy): ");
//     scanf("%d %d %d", &curr_day, &curr_mnth, &curr_yr);

//     displayLongTenureEmployees(employees, n, curr_day, curr_mnth, curr_yr);
    
//     return 0;
// }




// f)
// Create a structure called library to hold accession number, title of
// the book, author name, price of the book, and flag indicating
// whether book is issued or not. Write a menu-driven program that
// implements the working of a library. The menu options should be:
//     Add book information
//     Display book information
//     List all books of given author
//     List the title of book specified by accession number
//     List the count of books in the library
//     List the books in the order of accession number
//     Exit


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_BOOKS 100

// typedef struct {
//     int accession_number;
//     char title[100];
//     char author[100];
//     float price;
//     int issued;  // 0 for not issued, 1 for issued
// } Library;

// int book_count = 0;
// Library library[MAX_BOOKS];

// // Function prototypes
// void addBook();
// void displayBooks();
// void listBooksByAuthor();
// void listTitleByAccessionNumber();
// void countBooks();
// void listBooksByAccessionNumber();
// void exitProgram();

// int main() {
//     int choice;
    
//     while (1) {
//         printf("\nLibrary Management System\n");
//         printf("1. Add book information\n");
//         printf("2. Display book information\n");
//         printf("3. List all books of given author\n");
//         printf("4. List the title of book specified by accession number\n");
//         printf("5. List the count of books in the library\n");
//         printf("6. List the books in the order of accession number\n");
//         printf("7. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
        
//         switch (choice) {
//             case 1:
//                 addBook();
//                 break;
//             case 2:
//                 displayBooks();
//                 break;
//             case 3:
//                 listBooksByAuthor();
//                 break;
//             case 4:
//                 listTitleByAccessionNumber();
//                 break;
//             case 5:
//                 countBooks();
//                 break;
//             case 6:
//                 listBooksByAccessionNumber();
//                 break;
//             case 7:
//                 exitProgram();
//                 break;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     }
    
//     return 0;
// }

// void addBook() {
//     if (book_count < MAX_BOOKS) {
//         Library new_book;
        
//         printf("Enter accession number: ");
//         scanf("%d", &new_book.accession_number);
//         printf("Enter title: ");
//         scanf(" %[^\n]%*c", new_book.title);
//         printf("Enter author: ");
//         scanf(" %[^\n]%*c", new_book.author);
//         printf("Enter price: ");
//         scanf("%f", &new_book.price);
//         printf("Is the book issued? (0 for No, 1 for Yes): ");
//         scanf("%d", &new_book.issued);
        
//         library[book_count++] = new_book;
//         printf("Book added successfully!\n");
//     } else {
//         printf("Library is full! Cannot add more books.\n");
//     }
// }

// void displayBooks() {
//     if (book_count == 0) {
//         printf("No books in the library.\n");
//         return;
//     }
    
//     for (int i = 0; i < book_count; i++) {
//         printf("\nBook %d\n", i + 1);
//         printf("Accession Number: %d\n", library[i].accession_number);
//         printf("Title: %s\n", library[i].title);
//         printf("Author: %s\n", library[i].author);
//         printf("Price: %.2f\n", library[i].price);
//         printf("Issued: %s\n", library[i].issued ? "Yes" : "No");
//     }
// }

// void listBooksByAuthor() {
//     char author[100];
//     int found = 0;
    
//     printf("Enter author name: ");
//     scanf(" %[^\n]%*c", author);
    
//     for (int i = 0; i < book_count; i++) {
//         if (strcmp(library[i].author, author) == 0) {
//             printf("Title: %s\n", library[i].title);
//             found = 1;
//         }
//     }
    
//     if (!found) {
//         printf("No books found by the author %s.\n", author);
//     }
// }

// void listTitleByAccessionNumber() {
//     int accession_number;
//     int found = 0;
    
//     printf("Enter accession number: ");
//     scanf("%d", &accession_number);
    
//     for (int i = 0; i < book_count; i++) {
//         if (library[i].accession_number == accession_number) {
//             printf("Title: %s\n", library[i].title);
//             found = 1;
//             break;
//         }
//     }
    
//     if (!found) {
//         printf("No book found with accession number %d.\n", accession_number);
//     }
// }

// void countBooks() {
//     printf("Total number of books in the library: %d\n", book_count);
// }

// void listBooksByAccessionNumber() {
//     if (book_count == 0) {
//         printf("No books in the library.\n");
//         return;
//     }

//     // Sort the books by accession number using bubble sort
//     for (int i = 0; i < book_count - 1; i++) {
//         for (int j = 0; j < book_count - i - 1; j++) {
//             if (library[j].accession_number > library[j + 1].accession_number) {
//                 Library temp = library[j];
//                 library[j] = library[j + 1];
//                 library[j + 1] = temp;
//             }
//         }
//     }

//     printf("Books in the order of accession number:\n");
//     for (int i = 0; i < book_count; i++) {
//         printf("Accession Number: %d, Title: %s\n", library[i].accession_number, library[i].title);
//     }
// }

// void exitProgram() {
//     printf("Exiting the program. Goodbye!\n");
//     exit(0);
// }






// g)
// Define a function that compares two given dates. To store a date,
// use a structure that contains three members namely day, month
// and year. If the dates are equal the function should return 0,
// otherwise it should return 1.

#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int compareDates(Date date1, Date date2) {
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        return 0;  // Dates are equal
    }
    return 1;  // Dates are not equal
}

int main() {
    Date date1, date2;

    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int result = compareDates(date1, date2);

    if (result == 0) {
        printf("The dates are equal.\n");
    } else {
        printf("The dates are not equal.\n");
    }

    return 0;
}
