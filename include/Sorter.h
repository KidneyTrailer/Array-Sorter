#ifndef SORTER_H
#define SORTER_H


class Sorter
{
    public:
        void mergeSort(int[], int);
        void selSort(int[], int);

    protected:

    private:
        int findMin(int[], int, int);
        void mergeArrays(int[], int, int[], int, int[]);
};

#endif // SORTER_H
