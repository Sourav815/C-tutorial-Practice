#include <iostream>

using namespace std;

class dme;
class dee;

class dcst
{
    int mark;

public:
    void getdata(int data)
    {
        mark = data;
    }
    friend void smallmark(dcst, dme, dee);
};

class dme
{
    int mark;

public:
    void getdata(int data)
    {
        mark = data;
    }
    friend void smallmark(dcst, dme, dee);
};

class dee
{
    int mark;

public:
    void getdata(int data)
    {
        mark = data;
    }
    friend void smallmark(dcst, dme, dee);
};

void smallmark(dcst obj1, dme obj2, dee obj3)
{
    if ((obj1.mark < obj2.mark) && (obj1.mark < obj3.mark))
    {
        cout << "The marks of DCST student is smallest." << endl;
    }
    else if ((obj2.mark < obj1.mark) && (obj2.mark < obj3.mark))
    {
        cout << "The marks of DME student is smallest." << endl;
    }
    else
    {
        cout << "The marks of DEE student is smallest." << endl;
    }
}

int main()
{
    dcst X;
    dme Y;
    dee Z;
    int a, b, c;

    cout << "Enter the mark of DCST student: ";
    cin >> a;
    cout << endl;
    cout << "Enter the mark of DME student: ";
    cin >> b;
    cout << endl;
    cout << "Enter the mark of DEE student: ";
    cin >> c;
    cout << endl;

    X.getdata(a);
    Y.getdata(b);
    Z.getdata(c);

    smallmark(X, Y, Z);

    return 0;
}