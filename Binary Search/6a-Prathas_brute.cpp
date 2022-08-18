// Brute force approach
#include <iostream>
using namespace std;

int TimeRequired(int ranks[], int n, int p)
{
    // time taken if only first cook make prathas
    // in no case cooks will take more than this time
    int max = 0;
    for (int i = 1; i <= p; i++)

    {
        max += ranks[0] * i;
    }
    cout<<"max = "<<max<<endl;

    
    for (int time = 1; time < max; time++)
    {
        int count = 0;
        cout << "After min " << time << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            int t = time; // 2
            int k = 1;
            cout << "Cook" << i + 1 << endl;
            while (t > 0)
            {
                t = t - k * ranks[i]; // 1 -1
                cout<<"k = "<<k<<endl; 
                 k++;  
                             // 2
                if (t >= 0)
                {
                    count++; // 1
                }

                cout << count << endl;
            }
            cout << endl;
        }
        if (count >= p)
            return time;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int p = 12;
    cout << endl
         << TimeRequired(arr, 4, p);

    return 0;
}