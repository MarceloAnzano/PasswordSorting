#include "Functions.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

Functions::Functions()
{
    //ctor
}

Functions::~Functions()
{
    //dtor
}

void Functions::readTxt(string passwords[])
{
    int c = 0;
    string line;
    fstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        passwords[c]=line;
        c++;
    }
    myfile.close();
}

char Functions::initialize()
{
    char choice;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"    This program sorts the top 100 used passwords"<<endl;
    cout<<"-------------------------------------------------------"<<endl<<endl;
    cout<<"What kind of sorting will be used?\n   a. Insertion Sobrt\n   b. Bubble Sort"<<endl;
    cout<<"\nEnter choice: ";
    cin>>choice;
    return choice;
}

void Functions::print(string passwords[],int n)
{
    for(int c = 0; c<n; c++)
    {
        cout<<passwords[c]<<endl;
    }
}
