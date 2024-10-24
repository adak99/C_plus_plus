#include <iostream>
using namespace std;

class Developer;
class Accountant;

class Manager
{
private:
    int basicSalary;
    const float DA = 0.6, HRA = 0.5, tax = 0.12;

public:
    Manager(int basic) : basicSalary(basic) {}

    int managerSalary()
    {
        float DAamt = basicSalary * DA;
        float HRAamt = basicSalary * HRA;
        return (basicSalary + DAamt + HRAamt) - ((basicSalary + DAamt + HRAamt) * tax);
    }

    friend int totalAllSalary(Manager, Developer, Accountant);
};

class Developer
{
private:
    int basicSalary;
    const float DA = 0.5, HRA = 0.4, tax = 0.12;

public:
    Developer(int basic) : basicSalary(basic) {}

    int developerSalary()
    {
        float DAamt = basicSalary * DA;
        float HRAamt = basicSalary * HRA;
        return (basicSalary + DAamt + HRAamt) - ((basicSalary + DAamt + HRAamt) * tax);
    }

    friend int totalAllSalary(Manager, Developer, Accountant);
};

class Accountant
{
private:
    int basicSalary;
    const float DA = 0.4, HRA = 0.3, tax = 0.12;

public:
    Accountant(int basic) : basicSalary(basic) {}

    int accountantSalary()
    {
        float DAamt = basicSalary * DA;
        float HRAamt = basicSalary * HRA;
        return (basicSalary + DAamt + HRAamt) - ((basicSalary + DAamt + HRAamt) * tax);
    }

    friend int totalAllSalary(Manager, Developer, Accountant);
};

int totalAllSalary(Manager m, Developer d, Accountant a)
{
    int managerSal = m.managerSalary();
    int develperSal = d.developerSalary();
    int accountantSal = a.accountantSalary();
    return (managerSal + develperSal + accountantSal);
}

int main()
{
    int manager, developer, accountant;

    cout << "Enter basic salary of Manager: ";
    cin >> manager;
    cout << "Enter basic salary of Developer: ";
    cin >> developer;
    cout << "Enter basic salary of Accountant: ";
    cin >> accountant;

    Manager m(manager);
    Developer d(developer);
    Accountant a(accountant);

    cout << "Total salary of Manager: " << m.managerSalary() << endl;
    cout << "Total salary of Developer: " << d.developerSalary() << endl;
    cout << "Total salary of accountant: " << a.accountantSalary() << endl;
    cout << "Total salary of All Employee: " << totalAllSalary(m, d, a) << endl;

    return 0;
}

/*
Enter basic salary of Manager: 25000
Enter basic salary of Developer: 20000
Enter basic salary of Accountant: 15000
Total salary of Manager: 46200
Total salary of Developer: 33440
Total salary of accountant: 22440
Total salary of All Employee: 102080
*/