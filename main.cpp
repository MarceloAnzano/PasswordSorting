#include <iostream>
#include<string>
#include<cstdlib>
#include "Functions.h"
#include "Sorts.h"

using namespace std;

int main()
{
    Functions txt;
    Sorts sorting;
    char choice = '0';
    int n=100;
    string passwords[n];

    txt.readTxt(passwords);

    again:
    choice = txt.initialize();

    if(choice=='a')
    {
    cout<<"-----------";
    cout<<"\n\n\nSorting\n";
    sorting.insertion_sort(passwords, n);
    }
    else if (choice=='b')
    {
    cout<<"-----------";
    cout<<"\n\nSorting...\n\n";
    sorting.bubble_sort(passwords, n);
    }
    else
    {
        cout<<"Wrong choice. Try again."<<endl;
        cin.clear();
        cin.sync();
        system("PAUSE");
        system("CLS");
        goto again;
    }

    txt.print(passwords, n);


    return 0;
}

