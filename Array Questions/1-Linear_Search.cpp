// Program for Linear Search in an array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 8, -2, -10};
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        // transverse all elements and check for n
        if (arr[i] == n)
        {
            cout << n << " is at index " << i << endl;
            break;
        }

        else
        {
            if (i == 4)
            {
                cout << "Number not found!";
            }
        }
    }

    return 0;
}