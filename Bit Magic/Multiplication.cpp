#include <iostream>
using namespace std;

// Function to divide a by b and
// return floor value it
long long divide(long long dividend, long long divisor)
{
    // Calculate sign of divisor i.e.,
    // sign will be negative only if
    // either one of them is negative
    // otherwise it will be positive
    int sign = ((dividend < 0) ^
                (divisor < 0))
                   ? -1
                   : 1;

    // remove sign of operands
    dividend = abs(dividend);
    divisor = abs(divisor);

    long long quotient = 0, temp = 0;

    // test down from the highest bit and
    // accumulate the tentative value for
    // valid bit
    for (int i = 31; i >= 0; --i)
    {
        cout<<"i = "<<i<<endl;
        if (temp + (divisor << i) <= dividend) //4
        {
            cout << "inside if"<<endl;
            temp += divisor << i; 
            cout<<"temp = "<<temp<<endl; //6
            quotient |= 1LL << i; // 2
            cout << quotient << endl;
        }
    }

    if (sign == -1)
        quotient = -quotient;

    return quotient;
}

int main()
{

    int a = 123, b = 31;
    cout << divide(a, b);

    return 0;
}
