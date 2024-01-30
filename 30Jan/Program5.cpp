// Program to print the elements of an array present on even position.
#include<iostream>
#include<vector>
using namespace std;

void even_position_elements(vector<int>arr)
{
     for(int i = 0;i < arr.size();i++)
     {
        if(i%2 == 0)
        {
            cout<<arr[i]<<" ";
        }
     }
}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    int temp;
    for(int i = 0;i < num;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    even_position_elements(arr);
    return 0;
}
