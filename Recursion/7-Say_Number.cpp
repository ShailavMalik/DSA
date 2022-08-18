#include <iostream>
using namespace std;

void Word(int num)
{
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << arr[num] << " ";
}

void sayNum(int n)
{
    if (n == 0)
        return;
    int rem = n % 10;
    n /= 10;
    sayNum(n);
    Word(rem);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    sayNum(n);

    return 0;
}