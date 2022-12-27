#include <iostream>
using namespace std;

int partition(int *arr, int start, int end)
{
    int pivot = arr[start];
    int i = start, j = end;

    while (start < end)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (start > end)
            swap(arr[i], arr[j]);
    }
    swap(arr[start], arr[j]);

    return j;
}

void quickSort(int *arr, int start, int end)
{
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main()
{

    return 0;
}