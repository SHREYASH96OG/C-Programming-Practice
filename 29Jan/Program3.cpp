// Write a program which accept two numbers and give their relationship.

#include<iostream>
using  namespace std;

void relationship(int i,int j)
{
    if(i == j)
    {
        cout<<"Equal.";
    }
    else if (i > j)
    {
        cout<< i << " Greater than " << j;
    }
    else if (i < j)
    {
        cout<< i << " smaller than " << j;
    }
    
}

int main()
{
    int i;
    int j;
    cin>>i>>j;
    relationship(i,j);
    
    return 0;
}
