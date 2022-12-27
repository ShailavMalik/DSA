#include <iostream>
#include <stack>
using namespace std;

#define operand(ch) (((int(ch) >= 'A' && int(ch) <= 'z') || int(ch) >= '0' && int(ch) <= '9') ? 1 : 0)

bool higherPrecendance(char op1, char op2)
{
    if (((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/' || op2 == '^')))
        return true;
    else if ((op1 == '*' || op1 == '/') && op2 == '^')
        return true;
    else
        return false;
}

bool equalPrecedance(char op1, char op2)
{
    if (op1 == op2 || (op1 == '+' && op2 == '-') || (op2 == '+' && op1 == '-') || (op1 == '*' && op2 == '/') || (op2 == '*' && op1 == '/'))
        return true;
    else
        false;
}

// * main function
string infixToPostfix(string input)
{
    string postfix = '\0';
    stack<char> s;

    for (int i = 0; i < input.length(); i++)
    {
        // ? append the operand to postfix expression
        //  as it appears while scanning from left to right
        if (operand(input[i]))
            postfix.push_back(input[i]);

        // ? as operator appears
        else
        {
            if (s.empty() || s.top() == '(')
                s.push(input[i]);

            // * operators having more precedance than the top of the stack
            else if (higherPrecendance(s.top(), input[i]))
            {
                s.push(input[i]);
            }

            //* operators having equal precedence & left to right associativity
            else if (equalPrecedance(s.top(), input[i]) && input[i] != '^')
            {
                postfix.push_back(s.top());
                s.pop();
                s.push(input[i]);
            }

            // * operators having equal precedence & right to left associativity
            else if (equalPrecedance(s.top(), input[i]) && input[i] == '^')
            {
                s.push(input[i]);
            }

            //  * now only 1 case left:
            // operators having less precedance than top of the stack
            else
            {
                while (1)
                {
                    postfix.push_back(s.top());
                    s.pop();
                    // check against new top
                    if (higherPrecendance(s.top(), input[i]))
                    {
                        s.push(input[i]);
                        break;
                    }
                }
            }
        }
    }
    return postfix;
}

int main()
{
    string input = "k+l";
    cout << infixToPostfix(input) << endl;

    return 0;
}