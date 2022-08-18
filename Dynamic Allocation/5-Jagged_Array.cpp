#include <iostream>
using namespace std;

int main()
{
    int m = 5; //row
    int size[] = {4, 5, 2, 7, 9};
    int **arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[size[i]];
    }
    int cnt = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            arr[i][j] = cnt;
            cnt++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}