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
