#include <iostream>

using namespace std;

int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];

    cout << "Enter first matrix's element (row major): " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }
     cout << "Enter second matrix's element (row major): " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout <<endl;
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "After adding two matrix:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j < 3; j++)
        {
            cout<<" " << arr3[i][j];
            cout<<"\t";
        }
    }
    return 0;
}