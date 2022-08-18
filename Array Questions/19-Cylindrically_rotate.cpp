#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
    }

    return 0;
}