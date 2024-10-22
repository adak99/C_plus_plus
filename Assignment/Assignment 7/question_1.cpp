#include <iostream>
using namespace std;

class Calculation
{
public:
    void calculate(int a, int b, int c)
    {
        int result = a + b + c;
        double avg = result / 3;
        cout << "Sum: " << result << endl;
        cout << "Average: " << avg << endl;
    }

    void calculate(float a, float b, float c)
    {
        float result = a + b + c;
        double avg = result / 3;
        cout << "Sum: " << result << endl;
        cout << "Average: " << avg << endl;
    }

    void calculate(int a, int b, float c)
    {
        float result = a + b + c;
        double avg = result / 3;
        cout << "Sum: " << result << endl;
        cout << "Average: " << avg << endl;
    }

    void calculate(int a, float b, float c)
    {
        float result = a + b + c;
        double avg = result / 3;
        cout << "Sum: " << result << endl;
        cout << "Average: " << avg << endl;
    }

    void calculate(int a, float b, int c)
    {
        float result = a + b + c;
        double avg = result / 3;
        cout << "Sum: " << result << endl;
        cout << "Average: " << avg << endl;
    }
};

int main()
{
    Calculation c;

    cout << "3 integer:" << endl;
    c.calculate(10, 20, 20);
    cout << endl;

    cout << "3 float: " << endl;
    c.calculate(2.3f, 4.6f, 7.4f);
    cout << endl;

    cout << "2 integer-1float: " << endl;
    c.calculate(12, 34, 78.4f);
    cout << endl;

    cout << "1 integer-1float-1integer:" << endl;
    c.calculate(32, 1.3f, 34.5f);

    return 0;
}