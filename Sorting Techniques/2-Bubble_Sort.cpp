// Bubble Sort
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Function to sort the array using bubble sort algorithm.
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        // In first iteration it must have kept biggest element at end and so on
        // In general in nth iteration it has kept (n-i-1)th element at right place
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        printArray(arr, n);
        cout << endl;
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {3, 9, 1, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);

    // Printing array
    cout << endl;
    printArray(arr, n);

    return 0;
}