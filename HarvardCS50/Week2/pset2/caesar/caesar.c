#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int k = 0;
int convertInput(int k);
string encryptInput(string userInput, int k);
string cipherText;


int main(int argc, string argv[])
{
    // check that a valid command line argument has been supplied
    if (argc != 2)
    {
        printf("Please enter a positive integer as a command line argument\n");
        return 1;
    }
    else
    {
        string checkString = argv[1];
        for(int i = 0;i<strlen(checkString);i++)
        {
            if(isdigit(checkString[i]) == 0)
            {
                printf("%c\n",checkString[i]);
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        //atoi used to convert integer to string
        int k = atoi(checkString);
        //check and validate command line input
        if(k < 0)
        {
            // if command line argument is not valid exit out by returning 1;
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            // if command line argument is valid proceed with workflow
            string userInput = get_string("Please input your message for encryption. \n");
            printf("plaintext:%s\n",userInput);

            printf("ciphertext:");
            // convertInput(k);
            encryptInput(userInput, convertInput(k));

            return 0;
        }
    }

}

int convertInput(int k)
{
    if (k > 26)
    {
        // while (k > 26)
        // {
        k = k % 26;
        return k;
        // }
        // printf("int is actually greater than 26, remainder returned: \n");
        printf("converted key value %i ;\n",k);
    }
    else
    {
        // printf("int is not greater than 26: \n");
        // printf("%i ;\n",k);
        return k;
    }
}

string encryptInput(string userInput, int k)
{
    printf("entry: %i\n", k);
    char cipherText[strlen(userInput)];
    for (int i = 0, n = strlen(userInput); i < n; i++ )
    {
        if ( isupper(userInput[i]) != 0)
        {
            if (((int) userInput[i] + k) > 90)
            {
                // printf("1. %i\n",(int) userInput[i]);

                // printf("1. %i\n", k);

                // char placeholder = ((int) userInput[i] + k) + 64;

                char placeholder = ((int) userInput[i] + k) + 64;
                printf("%c", (char) placeholder);
                cipherText[i] = (char) placeholder;
            }
            else
            {
                // printf("2. %i\n",(int) userInput[i]);

                // printf("2. %i\n", k);
                char placeholder = ((int) userInput[i] + k);
                printf("%c", (char) placeholder);
                cipherText[i] = (char) placeholder;
            }
        }
        else if ( islower(userInput[i]) != 0)
        {
            if (((int) userInput[i] + k) > 122)
            {
                // printf("3. %i\n",(int) userInput[i]);

                // printf("3. %i\n", k);
                // char placeholder = ((int) userInput[i] + k) + 96;

                char placeholder = ((int) userInput[i] + k) - 26;
                printf("%c", (char) placeholder);
                cipherText[i] = (char) placeholder;
            }
            else
            {
                // char  placeholder = ((int) userInput[i] + k % 26);
                // printf("4. %i\n",(int) userInput[i]);
                // printf("4. %i\n", k);
                char placeholder = ((int) userInput[i] + k);
                printf("%c", (char) placeholder);
                cipherText[i] = (char) placeholder;
            }
        }
        else {
            char placeholder = userInput[i];
            printf("%c", (char) placeholder);
            cipherText[i] = (char) placeholder;
        }
    }
    printf("\n");
    return 0;
}
