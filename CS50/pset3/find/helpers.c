/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
/* Start Leanar Serch
    // searching algorithm
    for (int i = 0; i < n; i++)
    {
        if (value == values[i])
        {
            return true;
        } 
    }
    return false;
End Leanar Search */

// Start Binary Search

// Define min, max, mid points
int min = 0;
int max = (n - 1);

while (min <= max)
{
    // define middle point
    int mid = ((min + max) / 2);
    
    if (value == values[mid] )
    {
        return true;
    }
    else if (value < values[mid]) // needle at the left
    {
    max = mid -1;
    }
    else if (value > values[mid]) // needle at the right
    {
    min = mid + 1;
    }
}    
// End binary search
// needle not in haystack
return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // implement an O(n^2) sorting algorithm (bubble sort)
        int counter = 1; // initialize counter
        do
        {
            counter = 0;
            for (int i = 0; i < (n-1); i++)
            {

                if (values[i] > values[i+1])
                {
                    // swap values
                    int tmp = values[i];
                    values[i] = values[i+1];
                    values[i+1] = tmp;
                    counter++;
                }                
            }
           
        }
        while (counter > 0);

    return;
}