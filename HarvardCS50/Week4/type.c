#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
int main(void)
{
    char *s = get_string("s: ");

    char *t = s;

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}




// moral of the story here:
// both s and t here are both pointing at the same exact 