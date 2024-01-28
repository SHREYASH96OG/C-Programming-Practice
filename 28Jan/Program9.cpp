// Write a program which accept range from user and return addition of all even.

#include<iostream>
using namespace std;

int sum_even(int i,int j)
{
  int sum = 0;
  for (int k = i;k <= j; k++)
  {
    if (k%2 == 0)
      sum += k;
  }
  return sum;

}

int main()
{
  int i,j;
  cin >> i >> j;
  cout << sum_even(i,j);
  return 0;
}
