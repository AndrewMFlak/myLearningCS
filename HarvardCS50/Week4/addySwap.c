#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    
    int x = 1;
    printf("addy of x is %p\n", &x);

    int y = 2;
    printf("addy of y is %p\n", &y);
    printf("Time to swap some $hit\n");
    printf("x is %i, y is %i\n", x, y);
    //ampersand points to address
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
    return 0;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}