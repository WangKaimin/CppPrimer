#ifndef E07_43_45_HPP_INCLUDED
#define E07_43_45_HPP_INCLUDED
#include <iostream>
using namespace std;
class NoDefault
{
public:
    NoDefault(int i) {
        cout<<"I'm NoDefault's Constructors. And the value of i is "<<i<<endl;
    }
};

class C
{
private:
    NoDefault nd;
public:
    C() : nd(0) {}
};

#endif // E07_43_45_HPP_INCLUDED
