#include <iostream>

using namespace std;

class base
{
    protected:
        int a;
    public:
        int b;
};

/*                                        Visibillity of inherited members
                                     -------------------------------------------
                    public derivation    private derivation    protected derivation
 1. private member:   not inherited         not inherited          not inherited
 2. public member:     public               private                 protected
 3. protected member:  protected           private                 protected           
*/

class derived : protected base
{

};

int main()
{
    derived d;
    base b;
    // cout<<d.b;  //we can't use protected member in this scope as well as derived class also protected
    // cout<<b.a;
    return 0;
}