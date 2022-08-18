#include <iostream>
using namespace std;

int power(int x,int n)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans=ans*x;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = (n & 1);
        ans = bit * power(10, i) + ans;//1
        n = n >> 1;//000
        i++;
    }

    cout << ans << endl;

    return 0;
}