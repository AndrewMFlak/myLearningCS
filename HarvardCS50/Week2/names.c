#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // string name1 = "Andrew";
    // string name2 = "Pete";
    // string name3 = "Dom";
    // string name4 = "Kara";

    string name[4];
    name[0] = "Andrew";
    name[1] = "Pete";
    name[2] = "Dom";
    name[3] = "Kara";
    printf("%s\n", name[0]);
    // you can also access string via an indexed series of characters
    // ex
    printf("%c%c%c%c%c%c%i\n", name[0][0], name[0][1], name[0][2], name[0][3], name[0][4], name[0][5], name[0][6]);
}