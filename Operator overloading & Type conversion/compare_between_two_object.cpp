#include <iostream>

using namespace std;

class compare
{
    int a;

public:
    compare(){};
    compare(int n1)
    {
        a = n1;
    }
    int operator>(compare);
    int operator==(compare);
};
int compare ::operator>(compare obj)
{
    if (a > obj.a)
    {
        return (1);
    }
    return (0);
}
int compare::operator==(compare obj1)
{
    if (a == obj1.a)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a, b;
    cout << "Enter two object number respectively: " << endl;
    cin >> a >> b;
    compare c1, c2, c3;

    c1 = compare(a);
    c2 = compare(b);

    if (c1 > c2)
    {
        cout << "c1 object is big.";
    }
    else if (c1 == c2)
    {
        cout << "c1 and c2 object is equal.";
    }
    else
    {
        cout << "c2 object is big.";
    }
    return 0;
}
