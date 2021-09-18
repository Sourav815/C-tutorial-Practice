#include <iostream>
#include <cstring>

using namespace std;

class person
{
    char name[20];

public:
    void getname(void)
    {
        cout << "Enter the batsman name: " << endl;
        gets(name);
    }
    void printdata(void)
    {
        cout << "Batsman name is: " << name << endl;
    }
};
class batsman : public person
{
    int score, jer_no;

public:
    void getdata(int s, int n)
    {
        score = s;
        jer_no = n;
    }
    void display(void);
};
void batsman::display(void)
{
    printdata();
    cout << "Score of the batsman in test: " << score << endl;
    cout << "His jersey number is: " << jer_no << endl;
}

int main()
{
    batsman b1;
    b1.getname();
    int a, b;
    cout << "Enter the score of batsman and his jersey number: ";
    cin >> a >> b;
    b1.getdata(a, b);
    b1.display();
    return 0;
}