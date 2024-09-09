#include <iostream>
#include <string>
using namespace std;

class BookData
{
    string name;
    string inbs;
    float price;

public:
    void setData()
    {
        cout << "Enter titel: ";
        cin >> name;

        cout << "Enter INBS: ";
        cin >> inbs;

        cout << "Enter price: ";
        cin >> price;
    }

    void display()
    {
        cout << "Titel: " << name << endl;
        cout << "INBS: " << inbs << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    int x;
    cout << "How many books data you want to store: ";
    cin >> x;
    cout << endl;

    BookData data[x];

    for (int i = 0; i < x; i++)
    {
        cout << "Book number " << (i + 1) << ": " << endl;
        data[i].setData();
        cout << endl;
    }

    for (int i = 0; i < x; i++)
    {
        cout << "Book details " << (i + 1) << ": " << endl;
        data[i].display();
        cout << endl;
    }

    return 0;
}