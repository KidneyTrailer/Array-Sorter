#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>


class Utilities
{
    public:
        Utilities();
        void generateArray(int[], int);
        long long getCurrentTimeMillis();

    protected:

    private:
};

struct Timer
{
    long long start;
    Utilities utils;

    Timer()
    {
        start = utils.getCurrentTimeMillis();
    }

    ~Timer()
    /*
    * Timer destructor calculates and prints the time that has passed since
    * its object was initiated.
    */
    {
        long long stop = utils.getCurrentTimeMillis();
        std::cout << "Operation took " << (stop - start) << "ms to complete.\n";
    }

    void lap()
    /*
    * Calculates and prints the time that has elapsed since the Timer object
    * was created, however, the timer will continue until the destructor is called.
    */
    {
        long long elapsed = utils.getCurrentTimeMillis();
        std::cout << (elapsed - start) << "ms have passed since the start of the operation.\n";
    }
};

#endif // UTILITIES_H
