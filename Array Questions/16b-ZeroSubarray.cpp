// Program to find the shortest subarray sum is zero
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void zeroSubArray(int arr[], int n)
{
    int sum = 0;
    int startIndex, endIndex;
    vector<int> prefixSum(n);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        prefixSum[i] = sum;
        startIndex = m[prefixSum[i]];
        if (m[prefixSum[i]] != 0 || prefixSum[i] == 0)
        {
            endIndex = i;
            break;
        }
        m[prefixSum[i]] = i + 1;
    }

    for (int j = startIndex; j <= endIndex; j++)
    {
        cout << arr[j] << " ";
    }
}

int main()
{
    int arr[] = {4, 2, -6, 2, 3};
    int n = sizeof(arr) / sizeof(*arr);
    zeroSubArray(arr, n);

    return 0;
}