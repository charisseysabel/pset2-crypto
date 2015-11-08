/**
*
*PSET 2: INITIALS
*
*Prints out the initials of a name.
*
*/

#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //takes an input from the user
    string name = GetString();
        
    if (name != NULL)
    {
        for (int i = 0, n = strlen(name); i < n; i++)
        {
           //Capitalizes the first letter of the input
           if(i == 0)
           {
                printf("%c", toupper(name[i]));  
           }
           else if(name[i] == 32)
           {
                i++;
                printf("%c", toupper(name[i]));
           }

        }
        
        printf("\n");
    }

}
