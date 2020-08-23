#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // legacy means of writing string in c
    string r = "emma";
    printf("%s\n", r);
    
    // functional equivalent of using the "string" data type
    char *s = "Emma";
    printf("%p\n", s);

    // first character address is synonymous with char *s;
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);



}