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
    complex operator+(complex);
    complex operator-(complex);
    complex operator*(complex);

    void display(void)
    {
        cout << real << " + " << ima << "i" << endl;
    }
};

complex complex ::operator+(complex c1)
{
    complex c2;
    c2.real = real + c1.real;
    c2.ima = ima + c1.ima;
    return (c2);
}
complex complex ::operator-(complex c1)
{
    complex c2;
    c2.real = real - c1.real;
    c2.ima = ima - c1.ima;
    return (c2);
}
complex complex ::operator*(complex c1)
{
    complex c2;
    c2.real = (real * c1.real - ima * c1.ima);
    c2.ima = (real * c1.ima + ima * c1.real);
    return (c2);
}

int main()
{
    complex c1, c2, c3, c4, c5;
    int r1, r2, i1, i2;
    cout << "Enter the real and imaginary part of 1st complex number: " << endl;
    cin >> r1 >> i1;
    cout << "Enter the real and imaginary part of 2nd complex number: " << endl;
    cin >> r2 >> i2;

    c1 = complex(r1, i1);
    c2 = complex(r2, i2);
    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;

    c3.display();
    c4.display();
    c5.display();

    return 0;
}