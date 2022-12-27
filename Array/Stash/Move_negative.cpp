
#include <iostream>
#include "C:\Users\malik\Coding\8.  DSA course\Array Questions\0.cpp"
using namespace std;
int main()
{
    int arr[] = {-5, 7, -3, -4, 9, 10, -1, 11};
    int n = sizeof(arr) / sizeof(int);
    // pick the negative number and slides to end
    // also maintaining order
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    cout << count << endl; // for debugging
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        int pos;

        if (arr[i] < 0)
        {
            // run this only once until a -ve element reaches its place
            cout<<i<<'\t';
            while (j--)
            {
                pos = i;
            }
        }

        // swap a -ve element till
        if (i == n - count + 1)
        {
            count--;
            i = pos - 1;
            j = 1;
            continue;
        }

        swap(arr[i], arr[i + 1]);
    }

    printArray(arr, n);

    return 0;
}