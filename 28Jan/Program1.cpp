// Write a program which accept number from the user and check whether it is prime or not.

#include<iostream>
using namespace std;

bool primeornot(int num)
{
  if(num == 0 || num == 1)
  {
    return false;
  }
  else
  {
    for (int i = 2;i<num;i++)
    {
      if (num%i == 0)
      {
        return false;
      }
    }
    

  }
  return true;
}

int main()
{
  int num;
  cin >> num;
  if(primeornot(num))
  {
    cout<<"True";
  }
  else
  {
    cout<<"False";
  }

  return 0;
}
