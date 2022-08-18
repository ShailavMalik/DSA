// Program to find first and last position of an element
// using brute force method with O(n) time complexity
#include <iostream>
#include <vector>
using namespace std;

vector<int> getFirstLast(int arr[], int n, int target)
{
    vector<int> ans;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == target)
        {
            // if the position is smallest or largest store it
            if (arr[i - 1] != arr[i] || arr[i + 1] != arr[i])
            {
                ans.push_back(i + 1);
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 3, 4, 6, 6, 6, 7, 7, 9};
    // cout<<"First Position : "<<getFirstLast(arr,9,7)[0]<<endl;
    // cout<<"Second Position : "<<getFirstLast(arr,9,7)[1];
    cout << "First and last position respectively are: "<<endl;
    for (auto i : getFirstLast(arr, 9, 7))
    {
        cout << i << endl;
    }

    return 0;
}