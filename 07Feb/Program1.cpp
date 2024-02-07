// Reverse array without using another array
#include<iostream>
using namespace std;

void reverse_arr(int* arr,int l,int r)
{
	while (l < r)
	{
		int temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
		l++;
		r--;
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int left = 0;
	int right = (sizeof(arr)/sizeof(arr[0]))-1;
	reverse_arr(arr,left,right);
	for(int num:arr)
	{
		cout<<num<<" ";
	}

	return 0;
}
