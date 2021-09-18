#include <iostream>

using namespace std;

class student
{
protected:
    int roll;

public:
    void getdata(int a)
    {
        roll = a;
    }
    void setdata(void);
};
void student :: setdata(void)
{
    cout << "Roll no. of this student is: " << roll << endl;
}
class test : public student
{
protected:
    float math, physics;

public:
    void getmark(float n1, float n2)
    {
        math = n1;
        physics = n2;
    }
};

class result : public test
{
    float percentage;

public:
    void display(void);
};
void result ::display(void)
{
    setdata();
    cout << "Marks of maths and physics : " << math << ", " << physics << endl;
    percentage = float((math + physics) / 2);
    cout << "Result is : " << percentage << "%";
}

int main()
{
    result r;
    r.getdata(20);
    r.getmark(80.42, 90.21);
    r.display();
    return 0;
}