/*
A school is trying to take an annual photo of all the students. 
The students are asked to stand in a single file line in non-decreasing order by height. 
Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.
You are given an integer array heights representing the current order that the students are standing in.
Each heights[i] is the height of the ith student in line (0-indexed).
Return the number of indices where heights[i] != expected[i].
*/

#include <bits/stdc++.h>
using namespace std;

int heightChecker(vector<int>& heights) {
    int c=0;
    vector<int>temp;
    for(int i=0;i<heights.size();i++)
    {
        temp.push_back(heights[i]);
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<heights.size();i++){
        if(heights[i]!=temp[i]){
            c++;
        }
    }
    return c;
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
	res=heightChecker(arr);
	cout<<res<<endl;
	return 0;
}