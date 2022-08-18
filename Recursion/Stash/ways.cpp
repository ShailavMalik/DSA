#include <iostream>
using namespace std;

int getWays(int coins[], int n, int sum)
{
    if (sum == 0)
        return 1;
    if (sum < 0)
        return 0;
    cout << endl
         << "recursive call" << endl;
    int ways = 0;
    ways = ways + getWays(coins, n, sum - coins[0]);
    cout << " ways = " << ways << endl;
    return ways;
}

int main()
{
    int arr[] = {1, 2};
    int n = sizeof(arr) / sizeof(*arr);
    int sum = 4;
    cout << getWays(arr, n, sum);

    return 0;
}