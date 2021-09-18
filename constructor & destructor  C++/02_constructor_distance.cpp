// distance between two points

#include <iostream>
#include <cmath>

using namespace std;

class point1
{
    int a, b;

public:
    point1(){};
    point1(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void distance(point1, point1);
};

void distance(point1 obj1, point1 obj2)
{
    float s;
    s = (((obj1.a - obj2.a) * (obj1.a - obj2.a)) + ((obj1.b - obj2.b) * (obj1.b - obj2.b)));
    cout << "Distance between two points: " << sqrt(s);
}

int main()
{
    point1 p1, p2;
    int p, q, r, s;

    cout << "Enter the initial point (X,Y): "<<endl;
    cin >> p >> q;
    cout << "Enter the initial point (X,Y): "<<endl;
    cin >> r >> s;
    p1 = point1(p, q);
    p2 = point1(r, s);

    distance(p1, p2);

    return 0;
}