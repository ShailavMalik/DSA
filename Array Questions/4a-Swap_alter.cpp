// Program to swap alternative elements in an array
// by taking separate cases for odd and even
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {-1, 5, 8, 9, 2, 6};

    int n = sizeof(arr) / sizeof(int);

    // case in which array has odd no. of elements

    /* this is done to avoid storing garbage value at
    last element in case of odd no. of elements */
    if (1 & n)
    {
        for (int i = 0; i < n - 1; i = i + 2)
        {
            arr[i] = arr[i] + arr[i + 1];
            arr[i + 1] = arr[i] - arr[i + 1];
            arr[i] = arr[i] - arr[i + 1];
        }
    }

    // case in which array has even no. of elements
    else
    {
        for (int i = 0; i < n; i = i + 2)
        {
            arr[i] = arr[i] + arr[i + 1];  // this is to swap elements
            arr[i + 1] = arr[i] - arr[i + 1];
            arr[i] = arr[i] - arr[i + 1];
        }
    }

    // Printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}