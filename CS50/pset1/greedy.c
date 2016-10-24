#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void) {
    
// get the user input
    float change;
    do {
        printf("O hai! How much change is owed?\n");
        change = GetFloat();
    }
    while (change < 0 );
    
// Convert to cents (integer) and rounding
        change = round(change * 100);

// set coins counter
    int coins = 0;

// counting quarters
    while (change >= 25) {
        change -= 25;
        coins++;
    }

// counting dimes
    while (change >= 10) {
        change -= 10;
        coins++;
    }

// counting nickels 
    while (change >= 5) {
        change -= 5;
        coins++;
    }

// counting pennies 
    while (change >= 1) {
        change -= 1;
        coins++;
    }


// Print result
    printf("%i\n", coins);
}