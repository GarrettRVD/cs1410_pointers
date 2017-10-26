//
// Created by GRees on 10/26/2017.
//

#include "Order.h"

/*!
 * Order the two numbers.
 * @param num1 : First number
 * @param num2 : Second number
 */
void Sort2Num(int *num1, int *num2)
{
    int temp;
    if(*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}

/*!
 * Sort a list of integers. Using Bubble sort.
 * @param ptr : Address of the array
 * @param n   : How many elements
 */
void BSort(int *ptr, int n)
{
    for(int j = 0; j < n - 1; j++)                  // outer loop
    {
        for(int k = j + 1; k < n; k++)              // inner loop
        {
            // Sort the two elements
            Sort2Num(ptr + j, ptr + k);             // order two numbers
        }
    }
}
