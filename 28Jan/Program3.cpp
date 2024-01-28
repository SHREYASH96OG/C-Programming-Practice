// Write a program which takes a year as input and check whether it is leap year or not.

#include<iostream>
using namespace std;

bool leap_or_not(int year)
{
  if(year % 4 == 0)
    return true;
  
  return false;
}

int main()
{
  int year;
  cin >> year;
  if (leap_or_not(year))
    cout<<"True";
  else
    cout<<"False";
  return 0;
}
