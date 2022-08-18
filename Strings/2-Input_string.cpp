// Program to illustrate that cin leaves new line char (\n) in the buffer
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  string str1, str2;
  getline(cin, str1);
  cout << "str1 is->" << str1 << endl;
  cin >> n;
  cout << n << endl;
  // cin leaves new line char (\n) in the buffer
  // we have to use getchar() to remove it from the buffer
  getchar();
  getline(cin, str2);
  cout << "str2 is->" << str2 << endl;

  return 0;
}