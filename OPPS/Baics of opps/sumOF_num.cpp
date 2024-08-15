// sum of three numbers if the result will be even then print the sum of the value if the result is odd print mul
#include <iostream>
using namespace std;

class calculate
{
    int a, b, c, sum, mul;

public:
    void input();
    int calSum();
    int calMul();
    void display();
};

void calculate::input()
{
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
}

int calculate::calSum()
{
    sum = a + b + c;
    return sum;
}

int calculate::calMul()
{
    mul = a * b * c;
    return mul;
}

void calculate::display()
{
    if (calSum() % 2 == 0)
    {
        cout << "Sum: " << calSum() << endl;
    }
    else
    {
        cout << "Mul: " << calMul() << endl;
    }
}

int main()
{
    calculate obj;
    obj.input();
    obj.calSum();
    obj.calMul();
    obj.display();

    return 0;
}