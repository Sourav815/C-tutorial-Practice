#include <iostream>

using namespace std;

int main(){
    // int a=5;
    // int *ptr = &a;
    int *ptr = new int(40);
    // cout<<"value of a is: "<<a<<endl;

    cout<<"Address of a is: "<<ptr<<endl;
    cout<<"Value of a is: "<<(*ptr)<<endl;
    delete ptr;
    cout<<"Value of a is: "<<(*ptr)<<endl;
    return 0;
}