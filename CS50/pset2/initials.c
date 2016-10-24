// include lib
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    // get user input
    string s = GetString();


    int i = 0;

        while (i < strlen(s))
        {
            if (i == 0)  // if first letter, capitalize and print
            {
                printf("%c", toupper(s[i]));
                i++;
            } else if (i != 0 && isspace(s[i])) // if not the firt letter and is a space, capitalize and print the next letter
                {
                printf("%c", toupper(s[i+1]));
                i++;
                } else // not the first letter, not a space, just increment i
                    {
                     i++;  
                    }
        }
        printf("\n");
}



