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
    //base case is being used to prevent this function from going n forever.
    if(h == 0)
    {
        return;
    }
    //recursive step
    draw(h - 1);
    for (int z = 0; z < h; z++)
    {
        printf("#");
    }
    
    printf("\n");
    
    return 0;
}