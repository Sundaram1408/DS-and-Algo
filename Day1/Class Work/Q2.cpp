/*
Given an integer array nums. A key is also given. Remove all the occurence of the given key in-place. Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
*/

#include<bits/stdc++.h>
using namespace std;

int removeKey(int arr[],int n,int key)
{
    int j = 0;
    if (n==0) {
       return 0;
    }
    for (int i=0;i<n;i++) {
        if (arr[i]!=key) {
            arr[j]=arr[i];
            j++;
        }
    }
    return j;
}

int main()
{
	int n;
	cin>>n;
	int nums[n];
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	int key;
	cin>>key;
	int res=removeKey(nums,n,key);
	cout<<res;
	return 0;
}
