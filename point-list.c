/* 
    Program that implements an example of linked lists
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1

typedef struct pointnode {
  struct pointnode *nextpoint;
  int x;
  int y;
} PointNode;
    
PointNode *headpoint = NULL;

PointNode *palloc(void);
int print_list();

int main () {
    PointNode *i;

    i = palloc();
    i->x = 1;
    i->y = 2;
    i->nextpoint = NULL;
    headpoint = i;

    i = palloc();
    i->x = 10;
    i->y = 20;
    i->nextpoint = NULL;
    // the nextpoint of the previous it's me
    headpoint->nextpoint = i; 

    printf("My list length: %d\n", print_list());

    i = palloc();
    i->x = 100;
    i->y = 200;
    i->nextpoint = NULL;
    // the nextpoint of the previous it's me
    headpoint->nextpoint->nextpoint = i; 

    i = palloc();
    i->x = 1000;
    i->y = 2000;
    i->nextpoint = NULL;
    // the nextpoint of the previous it's me
    headpoint->nextpoint->nextpoint->nextpoint = i;

    i = palloc();
    i->x = 1000;
    i->y = 2000;
    i->nextpoint = NULL;
    // the nextpoint of the previous it's me
    headpoint->nextpoint->nextpoint->nextpoint->nextpoint = i;
    
    i = palloc();
    i->x = 1000;
    i->y = 2000;
    i->nextpoint = NULL;
    // the nextpoint of the previous it's me
    headpoint->nextpoint->nextpoint->nextpoint->nextpoint->nextpoint = i;

    printf("My list length: %d\n", print_list());
    
    // Can you develop a function to insert a new item?
    // Can you develop a function to find and remove a x, y point?
}

PointNode *palloc(void) {
    return (PointNode *) malloc(sizeof(PointNode));
}

// print x, y from the points and return the list length
int print_list(){
    PointNode *current = headpoint;
    int count=0;
    while (current != NULL) {
        count += 1;
        printf("%d, %d", current->x, current->y);
        current = current->nextpoint;

        printf(" -> ");
    }
    printf("\b\b\b\b\b     \n"); // Remove the last arrow
    return count;
}