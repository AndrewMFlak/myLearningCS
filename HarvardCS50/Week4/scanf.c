#include <stdio.h>
int main(void)
{
    int x = 0;
    printf("x: \n");
    // scanf used to record a user input.  Ampersand must be used on scanf to point out the variable address to successfully overwrite data at that location;
    scanf("%i\n", &x);
    printf("%i\n", x);

}