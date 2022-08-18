#include <iostream>
using namespace std;
 
int main() 
{
    int n;
    cin>>n;
    int * arr=new int [n];
    
    for(int i=0;i<n;i++)
    {
        arr[0]=i*10;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0; 
}