#include <iostream>
#include <fstream>

using namespace std;
class student
{
    int id;
    char name[20];

public:
    void getdata()
    {
        cout << "Enter the ID and Name of the student: " << endl;
        cin >> id >> name;
    }
    void putdata()
    {
        cout << id << "\t" << name << endl;
    }
};

int main()
{
    student sourav;
    ofstream file("read.txt");
    // read.open(); using open member function which includes fstream standard class.
    // char op;
    // do
    // {
    //     sourav.getdata();
    //     file.write((char *)&sourav,sizeof(sourav));
    //     cout<<"You have successfully entered..."<<endl;
    //     cout<<"Anymore student (Y/N): ";
    //     cin>>op;
    // } while (op=='y'|| op== 'Y');
    // file.close();


    ifstream file("read.txt");
    file.read((char *)&sourav, sizeof(sourav));
    cout << "ID\t NAME" << endl;
    cout << "----------------------------" << endl;
    while (!file.eof())
    {
        sourav.putdata();
        file.read((char *)&sourav, sizeof(sourav));
        file.close();
    }
    return 0;
}