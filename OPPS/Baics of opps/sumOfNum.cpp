#include <iostream>
using namespace std;

class calculate
{
    int a, b, sum;

public:
    void input();
    void cal();
    void display();
};

void calculate::input()
{
    cout << "Enter the value of A: ";
    cin >> a;
    cout << "Enter the value of B: ";
    cin >> b;
}

void calculate::cal()
{
    sum = a + b;
}

void calculate::display()
{
    cout << "Sum = " << sum << endl;
}

int main()
{
    calculate obj;
    obj.input();
    obj.cal();
    obj.display();

    return 0;
}