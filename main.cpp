#include <iostream>
#include "Sorter.h"
#include "Utilities.h"

void printArray(int[], int);

int main()
{
    Sorter s;
    Timer timer;
    Utilities u;
    int len = 20;
    int t[len];
    u.generateArray(t, len);
    s.mergeSort(t, len);
    printArray(t, len);
    return 0;
}

void printArray(int arr[], int n)
/*
* Prints out an array in groups of 10 elements per line.
* arr[] is the array to be printed, and n is its length.
*/
{
    int counter = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0 || counter < 10)
        {
            std::cout << arr[i] << ", ";
            counter++;
        }
        else
        {
            std::cout << arr[i] << "\n";
            counter = 1;
        }
    }
    std::cout << arr[n - 1] << "\n";
}
