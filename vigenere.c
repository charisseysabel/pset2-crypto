/*
*
* PSET 2.2 : Vigenere
*
* Encrypts user input using Vigener's Cipher.
*
*
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

 

int main(int argc, string argv[])
{
    if(argv[1] != NULL)
    {        
        //1: Ask for an argument
            //1.1: Validate the argument
            if (argc != 2)
            {
                printf("\nEnter an argument and try again.\n\n");
                return 1;
            }
            
            //1.2: Check if the argument is alphabetical   
            string key = argv[1];            
            for (int x = 0; x < strlen(key); x++)
            {
                if(isalpha(key[x]) == false)
                {
                    printf("\nPlease enter only characters and try again.\n\n");
                    return 1;
                }
                
                if (islower(key[x]) == true)
                {
                    key[x] = toupper(key[x]);
                }                
            }


        //2: Ask the user for a string
        string p = GetString();
        
        int j = 0;

        //int index_alpha[27] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
        //                       16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};        
        
        for(int i = 0; i < strlen(p); i++)
            {
                //Uppercase, lowercase, symbol separation
                if(isupper(p[i]))
                {               
                    int key_conv = toupper(key[j % strlen(key)]) - 'A';
                    int p_up_conv = p[i] - 'A';
                    printf("%c", ((p_up_conv + key_conv) % 26) + 'A');
                    j++;      
                }
                else if(islower(p[i]))
                {
                    int lower_conv = tolower(key[j % strlen(key)]) - 'a';
                    int p_low_conv = p[i] - 'a';
                    printf("%c", ((p_low_conv + lower_conv) % 26) + 'a');
                    j++;
                }
                else
                {
                    printf("%c", p[i]);
                }
             }
             printf("\n");
    }
    else
    {
        printf("Please enter a valid argument\n");
        return 1;
    }
    return 0;
}







