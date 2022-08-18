// Program to illustrate the use of strcat() function
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char s1[] = "Hi";
  /* Although we stored two characters in s1 but its size
    is 3 bytes becauses 1 character i.e., null character (\0)
    is added at its last by the compiler */
  cout << "sizeof(s1) = " << sizeof(s1) << endl;
  char s2[] = " I am a programmer";
  cout << "string1: " << s1 << endl;
  cout << "string2: " << s2 << endl
       << endl;
  //  for(int i=0;i<3;i++)
  //  {
  //    cout<<s1[i]<<" ";
  //  }
  // strcat() merges two strings and first element of s2 start pointing to first element to s1
  strcat(s1, s2);
  cout << endl;
  cout << "After using strcat(s1,s2) " << endl;
  cout << "string1 = string1 + string2 : " << s1 << endl;
  /// the second string is actually not copied to string1 but the
  // first element of string 2 star pointing to last element of string 1
  cout
      << endl
      << "sizeof(s1) = " << sizeof(s1);

  return 0;
}