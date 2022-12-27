// Program to find max and min element
// using a single function having
// return type pair

#include <iostream>
using namespace std;

pair<int, int> getMaxMin(int arr[], int n)
{
    int mini = arr[0];
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }

        else if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return make_pair(mini,maxi);
}

int main()
{
    int arr[] = {1, 50, 9, -11, 8};
    cout<<"Minimum element: "<<getMaxMin(arr,5).first<<endl;
    cout<<"Maximum element: "<<getMaxMin(arr,5).second;

    return 0;
}