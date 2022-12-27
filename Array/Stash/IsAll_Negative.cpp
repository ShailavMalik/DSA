
#include <iostream>
using namespace std;
bool IsAllNegative(int arr[], int n)
{
    // function to return if an array has all elements negative
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    if (count == n)
        return 1;

    else
        return 0;
}

int main()
{
    int arr[] = {-1, -2, -4, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << IsAllNegative(arr, n);

    return 0;
}