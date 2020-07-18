#include <stdio.h>
#include <cs50.h>

int inversePyramid(int response);

int printSpace(void);

int main(void)
{
    //user response used to populate height of mario pyramid
    int response = get_int("Height: ");

    if (response > 0 && response < 9)
    {
        inversePyramid(response);
    }
    else
    {
        inversePyramid(response);
    }
    return 0;
}
//function for printing 
int printSpace(void) 
{
    printf("  ");
    return 0;
}
// pyramid printing function
int inversePyramid(int response)
{
    for (int i = 0; i < response; i++)
    {
        //first width loop used to iterate blanks
        for (int b1 = 0; b1 < response - i - 1; b1++)
        {
            if (b1 <= response - i - 1)
            {
                printf(" ");
            }
        }
        //the second loop used to populate mario blocks
        for (int j = 0; j < response; j++)
        {
            if (j <= i)
            {
                printf("#");
            }
        }
        //function used to print blank spaces
        printSpace();

        for (int j2 = 0; j2 < response; j2++)
        {
            if(j2 <= i)
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}
