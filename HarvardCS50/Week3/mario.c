#include <stdio.h>
#include <cs50.h>
int h;
int draw(int h);

int main(void)
{
    h = get_int("please provide pyramid height\n");
    draw(h);
    return 0;
}

int draw(int h)
{
    for (int i = 0; i < h; i++)
    {
        for (int z = 0; z < i + 1; z++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}