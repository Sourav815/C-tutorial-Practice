#include <iostream>

using namespace std;

int main()
{
    int num, n2 = 1, n1 = 0, sum = 0;
    cout << "Enter the upper limit of the fabonacci series:\n ";
    cin >> num;
    cout << "<<<<<<<<<Fabonacci Series:>>>>>>>\n";

    for (int i = 0; i < num; i++)
    {
        if (i <= 1)
        {
            sum = i;
        }
        else
        {
            sum = n1 + n2;
            n1 = n2;
            n2 = sum;
        }
        cout << sum << ", ";
    }

    return 0;
}