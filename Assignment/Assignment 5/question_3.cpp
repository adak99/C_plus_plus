#include<iostream>
using namespace std;

class SalesPerson; 

class Manager {
    private:
        float basic;
    public:
        Manager(float b) : basic(b) {} 

        friend void calculateSalary(Manager &m, SalesPerson &s);
};

class SalesPerson {
    private:
        float basic;
    public:
        SalesPerson(float b) : basic(b) {} 

        friend void calculateSalary(Manager &m, SalesPerson &s);
};

void calculateSalary(Manager &m, SalesPerson &s) {
    float da_m = m.basic * 0.60; 
    float hra_m = m.basic * 0.30; 
    float total_m = m.basic + da_m + hra_m;
    total_m -= total_m * 0.12; 

    float da_s = s.basic * 0.40;
    float hra_s = s.basic * 0.20; 
    float total_s = s.basic + da_s + hra_s;
    total_s -= total_s * 0.12; 

    cout << "Total Salary of Manager: Rs " << total_m << "/-" << endl;
    cout << "Total Salary of SalesPerson: Rs " << total_s << "/-" << endl;
    cout << "Total Salary of both employees: Rs " << total_m + total_s << "/-" << endl;
}

int main() {
    Manager m(25000);
    SalesPerson s(20000); 

    calculateSalary(m, s); 
    return 0;
}
