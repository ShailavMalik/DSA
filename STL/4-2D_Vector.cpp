// Program to illustrate how to find no of rows and columns in a 2-D Vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 2, 8}, {3, 4, 9}};
    // Use matrix.size() for no of rows and matrix[0].size() for no of columns
    cout << "Rows = " << matrix.size() << endl;
    cout << "Columns = " << matrix[0].size() << endl
         << endl;

    // Printing the array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}