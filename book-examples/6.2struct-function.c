/* 
    Program to explain structures and functions
*/

#include <stdio.h>

struct coord {
    int x;
    int y;
};

int print_coord(struct coord pt);
struct coord init_pt(int x, int y);

int main(){
    struct coord pt;

    pt.x = 10;
    pt.y = 20;
    print_coord(pt);
    pt = init_pt(1, 2); // return a new  point with x = 1, y = 2
    print_coord(pt);

}

struct coord init_pt(int x, int y) {
    struct coord temp_pt;
    temp_pt.x = x;
    temp_pt.y = y;

    return temp_pt;
}

int print_coord(struct coord pt) {
    printf("%d, %d\n", pt.x, pt.y);
}