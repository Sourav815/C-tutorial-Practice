#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(void);

    void printdata(void)
    {
        cout << "The complex number is: " << a << " + " << b << "i";
    }
} c;

complex::complex(void)
{
    a = 10, b = 20;
}

int main()
{
    c.printdata();

    return 0;
}