#include <iostream>

using namespace std;

class employee
{
    char emp_name[15];
    char id[5];

public:
    void getdata(void)
    {
        cout << "Enter the name of employee: \n";
        cin >> emp_name;
        cout << "Enter the ID of employee: \n";
        cin >> id;
    }
    void printdata(void);
};

void employee::printdata(void)
{
    cout << "Name of the employee : " << emp_name << endl;
    cout << "ID of this employee: " << id << endl;
    cout << "\n";
}

int main()
{
    employee manager[2], scientist, labour[5];

    for (int i = 0; i < 2; i++)
    {
        cout << "Detail of manager " << i + 1 << endl;
        manager[i].getdata();
    }

    cout << "Detail of scientist " << endl;
    scientist.getdata();

    for (int i = 0; i < 5; i++)
    {
        cout << "Detail of labour " << i + 1 << endl;
        labour[i].getdata();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Manager " << i + 1 << endl;
        cout << endl;
        manager[i].printdata();
    }

    cout << "Scientist " << endl;
    cout << endl;
    scientist.printdata();

    for (int i = 0; i < 5; i++)
    {
        cout << "Labour " << i + 1 << endl;
        cout << endl;
        labour[i].printdata();
    }

    return 0;
}