#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {10, 8, 4, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    // first largest number
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }

        int sl = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max)
                continue;

                if(arr[i]>sl)
                sl=arr[i];
        }

       
 cout<<"Second Largest ="<<sl;

    return 0;
}