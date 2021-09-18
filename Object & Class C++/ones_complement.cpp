#include <iostream>
#include <string>
using namespace std;

class binary
{

    string s;

public:
    void read(void);
    void che_bin(void);
    void ones_complement(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a number:" << endl;
    cin >> s;
}
void binary ::che_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format";
            exit(0);
        }
    }
}
void binary::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "After ones complement" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{

    binary bin;

    bin.read();
    bin.che_bin();
    bin.ones_complement();
    bin.display();
    return 0;
}