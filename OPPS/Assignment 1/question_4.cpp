#include <iostream>
using namespace std;

class dataSet
{
protected:
    int arr[10];
    int searching_item;
    int location;

public:
    // input data
    void inputData()
    {
        cout << "Enter the your data: ";
        for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        {
            cin >> arr[i];
        }
    }

    // search item
    void searchItem()
    {
        cout << "Enter the searching item: ";
        cin >> searching_item;
        cout << endl;

        int size = sizeof(arr) / sizeof(arr[0]);

        for (int i = 0; i < size; i++)
        {
            if (searching_item == arr[i])
            {
                location = i + 1;
            }
        }
    }

    // output
    void display()
    {
        cout << "Search Item: " << searching_item << endl;
        cout << "Location: " << location << endl;
    }
};

int main()
{
    dataSet callclass;

    cout << "Input" << endl;
    callclass.inputData();
    callclass.searchItem();

    cout << endl;
    cout << "Output" << endl;

    callclass.display();

    return 0;
}