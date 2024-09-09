#include <iostream>
using namespace std;

class BinarySearch
{
public:
    static int binarySearch(int arr[], int size, int target)
    {
        int strIdx = 0;
        int endIdx = size - 1;
        int comparisons = 1;

        cout << "Elements of array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;

        while (strIdx <= endIdx)
        {
            comparisons++;

            int mid = strIdx + (endIdx - strIdx) / 2;

            if (target == arr[mid])
            {
                cout << "Minimum number of comparisons is: 1" << endl;
                cout << "Maximum number of comparisons is: " << comparisons << endl;
                return mid + 1; // return the 1-based index of the found item
            }
            else if (target < arr[mid])
            {
                endIdx = mid - 1;
            }
            else
            {
                strIdx = mid + 1;
            }
        }

        cout << "Minimum number of comparisons is: 1" << endl;
        cout << "Maximum number of comparisons is: " << comparisons << endl;
        return -1; // Item not found
    }
};

int main()
{
    int arr[] = {10, 19, 27, 30, 35, 67, 80};
    int target = 19;
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create object
    BinarySearch callfunction;

    int ans = callfunction.binarySearch(arr, size, target);

    if (ans == -1)
    {
        cout << "This item is not found in the array." << endl;
    }
    else
    {
        cout << "Searching Item: " << target << endl;
        cout << "Location : " << ans << endl;
    }

    return 0;
}
