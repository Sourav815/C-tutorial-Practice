#include <iostream>

using namespace std;

class complex
{
    int real, ima;
    public:
     complex(){real=1;ima=2;};
     complex(int a, int b)
     {
         real=a;
         ima=b;
     }
    complex(complex &cpy)
     {
         real=cpy.real;
         ima=cpy.ima;
     }
    void print(void)
    {
        cout<<"The complex number is : "<<real<<" + "<<ima<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2(4,5),c3(7,9);

    c1.print();
    c2.print();
    

    complex c4=c3;
    c4.print();
    
    return 0;
}