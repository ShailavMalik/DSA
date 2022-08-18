#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int target)
{
    if (arr[0] == target)
        return true;
    if (n == 0)
        return false;
    linearSearch(arr + 1, n - 1, target);
}

int main()
{
    int arr[] = {3, 9, 2, 4};
    int n = sizeof(arr) / sizeof(*arr);
    cout << linearSearch(arr, n, 4);

    return 0;
}