#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array :";
    cin >> n;
    int *arr = (int *)malloc(n * sizeof(int));
    cout << "array is from address: " << (int)arr << " to " << (int)&arr[n] << endl;
    int p;
    cout << "Enter new size of array :";
    cin >> p;

    realloc(arr, p);
    cout << "array is from address: " << (int)arr << " to " << (int)&arr[p] << endl;
    return 0;
}