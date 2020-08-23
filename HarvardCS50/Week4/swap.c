#include <stdio.h>



void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    return 0;
}
int main(void)
{
    int a = 0;
    int b = 0;
    
    swap(a, b); 
    
    return 0;
}