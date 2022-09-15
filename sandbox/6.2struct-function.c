/* 
    Program to explain structures and functions
*/

#include <stdio.h>

struct coord {
    int x;
    int y;
};

int print_coord(struct coord coord1);
struct coord init_coord(int x, int y);

int main(){
    struct coord coord1;

    coord1.x = 10;
    coord1.y = 20;
    print_coord(coord1);
    coord1 = init_coord(1, 2); // return a new  coord with x = 1, y = 2
    print_coord(coord1);

}

struct coord init_coord(int x, int y) {
    struct coord temp_pt;
    temp_pt.x = x;
    temp_pt.y = y;

    return temp_pt;
}

int print_coord(struct coord coord1) {
    printf("%d, %d\n", coord1.x, coord1.y);
}