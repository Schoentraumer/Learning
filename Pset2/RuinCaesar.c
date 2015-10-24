/*
This program is a Caesar Cipher.
I am Daniel of Asguard.
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
string cipher;  //this is a placeholder for the ciphered message.
    if (argc != 2) //this is meant to trigger if you don't enter the right call. So 
    {
        printf("Please enter the cipher key when you call the program, such as './CaesarCipher 7'.\n"); //
        return 1;
    }

    int key = atoi(argv[1]);
    if (key <= 0)
    {
        printf("The key needs to be a non-negative number. \n");
        return 1;
    }
    
    do
    {
        printf("Please enter the message you would like to have converted, please. \n");
        cipher = GetString(); 
    }
    while (cipher == NULL);
    

    for (int i = 0, n = strlen(cipher); i < n; i++) //this is so the code knows to change only the characters in the sting cipher.
        {
            if (isupper(cipher[i]))
                {
                    printf("%c", (cipher[i] + key) % 26);
                }
            else if (islower(cipher[i]))
                {
                    printf("%c", (cipher[i] + key) % 26);
                }
        }

    return 0;
