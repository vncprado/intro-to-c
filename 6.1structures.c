/* 
    Program to explain structures
*/

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

typedef struct {
    int x;
    int y;
} mypoint;

int print_pt(struct point pt);
int print_mypoint(mypoint pt);
int add_pt(struct point *pt);

int main(){
    struct point pt;
    struct point *ptp;
    
    pt.x = 10;
    pt.y = 20;

    print_pt(pt);

    ptp = &pt;
    printf("Pointer points to point (%d, %d)\n", (*ptp).x, (*ptp).y);
    printf("Pointer points to point (%d, %d)\n", ptp->x, ptp->y);
    
    // Change the original point
    add_pt(ptp);
    print_pt(pt);

    mypoint pt2; // typedef
        
    pt2.x = 30;
    pt2.y = 40;

    print_mypoint(pt2); // different function parameter

    struct rect rec1;

    rec1.pt1.x = 0;
    rec1.pt1.y = 0;
    rec1.pt2.x = 1;
    rec1.pt2.y = 1;

    printf("My rec (%d, %d, %d, %d)\n", rec1.pt1.x, rec1.pt1.y, rec1.pt2.x, rec1.pt2.y);
    
}

int print_pt(struct point pt) {
    printf("%d, %d\n", pt.x, pt.y);
}

int add_pt(struct point *pt) {
    pt->x += 1;
    pt->y += 1;
}

int print_mypoint(mypoint pt) {
    printf("%d, %d\n", pt.x, pt.y);
}