#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three number respectively:";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is greater than " << b << " and " << c;
    }
    else if (b > c && b > a)
    {
        cout << b << " is greater than " << a << " and " << c;
    }
    else
    {
        cout << c << " is greater than " << b << " and " << a;
    }
    return 0;
}