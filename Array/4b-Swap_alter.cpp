// Program to swap alternative elements in an array
//using single case for both odd and even

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {-1, 5, 8, 9, 2, 6};

    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n - 1; i = i + 2) // i<n-1  ---> This is to avoid going outside the array
    {
        swap(arr[i], arr[i + 1]);
    }

    // Printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}