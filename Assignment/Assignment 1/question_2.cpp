#include <iostream>
using namespace std;

class FindMaxMinValueArr
{
private:
    int minValue, maxValue;

public:
    void calculateMinMaxValue(int arr[], int size)
    {
        minValue = arr[0];
        maxValue = arr[0];

        for (int i = 0; i < size; i++)
        {
            if (arr[i] < minValue)
            {
                minValue = arr[i];
            }
            if (arr[i] > maxValue)
            {
                maxValue = arr[i];
            }
        }
    }

    void outputResult()
    {
        cout << "Minimum value of the array is: " << minValue << endl;
        cout << "Maximum value of the array is: " << maxValue << endl;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size]; // Dynamically allocate the array

    cout << "Insert the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    FindMaxMinValueArr findMaxMin;
    findMaxMin.calculateMinMaxValue(arr, size);
    findMaxMin.outputResult();

    delete[] arr; // Free the dynamically allocated memory
    return 0;
}
