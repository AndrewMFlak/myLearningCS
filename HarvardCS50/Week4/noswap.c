#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    //arbitrary numbers here to demonstrate swap
    int x = 1;
    int y = 2;
    //print x and y prior to swaping variables via swap function;
    printf("x is %i, y is %i\n", x, y);
    //x and y used by swap function are copies of the local variables here so when we run this function as coded per the below it will have no effect;
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
    return 0;
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}