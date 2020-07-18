#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n = get_int("n:  ");
    if(n%2==0) {
        printf("n is an even number\n");
    } else {
        printf("n is an odd number\n");
    }
}
