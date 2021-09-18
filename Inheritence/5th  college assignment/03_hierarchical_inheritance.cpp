#include <iostream>
#include <cstring>

using namespace std;

class employee
{
    char name[20];

public:
    void getname(void)
    {
        cout << "Enter the name of employee: ";
        gets(name);
    }
    void printname(void)
    {
        cout << "Employee name:" << name<<endl;
    }
};
class contract : public employee
{
protected:
    char type[10];
    int salary;

public:
    void getinfo(char t[], int s)
    {
        type[10] = t[10];
        salary = s;
    }
    void printinfo(void)
    {
        printname();
        cout << "Type of the post: " << type << endl;
        cout << "salary: " << salary << endl;
    }
};

class parmanent : public employee
{
protected:
    char type[10];
    int salary;
    int e_id;

public:
    void getinfo(char t[], int s, int i)
    {
        type[10] = t[10];
        salary = s;
        e_id = i;
    }
    void printinfo(void)
    {
        printname();
        cout << "Type of the post: " << type << endl;
        cout << "salary: " << salary << endl;
        cout << "ID of Employee: " << e_id << endl;
    }
};

int main()
{
    contract c;
    parmanent p;
    c.getname();
    char t[10];
    int s;
    cout<<"Enter the name of the post and salary: "<<endl;
    gets(t);
    cin>>s;
    c.getinfo(t,s);

    p.getname();
    char t2[10];
    int s2,i2;
    cout<<"Enter the name of the post and salary: "<<endl;
    gets(t2);
    cin>>s2>>i2;
    p.getinfo(t2,s2,i2);
    c.printinfo();
    p.printinfo();
    return 0;
}