//{ Driver Code Starts
#include <iostream>
#include <stack>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        int i = 0;
        while (x[i] != '\0')
        {
            // if open bracket comes push it into stack
            while (x[i] == '[' || x[i] == '{' || x[i] == '(')
            {
                s.push(x[i]);
                i++;
            }
            if (x[i] != '\0')
            {
                while (x[i] == ']' || x[i] == '}' || x[i] == ')')
                {
                    if (s.empty())
                        return false;
                    if ((x[i] == ')' && s.top() == '(') || (x[i] == ']' && s.top() == '[') || (x[i] == '}' && s.top() == '{'))
                    {
                        s.pop();
                        i++;
                    }
                    else
                        return false;
                }
            }
        }

        if (s.empty())
            return true;
        else
            return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
    return 0;
}
// } Driver Code Ends