#include "InsertionSort.h"
#include<string>
#include<sstream>

InsertionSort::InsertionSort()
{
    //ctor
}

InsertionSort::~InsertionSort()
{
    //dtor
}


void InsertionSort::insertion_sort(string passwords[], int n)
{
    for(int i =0; i<n; i++)
    {
        string key = passwords[i];
        int j = i-1;

        while(j>=0&&passwords[j]>key)
        {
            passwords[j+1]=passwords[j];
            j = j-1;
        }
        passwords[j+1]=key;
    }
}
