#include <iostream>
#include <string>
using namespace std;

class SalesPerson
{
    string itemName;
    int itemCode;
    float price;
    int quatities;

public:
    void setData()
    {
        cout << "Enter Item name: ";
        cin >> itemName;

        cout << "Enter Item code: ";
        cin >> itemCode;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantities: ";
        cin >> quatities;
    }

    void display()
    {
        cout << "Item name: " << itemName << endl;
        cout << "Item code: " << itemCode << endl;
        cout << "price: " << price << endl;
        cout << "Quantities availavel: " << quatities << "KG" << endl;
    }
};

int main()
{
    int x;
    cout << "How many items data you want to store: ";
    cin >> x;

    SalesPerson data[x];

    cout << "Enter Details of the items: " << endl;
    for (int i = 0; i < x; i++)
    {
        cout << "Item number " << (i + 1) << ": " << endl;
        data[i].setData();
        cout << endl;
    }

    cout << "Details of the items: " << endl;
    for (int i = 0; i < x; i++)
    {
        cout << "Item no " << (i + 1) << ": " << endl;
        data[i].display();
        cout << endl;
    }

    return 0;
}