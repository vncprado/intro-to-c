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

PointNode *palloc(void);

int main () {
    PointNode *headpoint = 0x0;
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

    PointNode *iter = headpoint;

    while (TRUE) {
        printf("%d, %d", iter->x, iter->y);
        iter = iter->nextpoint;
        if (iter == NULL) {
            printf("\n");
            break;
        }
        printf(" -> ");
    }
}

PointNode *palloc(void) {
    return (PointNode *) malloc(sizeof(PointNode));
}