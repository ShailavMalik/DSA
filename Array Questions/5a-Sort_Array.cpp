// Program to sort an array 
// This is generic and can also be 
//used to sort array containing any number
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 2, 1, 2, 0, 1, 2, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(int);
    cout << n << endl
         << endl
         << endl;
    int count;
    do
    {
        count = 0;

        // moving bigger element to right side
        for (int i = 0; i < n; i++)
        {
            //cout << "loop has run " << i << " iterations" << endl;
            // cout << count << endl<< endl;     //<---- this is for debugging the program
            if (arr[i] > arr[i + 1])
            {
                arr[i] = arr[i] + arr[i + 1];  //this is to swap elements
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];
                count++;
            }
        }
    } while (count > 0); // run this loop until elements in array are not sorted in ascesding order

    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }

    return 0;
}