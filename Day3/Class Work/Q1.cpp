/*
Given the array arr, for each arr[i] find out how many numbers in the array are smaller than it.
That is, for each arr[i] you have to count the number of valid j's such that j != i and arr[j] < arr[i].
Return the answer in an array.
*/

#include <bits/stdc++.h>
using namespace std;

int bSearch(vector<int>& arr, int key)
{
    int low = 0, high = arr.size() - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if ((mid == 0 || key > arr[mid - 1]) && arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> res(nums);
    sort(res.begin(), res.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int val = bSearch(res, nums[i]);
        nums[i] = val;
    }
    return nums;
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
	result=smallerNumbersThanCurrent(arr);
	for (int i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}
