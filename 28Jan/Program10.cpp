// Write a program to find factorial of input number.

#include<iostream>
using namespace std;

int factorial(int num)
{
  if(num >= 1)
  {
    return num * factorial(num -1);
  }
  return 1;
}

int main()
{
  int num;
  cin >> num;
  cout<<factorial(num);
}
