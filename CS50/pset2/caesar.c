// include lib
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
//check that command line has 2 arguments, return 1 if not
   while (argc != 2) {
        printf("Usage: ./ceasar <key>\n");
        return 1;
    }
    
// convert argv[1] to int
    int k = atoi(argv[1]);

// get plaintext
    string plain = GetString();

// Start Ciphering
    int cipher;
    for (int i = 0, n = strlen(plain); i < n; i++) {

       if (isalpha(plain[i]) && isupper(plain[i]))  //for upper case letters
       
       {
          cipher = ((((int) plain[i] - 65) + k) % 26) + 65;

       } else if (isalpha(plain[i]) && islower(plain[i])) // for lower case letters
            {
               cipher = ((((int) plain[i] - 97) + k) % 26) + 97;
                
            } else
                {
               cipher = (int) plain[i]; // don not change for non letters
                }
     printf("%c", (char) cipher);   // print ciphered text char by char         
    }
    
    printf("\n"); // print extra line
    return 0;
}