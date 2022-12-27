// Program to reverse an array by using an another array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 7, -2, -3, 10};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << '\t';
    }
    
    int n = sizeof(arr) / sizeof(int);

    // creating another array of size equal to previous array
    int arr1[n];

    // Assigning reversed value of arr to arr1
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[n - i - 1];
    }

    cout << endl
         << endl
         << "Array is reversed" << endl;

    // reversing the elments of arr using arr1
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }

    // printing reversed array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}