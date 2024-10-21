#include <iostream>
using namespace std;

int main() {
	string str = "ABC";
	string newString = "";
	
	for (int i = str.length(); i >= 0; i--) {
		cout << str[i];
	}
	cout << endl;
	
	return 0;
}