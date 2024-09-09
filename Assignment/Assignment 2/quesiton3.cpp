#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    void setData()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    int x;
    cout << "How many employee details you wnate to store: ";
    cin >> x;

    Employee data[x];

    cout << "Enter employee details: " << endl;
    for (int i = 0; i < x; i++)
    {
        cout << "Employee no " << (i + 1) << ": " << endl;
        data[i].setData();
        cout << endl;
    }

    cout << "Employee details: " << endl;
    for (int i = 0; i < x; i++)
    {
        cout << "Employee details " << (i + 1) << ": " << endl;
        data[i].display();
        cout << endl;
    }

    return 0;
}