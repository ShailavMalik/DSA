#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> m;
    int arr[] = {8, 2, -1, 2};
    for (int i = 0; i < 5; i++)
    {
        if(m[arr[i]]!=0)
        {
            cout<<i;
            break;
        }
        m[arr[i]]=i+1;
    }

    return 0;
}