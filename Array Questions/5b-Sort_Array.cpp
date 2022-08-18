// Program to sort an array of 0s,1s,2s
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 0, 1, 1, 0};

    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
        int j = 0;
        while (zero--)
        {
            arr[j] = 0;
            j++;
        }
        while (one--)
        {
            arr[j] = 1;
            j++;
        }
        while (two--)
        {
            arr[j] = 2;
            j++;
        }


    //printing array
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<'\t';
    }

return 0;
}