//Program to reverse an array using a temp variable
#include <iostream>
using namespace std;
 
int main() 
{
    int arr[]={1,2,3,4,5,6};
     
     int n=sizeof(arr)/sizeof(int);
     cout<<n<<endl;
     for(int i=0;i<((n/2));i++)
     {
         int temp=arr[i]; 
         arr[i]=arr[n-i-1];
         arr[n-i-1]=temp;
     }

     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<"\t";
     }
 
    return 0; 
}