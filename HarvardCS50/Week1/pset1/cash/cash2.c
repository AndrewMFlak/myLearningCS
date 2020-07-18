#include <stdio.h>
#include <cs50.h>
#include <math.h>

int quarter = 25;
int dime = 10;
int nickel = 5;
int penny = 1;
int totalCoinCount = 0;
float returnCount = 0.00;
int getConvertFloat(void);
int greedyLogic(float n);


int main(void)
{   
    int totalCoinCount = 0;
    float n = get_float("How much change is owed? \n");
    if (n > 0) 
    {
        greedyLogic(n);     
    } 
    else 
    {
        getConvertFloat();
        greedyLogic(n);
    }
}

int getConvertFloat(void) 
{
    float n = get_float("How much change is owed? \n");
    // int value = n * 100;
    // printf("%i \n",value);
    return n;
}

int greedyLogic(float n)
{
    int value = round(n * 100);
    int placeholder;
    int totalQuarter;
    int totalDime;
    int totalNickel;
    int totalPenny;
    // printf("%i \n",value);
    if (value / quarter >= 1) 
    {
        totalQuarter = value / quarter;
        totalCoinCount += totalQuarter;
        // printf("quarter: %i\n",totalQuarter);
        value -= (totalQuarter * quarter);

        totalDime = value / dime;
        totalCoinCount += totalDime;
        // printf("dime: %i\n",totalDime);
        value -= (totalDime * dime);

        totalNickel = value / nickel;
        totalCoinCount += totalNickel;
        // printf("nickle: %i\n",totalNickel);
        value -= (totalNickel * nickel);

        totalPenny = value / penny;
        totalCoinCount += totalPenny;
        // printf("penny: %i\n",totalPenny);
        value -= (totalPenny * penny);

        // float returnCount = totalCoinCount / 100;
        printf("%i\n", totalCoinCount);
        return totalCoinCount;
    }
    else if (value / dime >= 1)
    {
        totalDime = value / dime;
        totalCoinCount += totalDime;
        // printf("dime: %i\n",totalDime);
        value -= (totalDime * dime);

        totalNickel = value / nickel;
        totalCoinCount += totalNickel;
        // printf("nickle: %i\n",totalNickel);
        value -= (totalNickel * nickel);

        totalPenny = value / penny;
        totalCoinCount += totalPenny;
        // printf("penny: %i\n",totalPenny);
        value -= (totalPenny * penny);

        // float returnCount = totalCoinCount / 100;
        printf("%i\n", totalCoinCount);
        return totalCoinCount;
    } 
    else if (value / nickel >= 1)
    {
        totalNickel = value / nickel;
        totalCoinCount += totalNickel;
        // printf("nickle: %i\n",totalNickel);
        value -= (totalNickel * nickel);

        totalPenny = value / penny;
        totalCoinCount += totalPenny;
        // printf("penny: %i\n",totalPenny);
        value -= (totalPenny * penny);

        // float returnCount = totalCoinCount / 100;
        printf("%i\n", totalCoinCount);
        return totalCoinCount;
    } 
    else if (value / penny >= 1)
    {
        totalPenny = value / penny;
        totalCoinCount += totalPenny;
        // printf("penny: %i\n",totalPenny);
        value -= (totalPenny * penny);

        // float returnCount = totalCoinCount / 100;
        printf("%i\n", totalCoinCount);
        return totalCoinCount;
    } 
    else
    {
        return 0;
    }
}
