// Program to take value in a 2-D array and print them
#include <iostream>
using namespace std;

int main()
{ //
    /* Ways in which we can assign value to a 2-D array */
    // int arr[4][3] = {{8, 5, 6}, {2, 9, 1}, {0, 3, 7}};
    // int arr[][3] = {{8, 5, 6}, {2, 9, 1}, {0, 3, 7}};

    int arr[][3] = {8, 5, 6, 2, 9, 1, 0, 3, 7, 4, 2, 0};
    // size of column must be specified at the time of declaration
    // for reason see at line 20

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << (int)&arr[i][j] << " ";
            // address = B.A. + (i*col +j)
        }
        cout << endl;
    }
    cout << endl
         << endl;

    // Printing the array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}