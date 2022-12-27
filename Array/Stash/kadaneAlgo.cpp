#include <iostream>
#include <climits>
using namespace std;
// largest sum contiguous sub array

void largestSum(int arr[], int size)
{
    int maxSum = arr[0];
    int sum = 0, trac = 0, startIndex = 0, lastIndex;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (sum > maxSum)
        {
            maxSum = sum;
            lastIndex = i;
            // update startIndex if the current subarray has greater sum than previous subarray
            startIndex = trac;
        }
        if (sum < 0)
        {
            sum = 0;
            // at this point startIndex may update
            // so we will store this index in trac
            trac = i + 1;
        }
    }

    // print largest sum
    cout << "Largest Sum: " << maxSum << endl;

    // printing the subarray having largest sum
    cout << "largest sum subray: ";
    for (int i = startIndex; i <= lastIndex; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    largestSum(arr, size);

    return 0;
}