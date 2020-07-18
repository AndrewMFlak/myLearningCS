#include<stdio.h>
#include "cs50.h"

int main(void) {
    int counter = 0;
    int target = 100;
    while(counter<target) {
        // string answer = get_string("what is the question\n");
        counter = counter + 1;
        printf("%i",counter);
    }
    printf("countertest is working\n");
}