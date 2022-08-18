// Program to check if an array is palindrome or not
#include <iostream>
using namespace std;

bool checkPalindrome(string arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string arr = {1, 2, 3, 2, 1};
    cout << checkPalindrome(arr, 3);

    return 0;
}