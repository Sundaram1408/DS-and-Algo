/*
Given an integer array nums. You have to shuffle the array on the condition given.
Input:- nums is of form [a1,a2,a3,a4,x1,x2,x3,x4].
Output:- The output array will be of form [a1,x1,a2,x2,a3,x3,a4,x4].
Constraint: The size of array should be even.
*/

#include<bits/stdc++.h>
using namespace std;

void shuffleArray(int arr[],int n)
{
	int k=0;
	int res[n];
	for(int i=0,j=n/2;i<n/2;i++,j++){
        res[k++]=arr[i];
        res[k++]=arr[j];
	}
	for (int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
}

int main()
{
	int n;
	cin>>n;
	int nums[n];
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	shuffleArray(nums,n);
	return 0;
}
