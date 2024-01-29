// Write a program which accept N numbers from user and display addition of digits of each element.
#include<iostream>
#include<vector>
using  namespace std;

int sum(int num)
{
    int sum = 0;
    while(num > 0)
    {
        int mod = num % 10;
        sum += mod;
        num = num/10;
    }
    return sum;

}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    int temp;
    for(int i = 0;i<num;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    for(int i : arr){
        cout<<sum(i)<<" ";
    }   
    return 0;
}
