#include <iostream>
using namespace std;

void mergeSort(int arr[], int s, int e)
{
    int mid = (s + e) / 2;

    // create left array
    int *start = new int[mid - s];

    // create right array
    int *end = new int[e - mid - 1];

    // copying elements from original array to left array
    int startIndex = s;
    int endIndex = mid + 1;
    for (int i = s; i < mid - s; i++)
        start[i] = arr[startIndex++];

    // copying elements from original array to right array
    for (int i = mid + 1; i < e; i++)
        end[i] = arr[endIndex++];
        
}
int main()
{
    int arr[] = {2, 8, 1, 5, 0};
    int n = sizeof(arr) / sizeof(*arr);
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}