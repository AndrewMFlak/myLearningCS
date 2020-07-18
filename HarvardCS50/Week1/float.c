#include <stdio.h>
#include <cs50.h>
// To run you will need to link the cs50 library
// gcc -lcs50-10.1.0 float.c


int main(void) {
    float price = get_float("What is the price?\n");
    printf("The price is %.4f\n", price * 1.0625);

}