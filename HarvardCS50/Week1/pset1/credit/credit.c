#include <stdio.h>
#include <math.h>
#include <cs50.h>

long number;
int longLength;
int countNumbers(long number);
int checkNumber(long number);
bool luhnAlgo(long number);
int creditCardNumber(long number);
void creditCardCompany(long number);
// Number: c
// VISA
// 123456789
//9
//4003600000000014

int main(void)
{
    number = get_long("enter a credit card number: \n");
    // printf("%li:\n", number);
    countNumbers(number);
    if(checkNumber(number))
    {
        creditCardCompany(number);
    }
    else
    {
        // printf("%p\n", creditCardCompany(number));
        printf("INVALID\n");
    }

    return 0;
}
// return long number length
int countNumbers(long number)
{
    int longLength;
    // if(number == 0)
    // {
    //     longLength = 1;
    // }
    // else 
    // {
    //     do 
    //     {
    //         longLength = 0;
    //         longLength++;
    //         number /= 10;
    //     }
    //     while (number != 0);
    //  }


    //loop through long to get length;
    for (longLength = 0; number != 0;  number /= 10, longLength++);
    
    printf("print length end check: %i\n", longLength);
    return longLength;
}

int checkNumber(long number)
{
    int longLength = countNumbers(number);

    //to return true if all conditions met - longValue is 13, 15 or 16 numbers long and luhnAlgo
    return ((longLength == 13 || longLength == 15 || longLength == 16) && luhnAlgo(number));

}
bool luhnAlgo(long number)
{
    int sum;
    for (int i = 0; number != 0; i++, number /= 10)
    {
        printf("luhns algo incrementing - %i\n", i % 2);
        //remainder of i divded by 2 == 0
        if(i % 2 == 0)
        {
            sum += number % 10;
            printf("digit - %i\n",sum);
        }
        else 
        {
            
            int digit = 2 * (number % 10);
            printf("digit * 2 - %i\n", digit);
            sum += digit / 10 + digit % 10;
            printf("adding digits - %i\n",sum);
        }
    }
    return (sum % 10) == 0;
}

void creditCardCompany(long number)
{
    if((34e13 <= number && 35e13 > number) || (37e13 <= number || 38e13 > number))
    {
        printf("AMEX\n");
    }
    else if((51e14 <= number) && (56e14 > number))
    {
        printf("MASTERCARD\n");
    }
    else if((4e12 <= number && 5e12 > number) || (4e15 <= number && 5e15 > number))
    {
        printf("VISA\n");
    }
    else {
        printf("INVALID\n");
    }
}


