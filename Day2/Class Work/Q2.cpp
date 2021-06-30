/*
Given two integer arrays nums1 and nums2, return an array of their intersection.
Each element in the result must be unique and you may return the result in any order.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    map<int,int> mp;
    for(int i=0;i<nums1.size();i++){
        mp[nums1[i]]++;
    }
    for(int i=0;i<nums2.size();i++){
        if(mp[nums2[i]]!=0){
            res.push_back(nums2[i]);
            mp[nums2[i]]=0;
        }
    }
    return res;
}

int main()
{
	vector<int> nums1;
	vector<int> nums2;
	vector<int> result;
	int m,n,x,y;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x;
		nums1.push_back(x);
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>y;
		nums2.push_back(y);
	}
	result=intersection(nums1,nums2);
	for (int i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}
