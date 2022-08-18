#include <iostream>
using namespace std;

void rev(int arr[],int n)
{
   int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}
 
int main() 
{
    int arr[]={8,3,9,0,1};

    rev(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }


 
    return 0; 
}