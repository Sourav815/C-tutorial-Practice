#include <iostream>
#include <fstream>

using namespace std;
class student
{
    int id;
    char name[20];

public:
    void enquiryData();
};
void student ::enquiryData()
{
    student s;
    ifstream file("read.txt");
    int id, found = 0;
    cout << "Enter id no: ";
    cin >> id;
    file.read((char *)&s, sizeof(s));
    while (!file.eof())
    {
        if (s.id == id)
        {
            cout << "ID \t NAME" << endl;
            cout << "---------------------" << endl;
            cout << s.id << "\t" << s.name;
            found = 1;
            break;
        }
        file.read((char *)&s, sizeof(s));
    }
    file.close();
    if (found == 0)
    {
        cout << "Student data is not found...." << endl;
    }
}
int main()
{
    student s;
    s.enquiryData();
    return 0;
}