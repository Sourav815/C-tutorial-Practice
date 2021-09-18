#include <iostream>
#include <cstring>

using namespace std;
class person
{
    char name[20];

public:
    void getname(void)
    {
        cout << "Enter the name of the person: " << endl;
        gets(name);
    }
    void printname(void)
    {
        cout << "Person name: "<<name<< endl;
    }
};
class employee : public person
{
protected:
    char e_id[5];

public:
    void getdata(char a[])
    {
        e_id[5] = a[5];
    }
    void printid(void)
    {
        cout << "Employee Id: "<<e_id<< endl;
    }
};
class manager : public employee
{
    int salary, exp;

public:
    void getinfo(int s, int e)
    {
        salary = s;
        exp = e;
    }
    void display(void)
    {
        printname();
        printid();
        cout << "Manager's salary: " << salary<<endl;
        cout << "Work experience(in year): " << exp<<endl;
    }
};

int main()
{
    manager m;
    m.getname();

    char id[5];
    int salary,exp;

    cout<<"Enter the identification, salary and work experience(in year): "<<endl;
    gets(id);
    cin>>salary>>exp;
    m.getdata(id);
    m.getinfo(salary,exp);
    m.display();
    return 0;
}