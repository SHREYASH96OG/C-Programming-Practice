// Write a program which accept N number from the user and return the average.
#include<iostream>
#include<vector>
using namespace std;

int avg(vector<int>arr)
{
  int sum = 0;
  for(int i :arr)
  {
    sum += i;
  }
  return sum/arr.size();
}

int main()
{
  vector<int>arr;
  int num;
  cin >> num;
  int temp;
  for (int i = 0;i < num;i++)
  {
    cin >> temp;
    arr.push_back(temp);
  }
  cout<<avg(arr);
  return 0;
}



