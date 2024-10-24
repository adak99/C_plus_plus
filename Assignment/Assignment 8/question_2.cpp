#include <iostream>
using namespace std;

class Calculate
{
private:
    int n;

public:
    // constructor
    Calculate(int val) : n(val) {}

    // calculate the vlaue if it is prime number or not
private:
    bool isPrime(int num)
    {
        if (num <= 1)
            return false;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }

public:
    // display function
    void display()
    {
        if (isPrime(n))
            cout << "The number is a prime and it is multiplied by 2: " << (n *= 2) << endl;
        else
            cout << "The number is not a prime and it is divided by 2: " << (n /= 2) << endl;
    }
};

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    Calculate a(n);
    a.display();
    return 0;
}

/*
Enter any number: 7
The number is a prime and it is multiplied by 2: 14

Enter any number: 10
The number is not a prime and it is divided by 2: 5

*/