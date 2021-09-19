/* 
    Program to explain structures and functions
*/

#include <stdio.h>

struct point {
    int x;
    int y;
};

int print_pt(struct point pt);
struct point init_pt(int x, int y);

int main(){
    struct point pt;

    pt.x = 10;
    pt.y = 20;
    print_pt(pt);
    pt = init_pt(1, 2); // return a new  point with x = 1, y = 2
    print_pt(pt);

}

struct point init_pt(int x, int y) {
    struct point temp_pt;
    temp_pt.x = x;
    temp_pt.y = y;

    return temp_pt;
}

int print_pt(struct point pt) {
    printf("%d, %d\n", pt.x, pt.y);
}