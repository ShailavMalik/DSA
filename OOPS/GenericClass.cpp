//* Program to show class using template
#include <iostream>
using namespace std;

template <typename T>
class Array
{
    T *ptr;
    int size;

public:
    Array(T *arr, int size);
    void print();
};

// Note: Array<T> is used to refer to class template
template <typename T>
Array<T>::Array(T *arr, int size)
{
    ptr = new T[size];
    for (int i = 0; i < size; i++)
    {
        *(ptr + i) = *(arr + i);
    }
    this->size = size;
}

template <typename T>
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << ptr[i];
    }
    cout << endl;
}

int main()
{
    int arr[5] = {2, 3, 0, 14, 93};
    Array<int> Arr(arr, 5);
    Arr.print();

    return 0;
}