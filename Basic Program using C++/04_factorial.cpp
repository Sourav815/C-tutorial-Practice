#include <iostream>

using namespace std;

int main()
{
    int a, i, fact = 1;
    cout << "Enter the nuber to determine factorial:" << endl;
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << a << " is =" << fact;

    return 0;
}