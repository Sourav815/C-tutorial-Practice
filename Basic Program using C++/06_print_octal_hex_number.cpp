#include <iostream>

using namespace std;

int convert(int decimal)
{
    int i = 1, octal = 0;

    while (decimal != 0)
    {
        int rem = decimal % 8;
        decimal /= 8;
        octal += rem * i;
        i *= 10;
    }
    return octal;
}
void hex_convert(int num)
{
    char hex[100];
    int a=num;
    int i = 0;
    while (num != 0)
    {
        int temp = 0;
        temp = num % 16;
        if (temp < 10)
        {
            hex[i++] = temp + 48;
        }
        else
        {
            hex[i++] = temp + 55;
        }
        num = num / 16;
    }
    cout<<a<<" in decimal = ";
    for (int j = i-1; j >=0; j--)
    {
        cout<<hex[j];
    }
    cout<<" in hexadecimal"<<endl;
    
}

int main()
{
    int decimal, octal;
    cout << "Enter a decimal number: ";

    cin >> decimal;
    octal = convert(decimal);
    hex_convert(decimal);
    cout << decimal << " in decimal = " << octal << " in octal";
    return 0;
}

