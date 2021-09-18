#include <iostream>
using namespace std;
int main()
{
    int num, r, sum = 0, temp=0;
    cout << "Enter the Number: ";
    cin >> num;
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        sum = (sum * 10) + r;
        num = num / 10;
    }
    if (temp == sum)
        cout << "Number is Palindrome.";
    else
        cout << "Number is not Palindrome.";
    return 0;
}