// Program to print largest sum contiguous subarray
// Kadane Algo
#include <iostream>
#include <vector>
using namespace std;

vector<int> AnsSubarray(int arr[], int n)
{
    int sum = 0;
    int ans = arr[0]; // 1
    int s = 0, e;
    for (int i = 0; i < n; i++)
    {
        int temp;
        int temp_sum;
        sum += arr[i]; // 1
        if(sum>temp_sum)
        s=temp;

        if (sum >= ans)
        {
            s = temp;
            ans = sum; // 1
            e = i;     // ending index of ans subarray
            // 0
        }
temp_sum=sum;
        if (sum < 0)
        {
            sum = 0;
            temp = i + 1; // starting index of ans subarray
        }
    }

    // code to handle if all elements are negative
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
            count++;
    }
    if (count == n)
        s = e;
    // code ends

    vector<int> v1;
    for (int j = s; j <= e; j++)
    {
        v1.push_back(arr[j]); // store all elements in the ans subarray
    }
    return v1;
}

int main()
{
    int arr[] = { 1, 2,-5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Subarray having largest sum: [ ";
    for (int i : AnsSubarray(arr, n))
    {
        cout << i << " ";
    }
    cout << "]";

    return 0;
}