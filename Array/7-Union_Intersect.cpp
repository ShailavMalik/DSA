// Program to find union and intersection of two sorted arrays
#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {0, 3, 5, 7, 9, 12};
    int arr2[] = {0, 5, 10, 15, 16};
    int count = 0;
    cout<<"Intersection of two arrays: ";
    for (int i = 0; i < 6; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            // prints intersecting elements
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << '\t';
            }
            
        }
    }

    return 0;
}