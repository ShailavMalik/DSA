// Program to move negative elements to one side of array
#include <iostream>
#include "0.cpp"
using namespace std;

int main()
{
    int arr[] = {-2, -1, 9, -1, 5, -10,20}; 
    int j = 0;
    for (int i = 0; i < 7; i++)
    {

        if (arr[i] < 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }

    // function defined in '0.cpp'
    printArray(arr, 7);

    return 0;
}