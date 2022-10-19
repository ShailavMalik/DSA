// Program to find no. of prathas prepared after t minutes
#include <iostream>
using namespace std;

int main()
{
    int time;
    cin >> time;
    int cooks = 4;
    int ranks[] = {1, 2, 3, 4};
    int count = 0;
    for (int i = 0; i < cooks; i++)
    {
        int k = 1;
        int t = time;

        while (t > 0)
        {
            t = t - ranks[i] * k;
            if (t >= 0)
            {
                count++;
                k++;
            }
        }
    }

    cout << "No of prathas prepared: " << count;

    return 0;
}