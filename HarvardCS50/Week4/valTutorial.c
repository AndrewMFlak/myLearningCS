#include <stdio.h>

void f(void)
{
    // allocates enough memory for ten integers and stores in a pointer, i which is then placed in an array;
    // sizeof is a dynamic function used to return the memory usage of a specific data type
    int *i = malloc(10 * sizeof(int));
    // misc array below should be set to 9 rather than 10 as this starts at 0 not 1;
    i[10] = 0;
}

int main(void)
{
    f();
    return 0;
}