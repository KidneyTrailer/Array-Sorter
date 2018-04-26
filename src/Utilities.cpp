#include <chrono>
#include <cstdlib>
#include <time.h>
#include "Utilities.h"

Utilities::Utilities()
/*
* Utilities constructor. Sets up
* random by setting the seed equal to
* the current time.
*/
{
    srand(time(0));
}

void Utilities::generateArray(int a[], int n)
/*
* Assigns each element in array a[] to a random number.
* n is the length of a[].
*/
{
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;
}

long long Utilities::getCurrentTimeMillis()
/*
* Returns the number of milliseconds that have passed
* since midnight on January 1, 1970. Useful for timing
* operation completion times and is utilized by Timer.
*/
{
    return (std::chrono::duration_cast<std::chrono::milliseconds>
            (std::chrono::system_clock::now().time_since_epoch()).count());
}
