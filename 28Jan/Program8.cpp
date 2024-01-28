// Write a program which accept rows and numbers of column from user and display below pattern.

#include<iostream>
using namespace std;

void pattern(int row,int col)
{
  for(int i = 1;i <= row;i++)
  {
    for(int j = col;j >= 1;j--)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

int main()
{
  int row , col;
  cin >> row >> col;
  pattern(row,col);
  return 0;
}
