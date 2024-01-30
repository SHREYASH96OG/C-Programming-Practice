// Write a program which accept n numbers and display factors of numbers.

#include<iostream>
using namespace std;

bool prime_numbers(int i)
{
    for(int j = 2;j < i; j++)
    {
        if(i%j == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    for(int i = 2;i <= num;i++){
        if(prime_numbers(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
