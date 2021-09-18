#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0)
        {
            count += 1;
        }
    }
    if (count > 2)
    {
        cout << "This is not prime number.";
    }
    else
    {
        cout << "This is prime number.";
    }

    return 0;
}