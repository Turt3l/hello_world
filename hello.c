#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2 && isdigit(*argv[1]))
    {

        //converts argv to int
        int key = atoi(argv[1]);
        //plain text
        string plaintext = "hello world!";
        printf("original text: %s", plaintext);
        printf("\n");
        printf("ciphertext: "); // print out cipher
        for (int i = 0, n = strlen(plaintext) ; i < n; i++)
        {
            //if text contains a - z
            if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                printf("%c", (((plaintext[i] - 'a') + key) % 26) + 'a');
            }
            //if text contains A - Z
            else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                printf("%c", (((plaintext[i] - 'A') + key) % 26) + 'A');
            }
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        //returns 0, because of correct input
        printf("\n");
        return 0;
    }
    //returns 1, because of incorrect input
    else
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

}
