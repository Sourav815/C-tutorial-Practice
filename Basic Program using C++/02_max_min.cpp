#include <iostream>

using namespace std;

class max_min
{
    int a, b;

public:
    void check_max_min(void);
} A;
void max_min::check_max_min(void)
{
    cout << "Enter two number respectively:" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater than " << b;
    }
    else
    {
        cout << b << " is greater than " << a;
    }
}

int main()
{
    A.check_max_min();
    return 0;
}