#include <iostream>

using namespace std;

class shopitem
{
    int id, price;

public:
    void setdata(int i, int p)
    {
        id = i;
        price = p;
    }
    void getdata(void)
    {
        cout << "Product Id: " << id << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    int size = 3;
    shopitem *ptr = new shopitem[3];
    shopitem *tempptr = ptr;
    int id, p;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the product id and price: " << i + 1 << endl;
        cin >> id >> p;
        // (*ptr).setdata(i,p); this is same as below
        ptr->setdata(id, p);
        ptr++;
    }
    cout << endl
         << "----------Details of Products---------" << endl;
    for (int i = 0; i < size; i++)
    {
        tempptr->getdata();
        tempptr++;
    }

    return 0;
}