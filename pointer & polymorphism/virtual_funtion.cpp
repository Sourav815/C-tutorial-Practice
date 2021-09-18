#include <iostream>

using namespace std;

class base
{
    int a = 1;

public:
    virtual void display(void)
    {
        cout << "1. This is Base class." << endl;
    }
};
class derived : public base
{
    int b = 2;

public:
    void display(void)
    {
        cout << "2. This is Derived class." << endl;
    }
};

int main()
{
    base *basePointer;
    derived *derivedPointer;
    base b;
    derived d;
    // basePointer = &d; As default it points to the base class object
    basePointer = &d;
    basePointer->display(); // if we declare base class object's as virtual then it will points derived class's object;
    return 0;
}