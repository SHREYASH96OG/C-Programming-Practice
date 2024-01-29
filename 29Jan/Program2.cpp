// Program tgo find frequency of each element in array.(Take array elements from user)

#include<iostream>
#include<vector>
#include<set>
using  namespace std;

int counter(vector<int>arr,int j)
{
    int count = 0;
    for(int i = 0;i < arr.size();i++)
    {
        if(arr[i] == j){
            count++;
        }

    }

    return count;
}

int main()
{
    vector<int>arr;
    set<int>new_arr;
    int num;
    cin >> num;
    int temp;
    for(int i = 0;i<num;i++)
    {
        cin >> temp;
        arr.push_back(temp);
        new_arr.insert(temp);
    }
    for(int i : new_arr){

        cout<<i<<" "<<"|"<<" "<<counter(arr,i);
        cout<<endl;
    }   
    return 0;
}
