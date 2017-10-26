#include <iostream>
using namespace std;

const int LEN = 5;

void Increment(int *inc);
void IncrementArray(int *inc);

int main()
{
    int i = 9;
    int* pi = &i;

    int iarr[LEN] = {31, 45, 78, 99, -8};
    int* piarr;

    // Do not use the & operator on arrays
    piarr = iarr;                                   // Get the address of the array, or element 0

    cout << "value of i is: " << i << endl;
    cout << "the address of i is: " << &i << endl;
    cout << "value of pi is: " << pi << endl;
    cout << "the address of pi is: " << &pi << endl;

    // Display the value living at pi
    // Dereference operator *
    cout << "value of the address living at pi is: " << *pi << endl;

    i = 10;
    cout << "value of i is: " << i << endl;
    cout << "value of the address living at pi is: " << *pi << endl;

    // Modify value using pointer
    *pi = 11;
    cout << "value of i is: " << i << endl;
    cout << "value of the address living at pi is: " << *pi << endl;

    // Loop over array
    for(int i = 0; i < LEN; i++)
    {
        cout << iarr[i] << endl;
    }

    for(int i = 0; i < LEN; i++)
    {
        cout << *(iarr + i) << endl;
    }

    for(int i = 0; i < LEN; i++)
    {
        cout << *(piarr++) << endl;
    }

    Increment(&i);
    cout << "value of i is: " << i << endl;
    cout << "value of the address living at pi is: " << *pi << endl;

    Increment(pi);
    cout << "value of i is: " << i << endl;
    cout << "value of the address living at pi is: " << *pi << endl;

    // Update all elements of the array
    IncrementArray(iarr);
    for(int i = 0; i < LEN; i++)
    {
        cout << iarr[i] << endl;
    }

    return 0;
}

void Increment(int *inc)
{
    // increment integer
    *inc += 1;
}

void IncrementArray(int *inc)
{
    for(int i = 0; i < LEN; i++)
    {
        // increment integer
        *inc++ += 1;                // points at the element of the array
    }
}