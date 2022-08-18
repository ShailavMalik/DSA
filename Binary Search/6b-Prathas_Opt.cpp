// Link to question: https://www.spoj.com/problems/PRATA/
#include <iostream>
#include <vector>
using namespace std;

int validAnswer(int ranks[], int n, int p, int time)
{
    int count = 0;
    // loop for calculating no of prathas made at a specified time
    for (int i = 0; i < n; i++)
    {
        int t = time;
        int k = 1;
        while (t > 0)
        {
            t = t - ranks[i] * k;
            k++;
            if (t >= 0)
            {
                count++;
            }
        }
    }
    if (count >= p)
        return 1;
    else
        return 0;
}

int TimeRequired(int ranks[], int n, int p)
{
    int ans;
    int s = 0;

    // time taken if only first cook make p prathas
    /* time taken by all cooks jointly will always be less than the timetaken by first cook
    to make p prathas alone (max) because they are also going to make some prathas out of p */
    int e = p * (p + 1) / 2;
    // loop for binary search
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        if (validAnswer(ranks, n, p, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int testcases, ranks[100], p, n;
    int ans;
    cin >> testcases;
    int k = 0;
    while (testcases--)
    {
        cin >> p >> n;
        // loop for taking ranks of 'n' cooks
        for (int i = 0; i < n; i++)
        {
            cin >> ranks[i];
        }

        TimeRequired(ranks, n, p);
        k++;
    }
    return 0;
}