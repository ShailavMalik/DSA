#include <iostream>
using namespace std;

void toBinary(int n)
{
    if (n == 0)
        return;
    toBinary(n >> 1);
    cout << (n & 1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    toBinary(n);

    return 0;
}