#include <stdio.h>
#include <string.h>
#include <cs50.h>


//custom data type person created as per below
typedef struct
{
    string name;
    string number;
}
person;


int main(void)
{
    // string names[4] = {"Mitchell", "Andrew", "Alice", "Florence"};
    // string numbers[4] = {"407-432-2412", "914-466-4366", "221-212-5890", "542-912-0100"};
    person people[4];
    people[0].name = "Mitchell";
    people[0].number = "407-432-2441";
    people[1].name = "Pete";
    people[1].number = "512-112-0912";
    people[2].name = "Gentry";
    people[2].number = "417-212-0912";
    people[3].name = "Mitchell";
    people[3].number = "914-466-4366";

    for (int i = 0; i < 4; i++)
    {
        if(strcmp(people[i].name, "Mitchell") == 0)
        {
            printf("%s\n",people[i].number);
            return 0;

        }
    }
    printf("not found\n");
    return 1;
}