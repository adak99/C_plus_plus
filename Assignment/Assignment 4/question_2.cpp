#include <iostream>
using namespace std;

class Employee {
	private: 
		int age;
		double basic;
		double DA;
		double TA;
		int yearOfexp;
		string designation;
		double totalInc;
		
	public:
		void setData() {
			cout << "Enter age of the employee: ";
			cin >> age;
			cout << "Enter basic salary: ";
			cin >> basic;
			cout << "Enter year of exceptions: ";
			cin >> yearOfexp;
			cout << "Enter designation: ";
			cin >> designation;
			
			DA = 0.6 * basic;
			TA = 0.1 * basic;
			
			totalInc = basic + DA + TA;
			
			if (yearOfexp > 5) {
				totalInc += 1200;
			}
		}
		
		void getData() {
			cout << "Employee age: " << age << endl;
			cout << "Employee baisc salary: " << basic << endl;
			cout << "DA (60% of basic salary): " << DA << endl;
			cout << "TA (10 % of basic salary): " << TA << endl;
			cout << "Employee year of experience: " << yearOfexp << endl;
			cout << "Designation: " << designation << endl;
			cout << "Total income: " << totalInc << " Rs." << endl;
			cout << endl;
		}
		
		double geTotalInc() {
			return totalInc;
		}
};


int main() {
	int n;
	cout << "Enter how many employee details you want to store: ";
	cin >> n;
	cout << endl;
	double totalcost = 0;
	
	Employee *e = new Employee[n];
	
	cout << "Enter employee details: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Enter employee data " << (i + 1) << " :" << endl;
		e[i].setData();
		cout << endl;
	}
	
	cout << "Display data: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Employee "  << (i + 1) << " :" << endl;
		e[i].getData();
		totalcost += e[i].geTotalInc();
	}
	
	cout << "Total salary paind to all employees: "  << totalcost << endl;
	
	return 0;
}


/*
output -> 

Enter how many employee details you want to store: 2

Enter employee details: 
Enter employee data 1 :
Enter age of the employee: 35
Enter basic salary: 20000
Enter year of experience: 6
Enter designation: Manager

Enter employee data 2 :
Enter age of the employee: 28
Enter basic salary: 15000
Enter year of experience: 3
Enter designation: Developer

Display data:
Employee 1 :
Employee age: 35
Employee basic salary: 20000
DA (60% of basic salary): 12000
TA (10 % of basic salary): 2000
Employee year of experience: 6
Designation: Manager
Total income: 35200 Rs.

Employee 2 :
Employee age: 28
Employee basic salary: 15000
DA (60% of basic salary): 9000
TA (10 % of basic salary): 1500
Employee year of experience: 3
Designation: Developer
Total income: 25500 Rs.

Total salary paid to all employees: 60700

*/