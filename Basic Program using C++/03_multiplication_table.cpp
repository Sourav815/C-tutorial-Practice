#include <iostream>

using namespace std;

int main()
{
    int a,i;
    cout<<"Enter the number of which you want to make a table:\n";
    cin>>a;
    for ( i = 1; i <= 10; i++)
    {
        
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
        
    }
    return 0;
}