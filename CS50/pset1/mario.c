#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    // get the user input ( the height of pyramid)
    int height;
    do {
        printf("height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);

    for (int i = 1; i <= height; i++) {
        
       for (int j = height - i; j >= 1; j--) {
           printf(" ");
       }
           for (int k = 1; k <= i; k++) {
              if (k == 1) {
                  
                  printf("##");
              }
              else {
                   
                  printf("#");
               }


            }
                 printf("\n"); 
    }
       
}