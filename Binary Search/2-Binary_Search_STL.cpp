#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int arr[]={2,4,8,10,15};
    int target=10;
    cout<<binary_search(arr,arr+5,target);
 
    return 0; 
}