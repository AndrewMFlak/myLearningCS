#include <stdio.h>
#include <cs50.h>
#include <math.h>

// supporting variables

float quarter = 0.25;
float dime = 0.10;
float nickel = 0.05;
float penny = 0.01;
int totalCoinCount = 0;

// supporting functions

int getQuarter(float n, int totalCoinCount);
int getDime(float n, int totalCoinCount);
int getNickel(float n, int totalCoinCount);
int getPenny(float n, int totalCoinCount);
int greedyLogic(float n);

// main logic function which contains event ex "when clicked" via scratch

int main(void)
{
    //capture user input as a float data type

    float n = get_float("How Much Change is Owed? :\n");
    int value = roundf(n) * 100;
    // user input validation used to capture only positive float

    if(n > 0)
    {
        
        greedyLogic(n);
    } else {
        float n = get_float("How Much Change is Owed? :\n");
        greedyLogic(n);
    }
    return 0;
}
// Supporting functions

int getQuarter(float n, int totalCoinCount)
{
    int n2 = (n / 0.25);
    totalCoinCount += n2;
    printf("0.25 - %i\n", n2);
    n = n - (n2 * 0.25);

    //declaration of return variable

    int quarterCount = n2;

    // printf("remainder 0.25 - %.2f\n", n);

    getDime(n, totalCoinCount);
    return quarterCount;
}

int getDime(float n, int totalCoinCount)
{
    
    int n3 = (n / 0.10);
    totalCoinCount += n3;
    printf("0.10 - %i\n", n3);
    n = n - (n3 * 0.10);

    //declaration of return variable

    int dimeCount = n3;

    // printf("remainder 0.10 - %.2f\n", n);

    getNickel(n, totalCoinCount);
    return dimeCount;
}

int getNickel(float n, int totalCoinCount)
{
    int n4 = (n / nickel);
    totalCoinCount += n4;
    printf("0.05 - %i\n", n4);
    n = n - (n4 * 0.05);

    //declaration of return variable

    int nickelCount = n4;

    printf("remainder 0.05 - %.2f\n", n);
    printf("sanity check: %.2f\n", n * 100);
    getPenny(n, totalCoinCount);
    return nickelCount;
}

int getPenny(float n, int totalCoinCount)
{
    float n5 = (n * 100.00);
    printf("n5: %.2f\n",n5);
    int placeholder = n5;
    totalCoinCount += placeholder;

    printf("0.01 - %.0f\n", n * 100);
    // totalCoinCount = totalCoinCount + (n * 100);
    n = n - ((n * 100) * 0.01);

    //declaration of return variable;

    int pennyCount;
    // printf("remainder 0.01 - %.2f\n", n);

    printf("%i\n",totalCoinCount);
    return pennyCount;

}
// greedy function logic

int greedyLogic(float n)
{
    if (n / quarter >= 1)
    {
        getQuarter(n, totalCoinCount);
    }
    else if (n / dime >= 1)
    {
        getDime(n, totalCoinCount);
    }
    else if (n / nickel >= 1)
    {
        getNickel(n, totalCoinCount);
    }
    else if (n / penny >= 1)
    {
        getPenny(n, totalCoinCount);
    }
    else 
    {
        return 0;
    }
    return 0;
}