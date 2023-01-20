// *Program to show generic function using templates
#include <iostream>
#include <typeinfo>
using namespace std;

template <class T>
T isgreater(T num1, T num2)
{
    return (num1 > num2) ? num1 : num2;
}

//* Multi-type Generics
template <typename T, typename U>
void printType(T a,U b)
{
    cout<<"a:"<<typeid(a).name()<<" "<<"b:"<<typeid(b).name()<<endl;
}

int main()
{
    // function call for integers
    cout << isgreater<int>(4, 9) << endl;
    // function call for double
    cout << isgreater(13.0, 37.0) << endl;
    // function call for characters
    cout << isgreater<char>('e', 't') << endl;


    printType(8,"shailav");


    return 0;
}