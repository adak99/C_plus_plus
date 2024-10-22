#include <iostream>
using namespace std;

class Employee
{
public:
    // fucntion for show the salary of the manager
    void SalaryCal(float basic, float DA, int HRA, int TA)
    {
        cout << "Employee type: Mangager" << endl;
        cout << "Bsic salary: " << basic << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "TA: " << TA << endl;
        cout << "_________________________________" << endl;
    }

    // function for show the salary of developer
    void SalaryCal(int basic, int DA, int HRA, int TA)
    {
        cout << "Employee type: Developer" << endl;
        cout << "Bsic salary: " << basic << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "TA: " << TA << endl;
        cout << "_________________________________" << endl;
    }

    // function for show the salary of accountent
    void SalaryCal(int basic, int DA, int HRA)
    {
        cout << "Employee type: Accountent" << endl;
        cout << "Bsic salary: " << basic << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "_________________________________" << endl;
    }

    // function for show the salary of GROUP-D
    void SalaryCal(int basic, int medical)
    {
        cout << "Employee type: GROUP-D" << endl;
        cout << "Bsic salary: " << basic << endl;
        cout << "Medical: " << medical << endl;
    }
};

int main()
{
    Employee emp;

    // manager salary details
    float manager_basic = 40000.50;
    float manager_DA = manager_basic * 0.4;
    float manager_HRA = manager_basic * 0.15;
    float manager_TA = 1000;
    emp.SalaryCal(manager_basic, manager_DA, manager_HRA, manager_TA);

    // developer salary details
    float developer_basic = 30000.00;
    float developer_DA = developer_basic * 0.4;
    float developer_HRA = developer_basic * 0.15;
    float developer_TA = 1000;
    emp.SalaryCal(developer_basic, developer_DA, developer_HRA, developer_TA);

    // accountent salary details
    float accountent_basic = 20000.00;
    float accountent_DA = developer_basic * 0.4;
    float accountent_HRA = developer_basic * 0.15;
    emp.SalaryCal(accountent_basic, accountent_DA, accountent_HRA);

    // Group-D salary details
    float group_d_basic = 10000.00;
    float group_d_medical = 500.00;
    emp.SalaryCal(group_d_basic, group_d_medical);

    return 0;
}

/*
Employee type: Mangager
Bsic salary: 40000.5
DA: 16000.2
HRA: 6000
TA: 1000
_________________________________
Employee type: Mangager
Bsic salary: 30000
DA: 12000
HRA: 4500
TA: 1000
_________________________________
Employee type: Accountent
Bsic salary: 20000
DA: 12000
HRA: 4500
_________________________________
Employee type: GROUP-D
Bsic salary: 10000
Medical: 500
*/