#include <iostream>
using namespace std;
class MyClass{
    public:
    int var;
    MyClass() {}
    MyClass(int a)
    : var(a) {}

    MyClass operator+(MyClass &obj) {

    }
};
