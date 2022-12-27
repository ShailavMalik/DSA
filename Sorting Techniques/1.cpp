#include <iostream>
using namespace std;

void insertionSort(int *arr, int size)
{
   
}

int main()
{
    int arr[8] = {3, 8, 1, -2, 0, 5, 7, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}