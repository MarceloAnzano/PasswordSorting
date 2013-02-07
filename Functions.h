#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>

using namespace std;

class Functions
{
    public:
        Functions();
        virtual ~Functions();
        void readTxt(string*);
        char initialize();
        void print(string*, int);
    protected:
    private:
};

#endif // FUNCTIONS_H
