// Write a program to count number of digits in given number.

#include<iostream>
using namespace std;

int count_digits(int num)
{
  int count = 0;
  while(num > 0)
  {
    count++;
    num = num / 10;
  }
  return count;
}

int main()
{
  int num;
  cin >> num;
  cout << count_digits(num); 
  return 0;
}
