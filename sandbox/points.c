#include<stdio.h>
#include<stdlib.h>

#define TRUE 1

typedef struct coordnode {
  int x;
  int y;
  struct coordnode* nextcoord;
} CoordNode;

CoordNode* coord_alloc(void);
int print_list(CoordNode* head);

int main() {
    CoordNode *my_coord = coord_alloc();

    my_coord->x = 11;
    my_coord->y = 21;
    my_coord->nextcoord = NULL;

    CoordNode *my_coord2 = coord_alloc();

    my_coord2->x = 110;
    my_coord2->y = 210;
    my_coord2->nextcoord = NULL;

    //printf("my_coord: %d, %d\n", my_coord->x, my_coord->y);
    //printf("my_coord2: %d, %d\n", my_coord2->x, my_coord2->y);

    my_coord->nextcoord = my_coord2;
    my_coord->nextcoord->x = 98;
    my_coord->nextcoord->y = 97;

    CoordNode *my_coord3 = coord_alloc();
    my_coord3->x = 980;
    my_coord3->y = 970;
    my_coord3->nextcoord = NULL;

    my_coord2->nextcoord = my_coord3;

    //printf("my_coord2: %d, %d\n", my_coord2->x, my_coord2->y);
    print_list(my_coord);
}

CoordNode* coord_alloc(void){
    return (CoordNode *) malloc(sizeof(CoordNode));
}

int print_list(CoordNode* head) {
       CoordNode* cur = head;

        while (cur != NULL) {
            printf("%d, %d -> ", cur->x, cur->y);
            cur = cur->nextcoord;
            cur->nextcoord = cur->nextcoord->nextcoord;
        }
        return 0;
}
