// Program to check if an array is palindrome or not
#include <iostream>
using namespace std;

bool checkPalindrome(string arr, int n)
{
    // This is two pointer approach
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {

        if (arr[i] != arr[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string arr = "mom";
    cout << checkPalindrome(arr, 3);

    return 0;
}