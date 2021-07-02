/*
Let's call an array arr a mountain if the following properties hold:
	arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
	arr[0] < arr[1] < ... arr[i-1] < arr[i]
	arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain,
return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
*/

#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    return distance(arr.begin(), max_element(arr.begin(), arr.end()));
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
	res=peakIndexInMountainArray(arr);
	cout<<res<<endl;
	return 0;
}
