#include <stdio.h>
// #include "cs50.h"
#include "cs50.h"

int main(void) {
    int age = get_int("Whats your age?\n");
    int days = age * 365;
    printf("You are at least %i days old!\n",days);
}
