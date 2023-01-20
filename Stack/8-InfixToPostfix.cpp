// Program to covert infix to postfix expression
#include <iostream>
#include <stack>
#include <map>
using namespace std;

char prec(char stchar, char ch)
{
    map<char, int> m;
    m['^'] = 3;
    m['*'] = 2;
    m['/'] = 2;
    m['+'] = 1;
    m['-'] = 1;

    if (m[ch] > m[stchar])
        return 'h';
    else if (m[ch] < m[stchar])
        return 'l';
    else
        return 'e';
}

// * function to check if it is a operand
bool isOperand(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        return true;
    return false;
}

void infixToPostfix(string exp)
{
    stack<char> st;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        //* print operands as they come
        if (isOperand(exp[i]))
        {
            cout << exp[i];
            continue;
        }

        // if close bracket is found pop and print and stack elements until open bracket is found
        else if (exp[i] == ')')
        {
            while (st.top() != '(')
            {
                cout << st.top();
                st.pop();
            }
            st.pop();
            continue;
        }

    skip:
        //* if higher precedence (than top of stack) operator is found
        if (st.empty() || prec(st.top(), exp[i]) == 'h' || exp[i] == '(')
            st.push(exp[i]);

        //* if lower precedence (than top of stack) operator is found
        else if (prec(st.top(), exp[i]) == 'l')
        {
            cout << st.top();
            st.pop();
            goto skip;
        }

        //* if equal precedance (as top of the stack) operator is found
        //* follow associativity rule
        else
        {
            if (exp[i] == '^')
            {
                st.push(exp[i]);
                // continue;
            }
            else
                cout << st.top();
            st.pop();
            st.push(exp[i]);
        }
    }

    //* print all remaining elements of stack
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}

int main()
{
    string s = "(a+b^c*d)*(e+f/g)";
    infixToPostfix(s);
    // cout << isOperand('^');

    return 0;
}