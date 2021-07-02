/*
The XOR total of an array is defined as the bitwise XOR of all its elements, or 0 if the array is empty.
For example, the XOR total of the array [2,5,6] is 2 XOR 5 XOR 6 = 1.
Given an array nums, return the sum of all XOR totals for every subset of nums. 
Note: Subsets with the same elements should be counted multiple times.
An array a is a subset of an array b if a can be obtained from b by deleting some (possibly zero) elements of b.
*/

#include<bits/stdc++.h>
using namespace std;

int subsetXORSum(vector<int>& nums) {
    int a=0,sum=0;
    for(int i=0;i<nums.size();i++){
        a|=nums[i];
    }
    sum=a*pow(2,nums.size()-1);
    return sum;
}

int main()
{
	vector<int> arr;
	int n,x,res;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		arr.push_back(x);
	}
	res=subsetXORSum(arr);
	cout<<res<<endl;
	return 0;
}