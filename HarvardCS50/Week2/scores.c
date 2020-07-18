#include <stdio.h>
#include <cs50.h>

//constant global variable definition
// const int N = 3;

int main(void) {
    // int placeholder = i;
    // int scores[N];
    // int score1 = 72;
    // scores[0] = 72;
    // int score2 = 88;
    // scores[1] = 88;
    // int score3 = 98;
    // scores[2] = 98;
    // int score4 = 12;
    // scores[3] = 12;
    // float average = (score1 + score2 + score3 + score4)/4;
    // float average = (scores[0] + scores[1] + scores[2] + scores[3]);
    int length;
    int array;
    float getSomeAverage(int length, int array[]);


    int n = get_int("How many assignments: \n");
    int scores[n];
    int sum;

    //while i is less than n
    for(int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: \n", i + 1);
        sum += scores[i];

    }
    // float average = getAverage( n , scores );

    // float average = sum/n;
    printf("My Average is: %.2f\n", getSomeAverage( n , scores ));
}

float getSomeAverage(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    //using casting feature in C to modify ints into floats
    return ( (float) sum / (float) length);
}