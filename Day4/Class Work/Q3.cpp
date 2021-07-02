/*
Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) 
such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.
*/

#include <bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int>& nums) {
   int sum=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i+=2){
        sum+=nums[i];
    }
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
	res=arrayPairSum(arr);
	cout<<res<<endl;
	return 0;
}