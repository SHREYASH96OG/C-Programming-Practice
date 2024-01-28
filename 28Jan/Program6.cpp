// Write a function that reverses a string.
#include<iostream>
using namespace std;

string reverse(string str)
{
  string rev_str = "";
  for (char i: str)
  {
    rev_str = i + rev_str;
  }
  return rev_str; 
}

int main()
{
  string str;
  cin >> str;
  cout << reverse(str);
  return 0;
}
