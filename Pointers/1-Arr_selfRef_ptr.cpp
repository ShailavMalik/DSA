#include <iostream>
using namespace std;

int arraySize(int arr[])
{
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "n = " << n << endl;
}

int main()
{
  int arr[] = {8, 2, 3, 5, 6};
  arraySize(arr);
  int *p = 0;
  cout << "size of pointer p: " << sizeof(p) << endl;

  return 0;
}