// Program to print count of pairs who sum is equal to a given value
#include <iostream>
#include <algorithm>
using namespace std;
int getPairsCount(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int count = 0;
    // two pointer approach
    for (int i = 0, j = n - 1; i < j;)
    {
        cout << "Value of j = " << j << " and i = " << i << endl;
        if (arr[i] + arr[j] == k)
        {
            cout << "Inside if condition: "
                 << "i =" << i << "  j = " << j << endl;
            count++;
            cout << "value of count at i = " << i << " iteration: " << count << endl
                 << endl;
            // focus on this part
            int temp = j;
            while (i < j - 1)
            {
                j--;
                if (arr[i] + arr[j] == k)
                {

                    count++;
                }
            }
            cout << endl
                 << endl;
            j = temp;
            i++;
            // part ends
        }

        if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 5, 5, 5, 5, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << endl
         << endl
         << getPairsCount(arr, n, 10);

    return 0;
}