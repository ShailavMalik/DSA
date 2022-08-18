// Program to find max and min element of an array
// by initialising the max and min with INT_MAX & INT_MIN
#include <iostream>
#include <limits.h>
using namespace std;

// Function to find max element
int getMax(int arr[], int n)
{
    // smallest possible element it can have
    int max_elm = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        max_elm = max(max_elm, arr[i]);
    }
    return max_elm;
}

// Function to find min element
int getMin(int arr[], int n)
{
    // largest possible element it can have
    int min_elm = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        min_elm = min(min_elm, arr[i]);
    }
    return min_elm;
}

int main()
{
    int arr[] = {0, -9, -1, 50, 8};

    cout <<"Maximum element: "<< getMax(arr, 5)<<endl;
    cout <<"Minimum element: "<< getMin(arr, 5);

    return 0;
}