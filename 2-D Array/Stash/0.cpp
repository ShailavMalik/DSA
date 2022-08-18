// Function to print a 2-D array
#include <iostream>
using namespace std;
void printArray(int row, int col,int arr[][col])
{
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}