// Link to Question https://www.spoj.com/problems/EKO/
#include <iostream>
#include <algorithm>
using namespace std;
// using binary search
int height_Setting(int trees[], int n, long long l)
{
    sort(trees, trees + n); // sorting is done only to find max height
    // time complexity of sort() function: O(nlogn)
    // we have used sort() function only because we know 
    // time complexity of our algorithm is already O(nlogn)
    int s = 0;
    int e = trees[n - 1];
    int ans;
    while (s <= e)//...this will run 'log n' times'
    {
     long long sum = 0;
        int mid = s + ((e - s) / 2);
        for (int i = 0; i < n; i++) //...this will run 'n' times
        {
            // calculating the wood gotten
            if ((trees[i] - mid) > 0)
                sum = sum + (trees[i] - mid);
        }

        if (sum == l)
        {
            return mid;
            // then mid is the point where saw blade is to be set
        }

        else if (sum < l)
        {
            e = mid - 1;
        }

        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int N, M;
    cin >> N >> M;
    int * arr=new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << height_Setting(arr, N, M);
    delete arr;
    return 0;
}
//Time complexity: O(nlog n)