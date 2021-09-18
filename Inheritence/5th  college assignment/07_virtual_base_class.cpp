#include <iostream>
#include <cstring>

using namespace std;
class person
{
    char name[20];
    int id;

public:
    void persondata(void)
    {
        cout << "Enter the name of the person and id: ";
        gets(name);
        cin >> id;
    }
    void printperson(void)
    {
        cout << "Person's name: " << name << " and ID: " << id << endl;
    }
};
class department : virtual public person
{
protected:
    char dept[25];

public:
    void deptdata(void)
    {
        cout << "Enter the name of the department: ";
        gets(dept);
    }
    void printdept(void)
    {
        cout << "Department : " << dept << endl;
    }
};
class perks : virtual public person
{
    int salary;

public:
    void perksdata(void)
    {
        cout << "Enter the total salary: ";
        cin >> salary;
    }
    void printperks(void)
    {
        cout << "Total Salary: " << salary << endl;
    }
};

class employee : public department, public perks
{
    char com[30];

public:
    void employeedata(void)
    {
        cout << "Enter the name of the company name: ";
        gets(com);
    }
    void display(void)
    {
        printperson();
        printdept();
        printperks();
        cout << "Company name: " << com << endl;
    }
};
int main()
{
    employee e;

    e.deptdata();
    e.employeedata();
    e.persondata();
    e.perksdata();
    cout<<endl<<"-----------Employee Details---------"<<endl;
    e.display();
    return 0;
}