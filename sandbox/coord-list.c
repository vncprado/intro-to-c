#include<stdio.h>
#include<stdlib.h>

typedef struct coord {
    /* data */
    int x;
    int y;
    struct coord *next;
} Coord;

Coord *head_list = NULL;
int print_list();
Coord *coord_alloc(void);
void append_list(Coord * coord);

int main(){

    Coord *item;
    item = coord_alloc();
    item->x = 12;
    item->y = 21;
    item->next =NULL;
    
    head_list = item;

    item = coord_alloc();
    item->x = 123;
    item->y = 321;
    item->next = NULL;
    head_list->next = item;

    print_list();

}

int print_list() {
    int counter=0;
    Coord *cur = head_list;

    while (cur!= NULL) {
        printf("cur x=%d y=%d\n", cur->x, cur->y);
        counter += 1;
        cur = cur->next;
    }

    return counter;
}

Coord *coord_alloc(void) {
    return (Coord *) malloc(sizeof(Coord));
}