#include <iostream>
using namespace std;

class student
{
private:
    string name;
    float marks[5];
    string sportName;
    int score;

public:
    void setData()
    {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter marks of 5 subjects: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Emter Marks of subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
        cout << "Enter sport name: ";
        cin >> sportName;
        cout << "Enter sport subject score: ";
        cin >> score;
    }

    float calMakrs()
    {
        float total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        if (score >= 50)
            total += (score * 0.4);

        return total;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks of subject " << (i + 1) << " : " << marks[i] << endl;
        }
        cout << "Sports: " << sportName << endl;
        cout << "Score: " << score << endl;
        cout << "Total marks: " << calMakrs() << endl;
    }
};

int main()
{
    int n;
    cout << "Enter how many student details you want to store: ";
    cin >> n;

    student *stud = new student[n];

    cout << "Enter student data: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student-> " << (i + 1) << endl;
        stud->setData();
    }

    cout << "\nDisplay student details: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student-> " << (i + 1) << endl;
        stud->display();
    }

    return 0;
}