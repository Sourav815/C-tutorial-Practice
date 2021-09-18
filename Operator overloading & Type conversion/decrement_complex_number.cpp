#include <iostream>

using namespace std;

class complex
{
    int real, ima;

public:
    complex(){};
    complex(int a, int b)
    {
        real = a;
        ima = b;
    }
    complex operator--(void);
    void display(void)
    {
        cout << real << " + " << ima << "i" << endl;
    }
};
complex complex::operator--(void)
{
    complex c3;
    c3.real = real - 1;
    c3.ima = ima - 1;
    return c3;
}

int main()
{
    complex c1, c2;
    int a, b;
    cout << "Enter the complex number(real & imaginary): ";
    cin >> a >> b;
    c1 = complex(a, b);
    cout<<"Complex number is: ";
    c1.display();

    c2 = --c1;
    cout<<"After decrement complex number is: ";
    c2.display();

    return 0;
}