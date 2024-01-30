// Write a program which accepts one string from user and checks the string is palindrome or not.
#include<iostream>
#include<algorithm>
using namespace std;

bool palindrome(string str)
{
    string re_str = "";
    for(char i:str)
    {
        re_str = i + re_str;
    }
    if(str == re_str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if(palindrome(str))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}
