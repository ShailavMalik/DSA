#include <iostream>
#include <algorithm>
using namespace std;

int minimizeTheHeights(int n, int arr[], int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0]; // 7
    cout << "bare-minimum = " << ans << endl;

    int mi;
    int ma;

    for (int i = 1; i < n; i++)
    {

        cout << endl
             << "i = " << i << endl;
        if (arr[i] - k < 0)
        {
            continue;
        }

        mi = min(arr[0] + k, arr[i] - k);
        cout << "mi = " << mi << endl;

        ma = max(arr[i - 1] + k, arr[n - 1] - k);
        cout << "ma = " << ma << endl;

        ans = min(ans, ma - mi);
        cout << "ans = " << ans << endl;
    }

    return ans;
}

int main()
{
    int arr[] = {3, 5, 1, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    cout << "final-ans = " << minimizeTheHeights(n, arr, k);

    return 0;
}