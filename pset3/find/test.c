/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 #*/
#include <math.h>
#include <cs50.h>
#include <stdio.h>
//#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
int search(int value, int values[], int n);
//int sort(int values[], int n);

int main()
{

    int n = 4;
    int values[] = {25,26,27,29};
	int value = 28;
    int buff = 0;
    for (int i = 0; i < n - 1; i++) //
	{
		// вложенный цикл проходит от четвертого элемента
		// до первого, находит с помощью if самое "легкое" значение,
		// сравнивая соседние пары элементов,
		// и поднимает его в нулевую ячейку массива
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
	search(value, values, n);

    // for(int i = 0; i < n ; i++){
    //     printf("Sorting: %i\n", values[i]);
    // }
   // printf ("Sorting: %i", values);
//    search(value, values, n);


}

int search(int value, int values[], int n)
{
    if (value > 0)
    {

        int first = values[0];
        int last = values[n-1];
        //int mid = (first + last) / 2;
        while (first <= last)
        {
        	int mid = (first + last) / 2;
            if (mid == value)
            {
                return printf("Youte num is: %i\n", value);
            }
            else if (mid < value)
            {
                first = mid - 1;
            }
            else  if (mid > value)
            {
                last = mid + 1;
            }
            else
            {
                return false;
            }

        }
    }
    else
    {
        return false;
    }
    return value;
}

/**
 * Sorts array of n values.
 */
// int sort(int values[], int n)
// {
//     int i, j;
//     bool temp;
//     for (i = 0; i < n-1; i++)
//     {
//         for(i = 1; i < n; ++i)
//         {
//             for(j = 0; j < (n-i); ++j)
//             {
//                 if(values[j] > values[j+1])
//                 {
//                     temp = values[j];
//                     values[j] = values[j+1];
//                     values[j+1] = temp;
//                 }
//             }
//         }

//     }
//     return  1;

// }
