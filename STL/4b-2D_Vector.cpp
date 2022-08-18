#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    vector<vector<int>> v;
    v[0].push_back(3);
    v[0].push_back(5);
    v[0].push_back(9);
    v[1].push_back(2);
    v[1].push_back(20);

    for(auto i:v[0])
    {
       cout<<i<<" ";
    }



 
    return 0; 
}