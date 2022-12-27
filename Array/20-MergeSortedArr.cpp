#include <iostream>
#include <vector>
using namespace std;

 void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i=0;
    int j=0;
       int *arr=new int[m+n];
       int index=0;
       while(i<m&&j<n)
       {
           if(nums1[i]<=nums2[j])
               arr[index++]=nums1[i++];
           else
               arr[index++]=nums2[j++];
       }
       cout<<index<<endl;
       cout<<"i = "<<i<<", j = "<<j<<endl;

       //now copy remaining elements as it is
       if(j<i)
       {
           while(j<n)
           {
           arr[index++]=nums2[j++];
           }
       }
       
       if(i<j)
       {
           while(i<m)
           {
               arr[index++]=nums1[i++];
           }
       }
       
       //copy arr to nums1
       for(int l=0;l<m+n;l++)
       {
           nums1[l]=arr[l];
       }
           
    
}

int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    merge(nums1, 3, nums2, 3);
    for (auto i : nums1)
    {
        cout << i << " ";
    }

    return 0;
}