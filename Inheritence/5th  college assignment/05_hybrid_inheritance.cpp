#include <iostream>
#include <cstring>

using namespace std;

class publication
{
    char book[30];
    char pub[30];

public:
    void bookname(void)
    {
        cout << "Enter the name of the book and publication: ";
        gets(book);
        gets(pub);
    }
    void bookdata(void)
    {
        cout << "Book's and publication name: " << book << " and " << pub << endl;
    }
};
class faculty : public publication
{
    int no;

public:
    void facultyname(void)
    {
        cout << "Enter the number of writter (faculty): ";
        cin >> no;
    }
    void facultydata(void)
    {
        cout << "Number of writter: " << no << endl;
    }
};
class student
{
protected:
    char dept[30];
    int roll;

public:
    void departmentname(void)
    {
        cout << "Enter the name of the student's department and roll: ";
        gets(dept);
        cin >> roll;
    }
    void studentdata(void)
    {
        cout << "Name of the department and roll: " << dept << " & " << roll << endl;
    }
};
class person : public faculty, public student
{
    char name[15];

public:
    void personname(void)
    {
        cout << "Enter the name of the person: ";
        gets(name);
    }
    void persondata(void)
    {
        bookdata();
        facultydata();
        studentdata();
        cout << "Name of the student: " << name << endl;
    }
};

int main()
{
    person p;
    p.bookname();
    p.personname();
    p.departmentname();
    p.facultyname();
    cout << endl
         << "-----------Details-----------" << endl;
    p.persondata();
    return 0;
}