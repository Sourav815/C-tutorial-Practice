#include <iostream>

using namespace std;

// class initiallization{
//     int a;
//     int b;
//     public:
//         void getdata(int i,int j){
//             // b=a*j; this will not execute beautifully
//             a=i;
//             b=a*j;
//             // b=a*j;  this will execute beautifully
//             cout<<"constructor is called."<<endl;
//             cout<<"The value of a is: "<<a<<endl;
//             cout<<"The value of b is: "<<b<<endl;
//         }
// };

class initiallization
{
    int a;
    int b;

public:
    // initiallization(int i, int j) : a(i), b(j)
    // initiallization(int i, int j) : a(i+j), b(j+i)
    // initiallization(int i, int j) : b(j+i), a(i)
    // initiallization(int i, int j) : b(j), a(b+i) this will return garbage value because a will initiallize first
    initiallization(int i, int j) : a(i), b(j)
    {
        cout<<"constructor is called."<<endl;
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
};

int main()
{
    initiallization obj(4,5);
    // obj.initialization(4, 5);
    return 0;
}