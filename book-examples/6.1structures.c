/* 
    Examples on C struct
*/

#include <stdio.h>

struct coord {
    int x;
    int y;
};

struct rect {
    struct coord coord1;
    struct coord coord2;
};

typedef struct {
    int x;
    int y;
} Mycoord;

int print_coord(struct coord coord1);
int print_mypoint(Mycoord coord1);
int coord_inc(struct coord *coord1);

int main(){
    struct coord coord1;
    struct coord *p_coord1;
    
    coord1.x = 10;
    coord1.y = 20;

    print_coord(coord1);

    p_coord1 = &coord1; // pointer to my coord
    printf("coord1 (%d, %d)\n", coord1.x, coord1.y);
    printf("Pointer to coord1 (%d, %d)\n", (*p_coord1).x, (*p_coord1).y); // (*p_coord1) is the object so you can access using dot "." same with coord1 
    printf("Pointer to coord1 (%d, %d)\n", p_coord1->x, p_coord1->y);
    
    // Change the original point
    coord_inc(p_coord1); // increment the coordinate
    print_coord(coord1);

    Mycoord coord2; // typedef
        
    coord2.x = 30;
    coord2.y = 40;

    print_mypoint(coord2); // different function parameter

    struct rect rec1;

    rec1.coord1.x = 10;
    rec1.coord1.y = 5;
    rec1.coord2.x = 11;
    rec1.coord2.y = 15;

    printf("My rec (%d, %d, %d, %d)\n", rec1.coord1.x, rec1.coord1.y, rec1.coord2.x, rec1.coord2.y);
    
}

int print_coord(struct coord coord1) {
    printf("Coord: %d, %d\n", coord1.x, coord1.y);
}

int coord_inc(struct coord *coord1) {
     printf("Coord + 1\n");
    coord1->x += 1;
    coord1->y += 1;
}

int print_mypoint(Mycoord coord1) {
    printf("Coord: %d, %d\n", coord1.x, coord1.y);
}