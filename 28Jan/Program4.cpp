// Write a program which accept number from the user and return the addition digits.
#include<iostream>
using namespace std;

int sum_digits(int num)
{
  int sum = 0;
  while(num > 0)
  {
    int mod = num%10;
    sum += mod;
    num = num / 10;
  }
  return sum;
}

int main()
{
  int num;
  cin >> num;
  cout << sum_digits(num); 
  return 0;
}
