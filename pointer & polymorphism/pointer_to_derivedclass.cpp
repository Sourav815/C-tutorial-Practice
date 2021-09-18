#include <iostream>

using namespace std;

class base
{
public:
    int b;
    void show(void)
    {
        cout << "b= " << b << endl;
    }
};
class derived : public base
{
public:
    int d;
    void show(void)
    {
        cout << "b= " << b << endl
             << "d= " << d << endl;
    }
};

int main()
{
    base b;
    base *baseptr;
    baseptr = &b;
    baseptr->b = 100;
    cout << "Calling Base object using base pointer..." << endl;
    baseptr->show();

    derived d;
    derived *derivedptr;
    baseptr = &d;
    derivedptr = &d;
    derivedptr->d = 300;
    baseptr->b = 200;
    cout << "Calling derived object using base pointer..." << endl;
    baseptr->show();
    derivedptr->show();

    cout << "Calling derived object using derived pointer..." << endl;
    derivedptr->show();
    return 0;
}