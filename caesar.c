/*
*
* PSET 2.2: Caesar
*
* Encrypts a given string through Caesar Cipher method.
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
    if (argv[1] != NULL)
    {

        int alpha_int[26] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
                            14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};                   

        if (argc != 2)
        {
            return 1;
        }
  
        int key = atoi(argv[1]);
        
        if(key < 0)
        {
            return 1;
        }
            
        string p = GetString();
        
        //iterating through every letter in 'p'
        for (int i = 0; i < strlen(p); i++)
        {
            //Separating upper, lower, and special characters 'p'
            //UPPERCASE
            if (isupper(p[i]))
            {
                
                int upper_minus = p[i] - 65;
                int alpha_index_upper = (upper_minus +  key) % 26;
                
                int x = 0;
                
                while (x != alpha_index_upper)
                {
                    x++;
                }
                printf("%c", alpha_int[x] + 65);
                
            }
            
            //LOWERCASE
            else if (islower(p[i]))
            {
               int lower_minus = p[i] - 97;
               int alpha_index_lower = (lower_minus + key) % 26;
               
               int y = 0;
               
               while (y != alpha_index_lower)
               {
                    y++;
               }
               printf("%c", alpha_int[y] + 97);
            }
            else
            {
                printf("%c", p[i]);
            }
        }
        
        printf("\n");
        return 0;
    }
    else
    {
        printf("Enter a command line argument, please.\n");
        return 1;
    }        
}











