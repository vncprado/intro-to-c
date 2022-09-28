#include <stdio.h>

typedef struct coord {
    int x;
    int y;
} Coord;

int print_coord(struct coord coord1);
Coord init_coord(int x, int y);

int main(){
    Coord coord1;

    coord1 = init_coord(34, 54);

    print_coord(coord1);
}

Coord init_coord(int x, int y){
    Coord tmp_coord;

    tmp_coord.x = x;
    tmp_coord.y = y;

    return tmp_coord;
}

int print_coord(Coord coord1) {
    printf("Coord: %d, %d\n", coord1.x, coord1.y);
}

