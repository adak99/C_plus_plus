#include <iostream>
using namespace std;

class Factorial
{
private:
    int n;
    int fact;

public:
    Factorial(int n)
    {
        this->n = n;
        this->fact = 1;

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }

        cout << "Printing from constructor factorical of " << n << " : " << fact;
    }

    Factorial(const Factorial &f)
    {
        n = f.n;
        fact = f.fact;
        cout << "Printing from cpoy constructor factorical of " << n << " : " << fact;
    }
};

int main()
{
    int n;
    cout << "Enter the number to find the factorial: ";
    cin >> n;

    Factorial a(n);

    return 0;
}