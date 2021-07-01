/*
Given a string s and an integer array indices of the same length.
The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
Return the shuffled string.
*/

#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    string str=s;
    for(int i=0;i<indices.size();i++){
        str[indices[i]]=s[i];
    }
    return str;
}

int main()
{
	string s,result;
	cin>>s;
	vector<int>arr;
	int n,x;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	result=restoreString(s,arr);
	cout<<result<<endl;
	return 0;
}