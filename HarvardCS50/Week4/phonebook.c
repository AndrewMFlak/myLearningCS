#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // FILE data type 
    // fopen takes two aguments.  The first argument is the file name..... the second argument is the action "a" for append the phonebook.csv file.....read ("r") and w ("w") also available
    FILE *file = fopen("phonebook.csv", "a");
    char *name = get_string("Name: \n");
    char *number = get_string("Number: \n");
    
    //print file with name and number delimitted by comma;
    fprintf(file, "%s,%s\n",name , number);
    
    //close file
    fclose(file);

}