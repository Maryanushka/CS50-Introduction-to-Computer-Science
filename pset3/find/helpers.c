/**
 * helpers.c
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
    if (value < 0)
    {
        return false;
    }
    else
    {
        int first = values[0];
        int last = values[n - 1];

        while (first <= last)
        {
            int mid = (first + last) / 2;
            if (mid == value)
            {
                return true;
            }
            else if (mid < value)
            {
                first = mid + 1;
            }
            else  if (mid > value)
            {
                last = mid - 1;
            }
        }
    }

    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int buff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (values[j] < values[j - 1])
            {
                buff = values[j - 1];
                values[j - 1] = values[j];
                values[j] = buff;
            }
        }
    }

}
