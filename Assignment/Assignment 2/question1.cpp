#include <iostream>
using namespace std;

class SortArr
{
public:
    void sortArr(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    void display(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int arr[] = {6, 5, 1, 4, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    SortArr n;
    n.sortArr(arr, size);
    n.display(arr, size);

    return 0;
}