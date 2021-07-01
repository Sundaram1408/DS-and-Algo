/*
Given two arrays of integers nums and index. Your task is to create target array under the following rules:

Initially target array is empty.
From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
Repeat the previous step until there are no elements to read in nums and index.
Return the target array.

It is guaranteed that the insertion operations will be valid.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> target;
    for(int i=0;i<nums.size();i++){
        target.insert(target.begin()+index[i],nums[i]);
    }
    return target;
}

int main()
{
	vector<int>nums,index,result;
	int m,n,x,y;
	cin>>m;
	for (int i = 0; i < m; i++)
	{
		cin>>x;
		nums.push_back(x);
	}
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>y;
		index.push_back(y);
	}
	result=createTargetArray(nums,index);
	for (int i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}
