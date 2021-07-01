/*
We are given a list arr of integers representing a list compressed with run-length encoding.
Consider each adjacent pair of elements [freq, val] = [arr[2*i], arr[2*i+1]] (with i >= 0).  
For each such pair, there are freq elements with value val concatenated in a sublist. 
Concatenate all the sublists from left to right to generate the decompressed list.
Return the decompressed list.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> res;
    int freq,val;
    for(int i=1;i<nums.size();i+=2){
        val=nums[i];
        freq=nums[i-1];
        while(freq--){
            res.push_back(val);
        }
    }
    return res;
}

int main()
{
	vector<int>arr,result;
	int n,x;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	result=decompressRLElist(arr);
	for (int i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}