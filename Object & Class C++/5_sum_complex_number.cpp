#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    void getdata(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void putdata(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
    friend complex sum(complex, complex);
    friend complex sub(complex, complex);
    friend complex mul(complex, complex);
};

complex sum(complex c1, complex c2)
{ 
    complex c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    return (c3);
}
complex sub(complex c1, complex c2)
{
    complex c4;
    c4.a = c1.a - c2.a;
    c4.b = c1.b - c2.b;
    return (c4);
}

complex mul(complex c1, complex c2)
{
    complex c5;
    c5.a = (c1.a * c2.a - c1.b * c2.b);
    c5.b = (c1.a * c2.b + c1.b * c2.a);
    return (c5);
}

int main()
{
    complex c1, c2, c3, c4, c5;

    int num1, num2, num3, num4;

    cout << "Enter the real and imaginary value of first complex number repectively: " << endl;
    cin >> num1 >> num2;
    cout << "Enter the real and imaginary value of second complex number repectively: " << endl;
    cin >> num3 >> num4;
    c1.getdata(num1, num2);
    c2.getdata(num3, num4);

    c3 = sum(c1, c2);
    c4 = sub(c1, c2);
    c5 = mul(c1, c2);

    cout << "First complex number is: ";
    c1.putdata();
    cout << "Second complex number is: ";
    c2.putdata();
    cout << "<-----After adding two complex number---->" << endl;
    c3.putdata();

    cout << "<-----After substracting two complex number---->" << endl;
    c4.putdata();

    cout << "<-----After multiply two complex number---->" << endl;
    c5.putdata();

    return 0;
} 