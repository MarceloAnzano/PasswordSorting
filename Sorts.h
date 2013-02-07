#ifndef SORTS_H
#define SORTS_H
#include <string>

using namespace std;

class Sorts
{
    public:
        Sorts();
        virtual ~Sorts();
        void insertion_sort(string*, int);
        void bubble_sort(string*, int);
    protected:
    private:
};

#endif // SORTS_H
