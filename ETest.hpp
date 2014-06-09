#ifndef ETEST_HPP_INCLUDED
#define ETEST_HPP_INCLUDED
#include <iostream>
using std::cin;
using std::istream;
using namespace std;
class X
{
private:
    int i;
public:
    X () : i(0) {}
    X (istream &is) {
        is >> i;
    }
    void print()
    {
        cout<<i;
    }
};

#endif // ETEST_HPP_INCLUDED
