#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
 {
     int i;
     string s = get_string("input string: \n");
     printf("Output: %s\n", s);
     printf("string length: %lu \n", strlen(s));
    //  int n = strlen(s);
    //  for (int i = 0; s[i] != '\0'; i++)
    for (int i = 0, n = strlen(s); i < n; i++)
     {
        //loop through string to output each individual character
        printf("%c", s[i]);
     }
     printf("\n");
 }