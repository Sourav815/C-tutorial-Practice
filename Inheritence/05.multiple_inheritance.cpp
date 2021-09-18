#include <iostream>

using namespace std;

class base
{
    int roll;

public:
    void getdata(int a)
    {
        roll = a;
    }
    void setroll(void)
    {
        cout << "Roll is: " << roll << endl;
    }
};
class base2
{
protected:
    int n1, n2;

public:
    void getmark(int a, int b)
    {
        n1 = a;
        n2 = b;
    }
    void setmark(void)
    {
        cout << "Marks of two subjects are : " << n1 << ", " << n2 << endl;
    }
};
class derived : public base, public base2
{
    float percent;

public:
    void display(void)
    {
        percent = (n1 + n2) / 2;
        void setroll();
        void setmark();
        cout << "Result is: " << percent << endl;
    }
};

int main()
{
    derived student;
    student.getdata(20);
    student.getmark(50,70);
    student.display();
    return 0;
}