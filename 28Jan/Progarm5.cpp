// Write a program to print given pattern
// *
// *  *
// *  *  *
// *  *  *  *
// *  *  *  *  *

#include<iostream>
using namespace std;

void pattern(int row)
{
  for (int i = 1;i <= row;i++)
  {
    for (int j = 1;j <= i;j++)
    {
      cout << "*";
    }
  cout << endl;
  }
}

int main()
{
  int row;
  cin >> row;
  pattern(row);
  return 0;
}
