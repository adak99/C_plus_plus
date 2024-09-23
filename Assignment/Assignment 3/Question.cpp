#include <iostream>
#include <string>
using namespace std;

class student {
 public:
  int roll;
  string name;
  int age, m1, m2, m3;
  int total;
  double avg;

 public:
  void setData() {
    cout << "Enter student roll no: ";
    cin >> roll;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter marks(m1): ";
    cin >> m1;
    cout << "Enter marks(m2): ";
    cin >> m2;
    cout << "Enter marks(m3): ";
    cin >> m3;
    total = (m1 + m2 + m3);
    avg = (m1 + m2 + m3) / 3;
  }
};

int main() {
  int x;
  cout << "Enter how many student details you wnat to store: ";
  cin >> x;
  cout << endl;

  student *data = new student[x];

  cout << "Enter student detials: " << endl;
  for (int i = 0; i < x; i++) {
    cout << "Student no: " << (i + 1) << endl;
    data->setData();
    cout << endl;
  }

  int ranker = data[0].total;
  int index = 0;

  for (int i = 0; i < x; i++) {
    if (ranker > data[i].total) {
      ranker = data[i].total;
    }
  }

  if (ranker != -1) {
    cout << "Topper of the BCA 3rd semester" << endl;
    cout << "Higest Marks: " << data->total << endl;
    cout << "Roll number of highest scorer: " << data->roll << endl;
    cout << "Age of the highest Scorer: " << data->age << endl;
  }

  return 0;
}

/*

Enter how many student details you want to store: 3

Enter student details:
Student no: 1
Enter student roll no: 101
Enter student name: John
Enter age: 20
Enter marks(m1): 85
Enter marks(m2): 90
Enter marks(m3): 88

Student no: 2
Enter student roll no: 102
Enter student name: Alice
Enter age: 21
Enter marks(m1): 75
Enter marks(m2): 80
Enter marks(m3): 78

Student no: 3
Enter student roll no: 103
Enter student name: Bob
Enter age: 22
Enter marks(m1): 95
Enter marks(m2): 93
Enter marks(m3): 97


Topper of the BCA 3rd semester
Highest Marks: 270
Roll number of highest scorer: 103
Age of the highest Scorer: 22


*/