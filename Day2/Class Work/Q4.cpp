/*
Given an array of integers nums.
A pair (i,j) is called good if nums[i] == nums[j] and i < j.
Return the number of good pairs.
*/

#include<iostream>
#include<vector>
#include<map>

using namespace std;

int numGoodPairs(vector<int>& nums) {
    int count=0;
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        count+=mp[nums[i]];
        mp[nums[i]]++;
    }
    return count;
}

int main()
{
	vector<int> nums;
	int n,x;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>x;
		nums.push_back(x);
	}
	int res=numGoodPairs(nums);
	cout<<"Number of good pairs = "<<res<<endl;
	return 0;
}
