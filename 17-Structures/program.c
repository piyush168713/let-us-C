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

#include<stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *node;
};

struct queue *rear, *front;

void add(int item){
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q->data = item;
    q->node = NULL;
    if(rear == NULL){
        rear = q;
        front = q;
    }
    else{
        q->node = rear;
        rear = q;
    }
}

int del_queue(){
    int item;
    struct queue *q = rear;
    if(front == NULL){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        if(front == rear){
            item = q->data;
            front = rear = NULL;
            free(q);
        }
        else{
            while(q->node->node != NULL){
                q = q->node;
            }
            item = q->node->data;
                free(q->node);
                front = q;
                q->node = NULL;
        }
    }
    return item;
}

int main(){
    int item;
    rear = front = NULL;
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    add(60);

    item = del_queue();
    printf("Deleted item: %d\n", item);
    item = del_queue();
    printf("Deleted item: %d\n", item);

    return 0;
}