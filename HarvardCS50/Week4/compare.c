#include <stdio.h>
#include <cs50.h>
char someInput;
char getString(char someInput);



int main(void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");
    if (i == j) 
    {
        printf("same!\n");
    }
    else
    {
        printf("different!\n");
    }
    return 0;

}



char getString(char someInput)
{
    printf("How do you write a string function like in cs50?");
    return 0;
}