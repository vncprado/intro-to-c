#include<stdio.h>

int main() {
    char my_str[10];
    int a, b;
    FILE* fd = fopen("points.csv", "rw");

    while (fscanf(fd, "%d, %d", &a, &b) != EOF)
        printf("%d, %d\n", a, b);
    rewind(fd);

    fscanf(fd, "%s", my_str);
    printf("%s\n", my_str);
    fclose(fd);
    
}