#include <iostream>
#include <stack>
using namespace std;
 
int main() 
{
    stack <int> s;
    s.push(4);
    s.push(1);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty();
 
    return 0; 
}