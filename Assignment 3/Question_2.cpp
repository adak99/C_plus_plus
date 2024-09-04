#include <iostream>
#include <string>
using namespace std;

class EnterDetails
{
protected:
    int roll;
    string name;
    int age;
    int m1, m2, m3;

public:
    void setData()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter m1: ";
        cin >> m1;
        cout << "Enter m2: ";
        cin >> m2;
        cout << "Enter m3: ";
        cin >> m3;
    }

    void getData()
    {
        cout << "Roll number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "m1: " << m1 << endl;
        cout << "m2: " << m2 << endl;
        cout << "m3: " << m3 << endl;
    }
};

int main()
{
    int studNum;
    cout << "Enter how many student Detais you wnat to store: ";
    cin >> studNum;

    EnterDetails *stud = new EnterDetails[studNum];

    for (int i = 0; i < studNum; i++)
    {
        cout << "Enter student details " << (i + 1) << endl;
        stud[i].setData();
        cout << endl;
    }

    cout << "Student details:" << endl;

    for (int i = 0; i < studNum; i++)
    {
        cout << "\nStudent->" << (i + 1) << endl;
        stud[i].getData();
        cout << endl;
    }

    return 0;
}
