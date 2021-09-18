#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex() {}
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = b = x;
    }
    friend complex sum(complex, complex);
    friend void display(complex);
};

complex sum(complex c1, complex c2)
{
    complex c3;
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return (c3);
}

void display(complex c)
{
    cout << c.a << " + " << c.b << "i";
}

int main()
{
    complex A(5,7);
    complex B(0, 0);
    complex C(4);
    complex D;

    D = sum(A, C);
    cout << "B = ";
    display(B);
    cout << endl;
    cout << "A = ";
    display(A);
    cout << endl;
    cout << "C = ";
    display(C);
    cout << endl;
    cout << "D = ";
    display(D);

    return 0;
}