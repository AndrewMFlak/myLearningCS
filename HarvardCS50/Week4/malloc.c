#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");
    //memory allocate from s to t;
    char *t = malloc((int) s + 1);

    //strcpy(s, t); is a useful substitue for the loop we are executing here
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        t[i] = s[i];
    }
    t[0] = toupper(t[0]);
    printf("%s\n", s);
    printf("%s\n", t);

    // free must be used to deallocate the malloc memory allocation
    free(t);
}