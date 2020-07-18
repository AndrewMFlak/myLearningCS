#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void) 
{
    string s = get_string("input string: \n");
    // printf("string input: %s",s);
    for (int i = 0, n = strlen(s); i < n; i++ )
    {
        // basically a manual to upper formula
        // if(s[i] >= 'a' && s[i] <= 'z')
        // {
        //     //convert to upper case using ascii
            
        //     printf("%c", s[i] - 32);
        // }
        // else 
        // {
        //     printf("%c", s[i]);
        // }
        printf("%c",toupper(s[i]));
    }
    printf("\n");
}