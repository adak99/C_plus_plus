#include <iostream>
using namespace std;

class findPalindrome
{
protected:
    int n;
    int c;
    int sum = 0;
    int r;

public:
    findPalindrome(int n)
    {
        this->n = n;
        this->c = n;
    }

    void calPalindrome()
    {
        while (n > 0)
        {
            r = n % 10;
            sum = r + (sum * 10);
            n = n / 10;
        }

        if (c == sum)
        {
            int mul = c * 2;
            cout << "It is a palindrome number, so final result is " << mul;
        }
        else
        {
            int div = c / 2;
            cout << "It is not a palindrome number, so final result is " << div;
        }
    }
};

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    findPalindrome b(num);
    b.calPalindrome();

    return 0;
}