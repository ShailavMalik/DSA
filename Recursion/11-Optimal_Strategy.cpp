#include <iostream>
using namespace std;

int maxAmount(int arr[], int i, int j)
{
    if (i > j)
        return 0;
    int choice1 = arr[i] + min(maxAmount(arr,i+2, j), maxAmount(arr, i+1, j - 1));
    int choice2 = arr[j] + min(maxAmount(arr, i + 1, j-1), maxAmount(arr,i,j-2 ));
    int ans=max(choice1,choice2);
    return ans;
}

int main()
{
    int arr[] = {8,15,3,7};
    int n = sizeof(arr) / sizeof(*arr);
    int i = 0, j = n - 1;
    cout << maxAmount(arr, i, j);

    return 0;
}