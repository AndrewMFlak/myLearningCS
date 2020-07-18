#include <stdio.h>
#include <cs50.h>

// void if NO command line arguments are taken in ELSE int argc, string argv[]

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n",argv[1]);
    }
    else
    {
        printf("Nada\n");
    }
    
}