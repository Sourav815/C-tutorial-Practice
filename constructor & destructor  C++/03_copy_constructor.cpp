#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 3;
        b = 5;
    }
    complex(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    complex(complex &c1)
    {
        cout << "<----After copy the constructor----->" << endl;
        a = c1.a;
        b = c1.b;
    }

    void print(void)
    {
        cout << "The complex number is : " << a <<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    complex n1, n2(4,7),n3(8,7);
    n1.print();
    n2.print();
    
    complex y = n3;
    y.print();

    return 0;
}