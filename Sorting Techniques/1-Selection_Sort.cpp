// Selection Sort
/* selection sort puts nth element at right place in nth iteration */

#include <iostream>
using namespace std;

// This algorithm is called selection sort because it repeatedly
// selects the next-smallest element and swaps it into place.
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {2, 9, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}