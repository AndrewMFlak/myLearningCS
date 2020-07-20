#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>
#include <string.h>

float float_a = 9.632598;
float float_b = 2.341;
int a = 10;
int b = 1231;


// Functions
float multiply_Two_Floats(float a, float b);
int add_Two_Ints(int a, int b);
bool valid_triangle(void);


int main(void)
{
    // return multiply_Two_Floats( float_a, float_b);
    // return add_Two_Ints(a , b);
    return valid_triangle();
}

float multiply_Two_Floats(float a, float b)
{
    float c = a * b;
    printf("%.9f\n", c);
    return c;
}
int add_Two_Ints(int a, int b)
{
    printf("%i\n",a + b);
    return a + b;
}

bool valid_triangle(void)
{
    double triangleSide1 = get_float("Please enter the length of side 1: \n");
    double triangleSide2 = get_float("Please enter the length of side 2: \n");
    double triangleSide3 = get_float("Please enter the length of side 3: \n");
    if(triangleSide1 > 0 && triangleSide2 > 0 && triangleSide3 > 0)
    {
        if(((triangleSide1 + triangleSide2) > triangleSide3) && ((triangleSide2 + triangleSide3) > triangleSide3) && ((triangleSide3 + triangleSide1) > triangleSide2))
        {
            bool returnValue = true;
            printf("triangle is valid: true\n");
            return returnValue;
        }
        printf("dude this is not a valid triangle...WTF\n");
        return 0;
    }
    printf("dude this is not a valid triangle...WTF\n");
    return 0;

}