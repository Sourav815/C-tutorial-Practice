#include <iostream>

using namespace std;

float area(float r)
{
    return (3.14 * r * r);
}
int area(int length)
{
    return (length * length);
}
int area(int length, int breadth)
{
    return (length * breadth);
}
void area(void)
{
    float b, h;
    cout << "Enter base and height of triangle:\n";
    cin >> b >> h;
    cout << "Area of the triangle is: " << float(0.5 * b * h);
}

int main()
{
    float rad;
    int l, b;
    cout << "Enter the radius , length and breadth of circle, square and rectangle:\n";
    cin >> rad >> l >> b;

    cout << "Area of circle is: " << area(rad) << endl;
    cout << "Area of square is: " << area(l) << endl;
    cout << "Area of rectangle is: " << area(l, b) << endl;
    area();
    return 0;
}