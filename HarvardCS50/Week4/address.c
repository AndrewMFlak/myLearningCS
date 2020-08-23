#include <stdio.h>
#include <cs50.h>
int pointer(void);
int string1(void);

int main(void)
{
    int i = 50;
    // To print out just the variable value;
    // printf("%i\n", i);

    // Ampersand used to point to the physical address in your computer memory using hexadecimal for the location of variable storage;
    // printf("%p\n", &i);

    // Asterisk used to actually go to the physical address in memory
    // printf("%i\n", *&i);


    pointer();

    //used to iterate through string using char and legacy c syntax
    string1();

}

int pointer(void)
{
    int i = 50;

    // asterisk in variable name used to flag a pointer;
    int *p = &i;
    // printf("%p\n", p);

    // asterisk also in call function of variable used to access the actual value stored at the address where we have gone to
    int *q = &i;
    // printf("%i\n", *q);
    
    return 0;

}

//
int string1(void)
{
    char *c = "Timmy";
    //returns address of "T";
    printf("%p\n", c);
    //returns "T";
    printf("%c\n", *c);
    printf("%c\n", *(c + 1));
    printf("%c\n", *(c + 2));
    printf("%c\n", *(c + 3));
    printf("%c\n", *(c + 4));
    printf("%c\n", *(c + 5));
    printf("%c\n", *(c + 6));
    printf("%c\n", *(c + 7));
    printf("%c\n", *(c + 8));
    printf("%c\n", *(c + 9));
    printf("%c\n", *(c + 10));
    return 0;
}


//  '\0' = null terminating character in c