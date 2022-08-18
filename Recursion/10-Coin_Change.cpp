#include <iostream>
using namespace std;

int getWays(int coins[], int n, int sum, int currentCoin)
{
    if (sum == 0)
        return 1;
    if (sum < 0)
        return 0;
    int ways = 0;
    for (int i = currentCoin; i < n; i++)
    {
        ways = ways + getWays(coins, n, sum - coins[i], i); // 4-1 
    }
    return ways;
}

int main()
{
    int arr[] = {1, 2};
    int n = sizeof(arr) / sizeof(*arr);//no of coins
    int sum = 4;
    cout << getWays(arr, n, sum, 0);

    return 0;
}