// Write a program which accept rows and numbers of column from user and display below pattern.
// Input : row = 6, col = 6
// Output :
// *   *   *   *   *   *   
// *   *               *
// *       *           *
// *           *       *
// *               *   *
// *   *   *   *   *   *

#include<iostream>
using  namespace std;

void pattern(int r,int c)
{
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            if(i == 0 || j == 0 || j == r-1 || i == c-1 ||i + j == c-1 )
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
}

int main()
{
    int r;
    int c;
    cin>>r>>c;
    if(r == c)
    {
        pattern(r,c);
    }
    else
    {
        cout<<"enter both number of row and column same.";
    }
    return 0;
}

