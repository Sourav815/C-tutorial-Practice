#include <iostream>
using namespace std;

class addition
{
    int p, q, r, s;

public: // In 5.1 program public is not defined so we cannot access privet member or function from main function.
    void input(void)
    {
        cout << "Enter three numbers : ";
        cin >> p >> q >> r;
    }
    void show(void)
    {
        cout << "The additin of three numbers is : " << add() << endl;
    }
    int add(void)
    {
        s = p + q + r;
        return (s);
    }
};

int main()
{
    addition X;
    X.input();
    X.show();
    return 0;
}