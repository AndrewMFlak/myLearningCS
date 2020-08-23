#include <stdio.h>

int main(int argc, char *argv[])
{
    //ensure user ran program with two words at prompt;
    if(argc != 2)
    {
        return 1;
    }

    //open read file;
    FILE *file = fopen(argv[1], "r");
    if(file == NULL)
    {
        return 1;
    }
    //read 3 bytes from file.  3 * 8 bits = 24 bits;
    //unsigned just specifies a number from 0 to 255;
    unsigned char bytes[3];
    fread(bytes, 3, 1, file); 

    //check if bytes are Oxff Oxdf Oxff
    if(bytes[0] == 0xff && bytes[1] == 0xdf && bytes[2] == 0xff)
    {
        printf("Maybe\n");
    }
    else
    {
        printf("No\n");
    }
    
}