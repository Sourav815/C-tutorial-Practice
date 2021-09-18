#include <iostream>

using namespace std;

inline void cube(int a)
{
    float cube;
    cube =a*a*a;
    cout<<"Cube of this number : "<<cube<<endl;
}

int main()
{
    float num;
    cout<<"Enter the number to be determine cube: "<<endl;
    cin>>num;
    cube(num);
    return 0;
}