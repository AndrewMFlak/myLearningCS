#include<stdio.h>
#include "cs50.h"

int main(void) {
    string answer = get_string("What is your Name?\n");
    //printf (print formatted to return "Hello, " and a String which will be followed by our get_string value);
    printf("Hello,  %s\n", answer);
}

// to compile file and link the necessary files like cs50 we must include -lcs50 as per the below
// ex. clang -o string getName.c -lcs50