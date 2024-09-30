#include <iostream>
#include <string>
using namespace std;

class CricketerData {
	public:
		string name;
		int inn;
		int notOut;
		int totalRuns;
		int totalWkt;
		
	public:
		void setData() {
			cout << "Enter name of the cricketer: ";
			cin >> name;
			cout << "Enter number of innings: ";
			cin >> inn;
			cout << "Enter how many times not out: ";
			cin >> notOut;
			cout << "Enter total runs: ";
			cin >> totalRuns;
			cout << "Enter total wickets: ";
			cin >> totalWkt;
		}
		
		void getData() {
			cout << "Name: " << name << endl;
			cout << "Number of innings: " << inn << endl;
			cout << "Not out innings: " << notOut << endl;
			cout << "Total runs: " << totalRuns << endl;
			cout << "Total wickets: " << totalWkt << endl;
		}
		
		
		float getBattingAverage() {
			if (inn - notOut != 0) {
				return (float)totalRuns / (inn - notOut);  
			} 
			else {
				return 0;  
			}
		}
};

int main() {
	int n;
	cout << "Enter how many cricketer details you want to store: ";
	cin >> n;
	
	CricketerData c[n];
	
	
	for(int i = 0; i < n; i++) {
		cout << "Enter cricketer data " << (i + 1) << ":" << endl;
		c[i].setData();
		cout << endl;
	}
	

	for(int i = 0; i < n; i++) {
		float avg = c[i].getBattingAverage();
		cout << "Cricketer data " << (i + 1) << ":" << endl;
		c[i].getData();
		
		if (c[i].inn >= 50 && avg > 35 && c[i].totalWkt > 49) {
			cout << "He is an ALL-ROUNDER." << endl;
		} 
		else if (c[i].inn >= 50 && avg > 35) {
			cout << "He is a BATSMAN." << endl;
		} 
		else if (c[i].inn >= 50 && c[i].totalWkt > 49) {
			cout << "He is a BOWLER." << endl;
		} 
		else {
			cout << "No specific role recognized." << endl;
		}
		cout << endl;
	}
	
	return 0;  
}


/*
Input-> 

Enter how many cricketer details you want to store: 2

Enter cricketer data 1:
Enter name of the cricketer: Sachin
Enter number of innings: 200
Enter how many times not out: 30
Enter total runs: 15921
Enter total wickets: 45

Enter cricketer data 2:
Enter name of the cricketer: Kapil
Enter number of innings: 100
Enter how many times not out: 20
Enter total runs: 5248
Enter total wickets: 434



output-> 

Cricketer data 1:
Name: Sachin
Number of innings: 200
Not out innings: 30
Total runs: 15921
Total wickets: 45
He is a BATSMAN.

Cricketer data 2:
Name: Kapil
Number of innings: 100
Not out innings: 20
Total runs: 5248
Total wickets: 434
He is an ALL-ROUNDER.

*/