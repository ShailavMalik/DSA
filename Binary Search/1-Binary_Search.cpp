#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1, 5, 9, 14, 20, 23, 30, 34, 43};
    // Printing matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int target = 34;

    // finding column in which target is present
    int start = 0, end = 2;
    int midR;
    while (start <= end)
    {
        midR = (start + end) / 2;
        if (arr[midR][0] <= target && target <= arr[midR][2])
        {
            cout << midR <<" ";
            break;
        }

        else if (target > arr[midR][end])
        {
            start = midR + 1;

        }

        else (target < arr[midR][start])
        {
            end = midR - 1;
        }
        
        // find exact column of target 
        int s=0,e=2;
        while(s<=e)
        {
            int midC=(s+e)/2;
            if(target==arr[][midR])
            {
                cout<<midR;
            }

            else if(target<midR)
        }

    }


    return 0;
}
