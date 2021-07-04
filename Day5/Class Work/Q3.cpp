/*
Given an integer array nums, handle multiple queries of the following type:
Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
Implement the NumArray class:
NumArray(int[] nums) Initializes the object with the integer array nums.
int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive
(i.e. nums[left] + nums[left + 1] + ... + nums[right]).
*/

#include<bits/stdc++.h>
using namespace std;

int sumRange(vector<int>& nums, int left, int right) {
    vector<int>sum;
    sum=nums;
    for(int i=1;i<nums.size();i++){
        sum[i] += sum[i-1];
    }
    if(left==0)
        return sum[right];
    else
        return sum[right]-sum[left-1];
}

int main(){
	vector<int>mat;
	int n,x,left,right,res;
	cin>>n;
	for(int i =0; i < n; i++){
		cin>>x;
		mat.push_back(x);
	}
	cin>>left>>right;
	res=sumRange(mat,left,right);
	cout<<res<<endl;
	return 0;
}
