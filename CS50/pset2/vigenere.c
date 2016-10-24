// include lib
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{

//check that command line has 2 arguments, return 1 if not
   while (argc != 2) {
        printf("Usage: ./vigenere <keyword>\n");
        return 1;
    }
// check that keyword is letters only
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
        printf("Use letters only for keyword.\n"); 
        return 1;
        }
    }

// get plaintext
string p = GetString();

// declare variables
int c; // ciphered char
string k = argv[1]; // keyword
int np = strlen(p); // length of plaintext
int nk = strlen(k); // length of keyword
int i = 0; // position of plain char: p[i]
int j = 0; // position of keyword char: k[j]

// the loop 
    do
    {
        // start enciphering
        if (isalpha(p[i])) // for alphabets
        {
        k[j] = toupper(k[j]); // prepare the keyword

            if isupper(p[i])  //for upper case letters
            {
            c = ((int) p[i] - 65 + (int) k[j] - 65) % 26 + 65;
            i++;
            j++;
            } else  // for lower case letters
            {
            c = ((int) p[i] - 97 + (int) k[j]- 65) % 26 + 97;
            i++;
            j++;
            }
        } else  // print as is for non-letters
            {
            c = ((int) p[i]);
            i++;
            }
        printf("%c", (char) c);
        
        // check keyword counter, reset if needed
        if (j == nk)
        {
        j = 0;
        }
    } while (i < np);

    printf("\n"); // new line
    return 0;
}