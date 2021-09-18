#include <iostream>

using namespace std;

class distance
{
    float inch, foot;

public:
    void getdata(void);
    void putdata(void)
    {
        cout << "The distance travel by you: " << foot << " foot and " << inch << " inch";
    }
} d;

void distance::getdata(void)
{
    cout << "Enter your distance in feet/foot and inches:" << endl;
    cin >> foot >> inch;
}

int main()
{
    d.getdata();
    d.putdata();
    return 0;
}