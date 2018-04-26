#include <algorithm>
#include "Sorter.h"

int Sorter::findMin(int arr[], int n, int startIndex)
/*
* Finds the minimum element in a sub-array
* from the start element to the end of an array, arr[].
* n is the length of arr, startIndex is the index to start with.
*/
{
    int minIndex = startIndex;
    for (int i = startIndex; i < n; i++)
        if (arr[i] < arr[minIndex]) minIndex = i;
    return minIndex;
}

void Sorter::mergeArrays(int L[], int nL, int R[], int nR, int A[])
/*
* Merges together two arrays, L[] and R[], into a single array A[].
* nL is the length of L[], and nR is the length of R[].
*/
{
    int i, j, k;
    i = j = k = 0;
    while (i < nL && j < nR)
    {
        if (L[i] < R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < nL)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < nR)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void Sorter::mergeSort(int arr[], int n)
/*
* Merge sorts array arr[] by recursively splitting it in half.
* Then it reassembles the array in order from least to greatest
* using mergeArrays().
* arr[] is the array to be sorted and n is its length.
*/
{
    if (n < 2) return;
    int mid = n / 2;
    int L[mid];
    int R[n - mid];
    for (int i = 0; i < mid; i++)
        L[i] = arr[i];
    for (int i = mid; i < n; i++)
        R[i - mid] = arr[i];
    mergeSort(L, mid);
    mergeSort(R, n - mid);
    mergeArrays(L, mid, R, n - mid, arr);
}

void Sorter::selSort(int arr[], int n)
/*
* Sorts an array by iterating through each element in array, arr[].
* It then swaps that item with the smallest element left in the array
* using the findMin() function.
* arr[] is the array to be sorted and n is its length.
*/
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = findMin(arr, n, i);
        std::swap(arr[i], arr[minIndex]);
    }
}
