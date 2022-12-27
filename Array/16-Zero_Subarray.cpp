#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> zeroSubArr(int arr[], int n)
{
    int sum = 0;
    int startIndex, endIndex;
    vector<int> v;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        int prefixSum = sum;
        startIndex = m[prefixSum];
        if (m[prefixSum] != 0 || prefixSum == 0)
        {
            endIndex = i;
            break;
        }
        m[prefixSum] = i + 1;
    }

    for (int i = startIndex; i <= endIndex; i++)
    {
        v.push_back(arr[i]);
    }
    return v;
}

int main()
{
    int arr[] = {4, 2, -6, 0, 6};
    int n = sizeof(arr) / sizeof(*arr);
    cout << "SubArray having sum zero: [";
    for (auto i : zeroSubArr(arr, n))
    {
        cout << i << " ";
    }
    cout << "]";

    return 0;
}