#include <iostream>

using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata(void);
    int getdata1(void);
    int getdata2(void);
};
// -----------------------------------------------
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1(void)
{
    return data1;
}
int base ::getdata2(void)
{
    return data2;
}
// -----------------------------------------------
// -----------------------------------------------

class derived : public base
{
    int data3;

public:
    void process(void);
    void display(void);
};
void derived ::process(void)
{
    data3 = data2 * getdata1();
}
void derived :: display(void)
{
    cout << "value of data1 is : " << getdata1() << endl;
    cout << "value of data2 is : " << data2 << endl;
    cout << "value of data3 is : " << data3 << endl;
}

int main()
{
    derived der;

    der.setdata();
    der.process();
    der.display();

    der.data2=30;
    der.process();
    der.display();
    return 0;
}