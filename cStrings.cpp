//
// Created by GRees on 10/26/2017.
//

#include <iostream>
#include "cStrings.h"
using namespace std;

/*!
 * Display an array of characters, one char at a time
 * @param ptr : Pointer to string or array of chars
 */
void displayStr(const char *ptr)
{
    while(*ptr)                                 // test for null characters
    {
        cout << *ptr++;
    }
}
