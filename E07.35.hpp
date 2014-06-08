#ifndef E07_35_HPP_INCLUDED
#define E07_35_HPP_INCLUDED
#include <string>
using std::string;
typedef string Type;

class Exercise {
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal() const;
private:
    int val;
};
Exercise::Type Exercise::initVal() const
{
    return val;
}
Exercise::Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
}
#endif // 7_35_HPP_INCLUDED
