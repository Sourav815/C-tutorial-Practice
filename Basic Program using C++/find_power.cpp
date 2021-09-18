#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, p;
    cout << "Enter the number and the base to find the power of the number ";
    cin >> x >> y;
    p = pow(x, y);
    cout << x << " to the power " << y << " is " << p;
    return 0;
}