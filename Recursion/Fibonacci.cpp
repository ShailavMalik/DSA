#include <iostream>
using namespace std;
// 0 1 1 2 3 5 8 13 21 34 55

int fibonacci(int n)
{
    // cout<<n<<" ";
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout<<fibonacci(6);

    return 0;
}