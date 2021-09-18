#include <iostream>
#include<string>

using namespace std;

class binary
{
    string s1, s2;

public:
    binary(){};
    binary(string a, string b);
    {
        s1 = a;
        s2 = b;
    }
    binary operator+(binary b1){
        binary b3;
        char temp='0';
        for (int i = 0; i < b1.strlen(); i++)
        {
           if (/* condition */)
           {
               /* code */
           }
           
        }
        
    }
}

int
main()
{

    return 0;
}