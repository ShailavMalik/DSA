// ISO C++ forbids converting a string constant to 'char*
#include <iostream>
#include <cstring>
using namespace std;

void reverse(char ch[])
{
    int i = 0, j = strlen(ch) - 1;
    while (i <j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main()
{
    //char s1[] = "Character_Array";
   // reverse(s1);
    reverse("Character_Array");


    return 0;
}