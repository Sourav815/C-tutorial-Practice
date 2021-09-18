#include <iostream>
#include <cstring>

using namespace std;

class student
{
    char name[10];

public:
    void getname(void)
    {
        cout << "Enter the of the studedent: ";
        gets(name);
    }
    void printname(void)
    {
        cout << "Student name: " << name << endl;
    }
};
class employee
{
    int id;
    public:
        void getid(void){
            cout<<"Enter the id of this employee: ";
            cin>>id;
        }
        void printid(void){
            cout<<"Employee id: "<<id<<endl;
        }
};
class scientist : public student , public employee{
    float salary;
    public: 
        void getsalary(void){
            cout<<"Enter the salary of this scientist: ";
            cin>>salary;
        }
        void display(void){
            printname();
            printid();
            cout<<"Salary of this employee: "<<salary<<" (LPA)"<<endl;
        }
};

int main()
{
    scientist s;
    s.getname();
    s.getid();
    s.getsalary();
    cout<<endl<<"-----------Details of the scientist----------"<<endl<<endl;
    s.display();
    return 0;
}