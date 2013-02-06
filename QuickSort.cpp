#include "QuickSort.h"
#include<string>
#include<sstream>

QuickSort::QuickSort()
{
    //ctor
}

QuickSort::~QuickSort()
{
    //dtor
}

int partition(string* passwords, int start, int n)
{
    string pivot = passwords[n];

    while ( start < n )
    {
        while ( passwords[start] < pivot )
            start++;

        while ( passwords[n] > pivot )
            n--;

        if ( passwords[start] == passwords[n] )
            start++;
        else if ( start < n )
        {
            string tmp = passwords[start];
            passwords[start] = passwords[n];
            passwords[n] = tmp;
        }
    }

    return n;
}

void quicksort(string* passwords, int start, int n)
{
    if ( start < n )
    {
        int x = partition(passwords, start, n);
        quicksort(passwords, start, x-1);
        quicksort(passwords, x+1, n);
    }
}
