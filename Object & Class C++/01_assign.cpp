#include <iostream>

using namespace std;

class Distance
{
    float foot, inch;

public:
    void getdata(float f, float i)
    {
        foot = f; inch = i;
       
    }
    void display(void)
    {
        cout << "Distance is: " << foot << " foot " << inch << " inch" << endl;
    }
    friend Distance sum(Distance, Distance);
    friend Distance sub(Distance, Distance);
};

Distance sum(Distance c1, Distance c2)
{
    Distance c3;
    cout << "<-----After adding----->" << endl;
    c3.foot = c1.foot + c2.foot;
    c3.inch = c1.inch + c2.inch;
    return (c3);
}
Distance sub(Distance c1, Distance c2)
{
    Distance c4;
    cout << "<-----After Substracting----->" << endl;
    c4.foot = c1.foot - c2.foot;
    c4.inch = c1.inch - c2.inch;
    return (c4);
}

int main()
{
    Distance obj1, obj2, obj3, obj4;
    float f1, i1, f2, i2;
    cout << "Enter the foot and inch of 1st distance: ";
    cin >> f1 >> i1;
    cout << "Enter the foot and inch of 2nd distance: ";
    cin >> f2 >> i2;

    obj1.getdata(f1, i1);

    obj2.getdata(f2, i2);

    obj3 = sum(obj1, obj2);
    obj3.display();

    obj4 = sub(obj1, obj2);
    obj4.display();

    return 0;
}