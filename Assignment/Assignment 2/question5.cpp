#include <iostream>
using namespace std;

class FindElement
{
protected:
    int arr[10];
    int min;
    int max;

public:
    void input()
    {
        cout << "Enter array elements: ";
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
    }

    void findElement()
    {
        min = arr[0];
        max = arr[0];

        for (int i = 0; i < 10; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
    }

    void display()
    {
        cout << "Maximum: " << max << endl;
        cout << "Minimum: " << min << endl;
    }
};

int main()
{
    FindElement b;

    b.input();
    b.findElement();
    b.display();

    return 0;
}