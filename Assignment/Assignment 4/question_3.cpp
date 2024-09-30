#include <iostream>
#include <string>
using namespace std;

class Electric{
	private:
		int cousId;
		string cousName;
		int unit;
		int totalbill;
	
	public:
		void setData() {
			cout << "Enter coustomer ID: ";
			cin >> cousId;
			cout << "Enter coustomer name: ";
			cin >> cousName;
			cout << "Enter comsumed unit: ";
			cin >> unit;
			cout << endl;
		}
		
		double calBill() {
			double bill;
			if (unit <= 100) {
				bill = unit * 1.2;
			}
			else if (unit <= 300) {
				bill = 100 * 1.2 + (unit - 100) * 2;
			}
			else {
				bill = 100 * 1.2 + 200 * 2 + (unit - 300) * 3;
			}
			
			return bill;
		}
		
	public:
		void getData() {
			cout << "Coustomer ID: " << cousId << endl;
			cout << "Coustomer name: " << cousName << endl;
			cout << "Comsumed unit: " << unit << endl;
			totalbill = calBill();
			cout << "Total bill: " << totalbill << endl;
		}
			
};


int main() {
	Electric a;
	a.setData();
	a.getData();
	
	return 0;
}

/*
output -> 

Enter customer ID: 101
Enter customer name: Sayan
Enter consumed units: 400

Customer ID: 101
Customer name: Sayan
Consumed units: 400
Total bill: 820 Rs.


*/