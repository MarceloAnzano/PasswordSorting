#include <iostream>
#include <fstream>
#include<string>
#include<sstream>
#include "InsertionSort.h"

using namespace std;

int main()
{
    InsertionSort iSort;
    int c = 0, n=100;
    string passwords[100];
    string line;
    fstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        passwords[c]=line;
        c++;
    }

    //Laman ng Array
    /*for(c = 0; c<n; c++)
    {
        cout<<passwords[c]<<endl;
    }*/

    cout<<"\n\n\nSorting\n";
    iSort.insertion_sort(passwords, n);

    //Laman ng Sorted Array
    for(c = 0; c<n; c++)
    {
        cout<<passwords[c]<<endl;
    }
    myfile.close();

    return 0;
}

