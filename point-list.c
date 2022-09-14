/* 
    Program that implements an example of linked lists
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1

typedef struct coordnode {
  int x;
  int y;
  struct coordnode* nextcoord;
} CoordNode;
    
CoordNode* headcoord = NULL;

CoordNode* coord_alloc(void);

int print_list();

int main () {
    CoordNode* i;

    i = coord_alloc();
    i->x = 1;
    i->y = 2;
    i->nextcoord = NULL;
    headcoord = i;
    printf("My list length: %d\n", print_list());
    
    i = coord_alloc();
    i->x = 10;
    i->y = 20;
    i->nextcoord = NULL;
    // the nextcoord of the previous it's me
    headcoord->nextcoord = i; 

    printf("My list length: %d\n", print_list());

    i = coord_alloc();
    i->x = 100;
    i->y = 200;
    i->nextcoord = NULL;
    // the nextcoord of the previous it's me
    headcoord->nextcoord->nextcoord = i; 

    i = coord_alloc();
    i->x = 1000;
    i->y = 2000;
    i->nextcoord = NULL;
    // the nextcoord of the previous it's me
    headcoord->nextcoord->nextcoord->nextcoord = i;

    i = coord_alloc();
    i->x = 1000;
    i->y = 2000;
    i->nextcoord = NULL;
    // the nextcoord of the previous it's me
    headcoord->nextcoord->nextcoord->nextcoord->nextcoord = i;
    
    i = coord_alloc();
    i->x = 1000;
    i->y = 2000;
    i->nextcoord = NULL;
    // the nextcoord of the previous it's me
    headcoord->nextcoord->nextcoord->nextcoord->nextcoord->nextcoord = i;

    printf("My list length: %d\n", print_list());
    
    // Can you develop a function to insert a new item?
    // Can you develop a function to find and remove a x, y coord?
    
}

CoordNode* coord_alloc(void) {
    return (CoordNode *) malloc(sizeof(CoordNode));
}

// print x, y from the coords and return the list length
int print_list(){
    CoordNode* current = headcoord;
    int count=0;
    while (current != NULL) {
        count += 1;
        printf("(%d, %d)", current->x, current->y);
        current = current->nextcoord;

        printf(" -> ");
    }
    printf("\b\b\b\b     \n"); // Remove the last arrow
    return count;
}
