#ifndef QUICKSORT_H
#define QUICKSORT_H
#include<string>
#include<sstream>

 using namespace std;

class QuickSort
{
    public:
        QuickSort();
        virtual ~QuickSort();
        void quicksort(string*, int, int );
    protected:
    private:
        int partition(string*, int, int);
};

#endif // QUICKSORT_H
