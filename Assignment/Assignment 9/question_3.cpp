#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int empId;
    float salary;

public:
    void inputInfo()
    {
        cout << "Enter Name of the employee: ";
        getline(cin, name);
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();
    }

    void displayInfo()
    {
        cout << "Name of the employee: " << name << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Engineer : public Employee
{
protected:
    string engineeringBranch;

public:
    void inputInfo()
    {
        Employee::inputInfo();
        cout << "Enter Engineering Branch: ";
        getline(cin, engineeringBranch);
    }

    void displayInfo()
    {
        Employee::displayInfo();
        cout << "Engineering Branch: " << engineeringBranch << endl;
    }
};

class ITEngineer : public Engineer
{
private:
    string programmingLanguage;

public:
    void inputInfo()
    {
        Engineer::inputInfo();
        cout << "Enter Programming Language: ";
        getline(cin, programmingLanguage);
    }

    void displayInfo()
    {
        Engineer::displayInfo();
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

int main()
{
    ITEngineer itEngineer;

    itEngineer.inputInfo();

    cout << "\nEmployee Details:" << endl;
    itEngineer.displayInfo();

    return 0;
}
