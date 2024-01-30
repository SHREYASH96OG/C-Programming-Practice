// Write a program which accept rows and numbers of column from user and display below pattern.
// Input : row = 7, col = 7
// Output :
//                   *
//                *  *
//             *  *  *
//          *  *  *  *
//       *  *  *  *  *
//    *  *  *  *  *  *
// *  *  *  *  *  *  *
#include<iostream>
using namespace std;

void patt(int row){
    for(int i = 0;i <= row;i++)
    {
        for(int k = row; k >= i;k--)
        {
            cout<<"  ";
        }
        for(int j = 0;j < i;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}

int main()
{
    int row;
    cin >> row;
    patt(row);
    return 0;
}
