// Program to find sum of each row
#include <iostream>
using namespace std;
 
int main() 
{
    int arr[][3] = {2, 8, 3, 9, 1, 0, 4, 5, 9, 7, 6, 0};

    // Printing array
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }
    cout<<endl;

    for(int row=0;row<4;row++)
    {
        int sum=0;
        for(int col=0;col<3;col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
 
    return 0; 
}