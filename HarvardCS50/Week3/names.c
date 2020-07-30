#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[4] = {"Alice", "Amy", "Andrew", "Mitchell"};
    for (int i = 0; i < 4; i++)
    {
        if(strcmp(names[i],"Alice") == 0)
        {
            printf("found %s\n",names[i]);
            return 0;
        }
        printf("%s\n",names[i]);
    }
    printf("not found\n");
    return 1;
}