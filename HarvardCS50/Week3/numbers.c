#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // int i[6];
    //
    //staticly initialized array;
    int i[6] = {12, 101, 100012, 23, 45, 710};
    // i[0] = 12;
    // i[1] = 101;
    // i[2] = 100012;
    // i[3] = 23;
    // i[4] = 45;
    // i[5] = 710;
    for (int e = 0; e < 6; e++)
    {
        if (i[e] == 101)
        {
            printf("found %i\n", i[e]);
        }
        printf("%i\n",i[e]);
    }
    printf("not found\n");
    return 0;
}