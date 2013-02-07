#include "Sorts.h"
#include <cstring>
#include <cstdlib>

using namespace std;

Sorts::Sorts()
{
    //ctor
}

Sorts::~Sorts()
{
    //dtor
}
void Sorts::bubble_sort(string* passwords, int n)
{
    string temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if (_strcmpi(passwords[j].c_str(), passwords[j+1].c_str()) > 0)
            {
                temp = passwords[j];
                passwords[j] = passwords[j+1];
                passwords[j+1] = temp;
            }
        }
    }
}

void Sorts::insertion_sort(string passwords[], int n)
{
    for(int i =0; i<n; i++)
    {
        string key = passwords[i];
        int j = i-1;

        while(j>=0&& _strcmpi(passwords[j].c_str(), key.c_str()) > 0)
        {
            passwords[j+1]=passwords[j];
            j = j-1;
        }
        passwords[j+1]=key;
    }
}

