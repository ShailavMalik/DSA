#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    vector<int> nums(0);
    cout<<nums.size()<<endl;
    cout<<nums.capacity()<<endl;
    cout<<sizeof(nums)<<endl;
    int *ptr=&nums[0];
    cout<<ptr<<endl;
    // for(auto i:nums)
    // {
    //     cout<<i<<" ";
    // }

}