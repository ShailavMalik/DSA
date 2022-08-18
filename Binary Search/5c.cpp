// Link to Question https://www.spoj.com/problems/EKO/
#include <iostream>
#include <algorithm>
using namespace std;

int sawHeight(int arr[], int n, int target)
{
    sort(arr, arr + n);
    int a[n] = {};
    int sum = 0;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (arr[i] - t) * (n - i);
        t = arr[i];
        a[i] = sum;
    }

    int i = 0;
    t = sum - target;

    while (i < n)
    {

        if (t < a[i])
            break;

        else
            i++;
    }

    t -= a[i - 1];
    t /= (n - i);

    return t + arr[i - 1];
}

int main()
{
    int size;
    cin >> size;
    unsigned long long target;
    cin >> target;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    unsigned long long ans = sawHeight(a, size, target);
    cout << ans;
    return 0;
}