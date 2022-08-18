// Link to Question https://www.spoj.com/problems/EKO/
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int maxsawblade(vector<ll> a, ll target)
{
    ll sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum = sum + a[i]; // sum of all trees
    }
    ll ans = sum - target;
    ans = ans / a.size();
    ll newsize = a.size();
    sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (ans <= a[i])
            sum = sum + a[i]; // sum of wood of trees greater than or equal to ans

        else
            newsize--; // we reduces no. of trees less than ans
    }
    ans = sum - target;
    ans = ans / newsize;

    return ans;
}

int main()
{
    ll size;
    cin >> size;
    ll target;
    cin >> target;
    vector<ll> a(size);
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    ll ans = maxsawblade(a, target);
    cout << ans;
    return 0;
}