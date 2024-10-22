#include <iostream>
using namespace std;

class SearchData
{
private:
    int intData[10];     // Integer dataset
    float floatData[10]; // Float dataset

public:
    // Constructor to input the data sets
    SearchData()
    {
        cout << "Enter integer data set (10 elements): ";
        for (int i = 0; i < 10; i++)
        {
            cin >> intData[i];
        }

        cout << "Enter float data set (10 elements): ";
        for (int i = 0; i < 10; i++)
        {
            cin >> floatData[i];
        }
    }

    // Overloaded search function for integer data set
    void search(int value)
    {
        bool found = false;
        for (int i = 0; i < 10; i++)
        {
            if (intData[i] == value)
            {
                cout << "Data found at position: " << (i + 1) << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Data not found" << endl;
        }
    }

    // Overloaded search function for float data set
    void search(float value)
    {
        bool found = false;
        for (int i = 0; i < 10; i++)
        {
            if (floatData[i] == value)
            {
                cout << "Data found at position: " << (i + 1) << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Data not found" << endl;
        }
    }
};

int main()
{
    // Create an object of SearchData to input datasets
    SearchData dataset;

    int intSearch;
    float floatSearch;

    // Search in the integer dataset
    cout << "Enter integer data to search: ";
    cin >> intSearch;
    dataset.search(intSearch);

    // Search in the float dataset
    cout << "Enter float data to search: ";
    cin >> floatSearch;
    dataset.search(floatSearch);

    return 0;
}
