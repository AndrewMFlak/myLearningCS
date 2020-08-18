#include <cs50.h>
#include <stdio.h>

int n;
int collatz(int n);

int main(void)
{
    n = 2;
    collatz(n);

}
int collatz(n)
{
    if(n == 1)
    {
        //base case to return 0;
        printf("%i\n", 0);
        return 0;
    }
    else if(n % 2 == 0)
    {
        //even case to return number of steps to get back to 1.
        printf("%i\n",  1 + (collatz(n / 2)));
        return 1 + (collatz(n / 2));
    }
    else
    {
        //odd case to return odd numbers;
        printf("%i\n",1 + (collatz(3 * n + 1)));
        return 1 + (collatz(3 * n + 1));
    }
}