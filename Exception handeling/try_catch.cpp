#include <iostream>
using namespace std;

int main()
{
    int age = 18;

    try
    {
        if (age >= 18)
        {
            cout << "He allowed to voting." << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int age)
    {
        cout << "You don't have a allowed to voting." << endl;
        cout << "Your age is" << age << endl;
    }

    return 0;
}