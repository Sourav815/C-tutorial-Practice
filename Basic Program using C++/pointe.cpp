#include <iostream>

using namespace std;

int main()
{
    // pointer to a variable

    int a=5;
    cout<<"This is the value of a "<<a<<endl;
    // ampersand operator --> address of operator
    int* b= &a; 
    cout<<"This is the address of a "<<b<<endl;
    cout<<"This is the address of a "<<&a<<endl;
    // '*' dereference operator
    cout<<"value at address b "<<*b<<endl;
    cout<<"value at address b "<<*(&a)<<endl;

    // pointer to pointer to a varialbel
    int** c=&b;
    cout<<"This is the address of b "<<c<<endl;
    cout<<"This is the address of b "<<&b<<endl;

    cout<<"value at address c "<<**c<<endl;
    cout<<"value at address c "<<**(&b)<<endl;

    return 0;
}