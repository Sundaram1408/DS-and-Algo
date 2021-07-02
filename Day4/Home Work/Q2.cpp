/*
Given an integer array arr. You have to sort the integers in the array in ascending order by the number of 1's in their binary representation
and in case of two or more integers have the same number of 1's you have to sort them in ascending order.
Return the sorted array.
*/

#include <bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    //Using Brian Kernighan’s Algorithm to find set bits of the number
    int c1=0,c2=0,a1=a,b1=b;
    while(a1!=0){
        a1&=(a1-1);
        c1++;
    }
    while(b1!=0){
        b1&=(b1-1);
        c2++;
    }
    if(c1==c2)
        return a<b;
    return c1<c2;
}

vector<int> sortByBits(vector<int>& nums) {
    sort(nums.begin(),nums.end(),comp);
    return nums;
}

int main()
{
	vector<int> arr,res;
	int n,x;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>x;
		arr.push_back(x);
	}
	res=sortByBits(arr);
	for (int i = 0; i < res.size(); ++i){
		cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}
