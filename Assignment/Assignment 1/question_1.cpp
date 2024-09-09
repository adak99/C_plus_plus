#include <iostream>
using namespace std;

class calcualteFactorial
{
    int n, fact = 1;

public:
    void inputNumber()
    {
        cout << "Enter number: ";
        cin >> n;
    }
    void outputFact()
    {
        for (int i = 1; i < n; i++)
        {
            fact += fact * i;
        }

        cout << "Factorial of " << n << " is " << fact;
    }
};

int main()
{
    calcualteFactorial callClass; // crate object
    callClass.inputNumber();      // call function using obj
    callClass.outputFact();
    return 0;
}
