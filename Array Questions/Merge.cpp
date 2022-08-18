#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int size1 = m, size2 = n;
    int *arr = new int[m + n];

    int start1 = 0, start2 = 0;
if(n==0)
{
    arr[i]=arr[start]
}
    for (int i = 0; i < m + n; i++)
    {
        if (nums1[start1] <= nums2[start2] && size1 > 0)
        {
            arr[i] = nums1[start1];
            size1--;
            start1++;
        }
        else if (size2 > 0)
        {
            arr[i] = nums2[start2];
            size2--;
            start2++;
        }
    }
    // copy arr to nums1
    for (int j = 0; j < n + m; j++)
    {
        nums1[j] = arr[j];
    }
}
int main()
{
    vector<int> nums1 = {1};
    vector<int> nums2 = {};

    merge(nums1, 1, nums2, 0);
    for (auto i : nums1)
    {
        cout << i << " ";
    }

    return 0;
}