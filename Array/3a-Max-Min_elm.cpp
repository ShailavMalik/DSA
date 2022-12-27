// Program to find max and min element of an array 
// by initialising max and min with 0th element
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, -4, 2, 10};
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        else if (arr[i] > max)
        {
            max = arr[i]; 
        }
    }

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}