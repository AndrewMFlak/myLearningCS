#include <stdio.h>
#include <cs50.h>


int arrSample[1000];
int main(void)
{
    for (int i = 0; i < 1000; i++)
    {
        int e = 0;
        while(e < 1000)
        {
            arrSample[e] = e;
            e++;
        }
        printf("%i\n",arrSample[i]);
    }
}