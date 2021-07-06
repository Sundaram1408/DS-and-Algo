/*
You are given an m x n binary matrix mat of 1's (representing soldiers) and 0's (representing civilians).
The soldiers are positioned in front of the civilians. That is, all the 1's will appear to the left of all the 0's in each row.
A row i is weaker than a row j if one of the following is true:
	The number of soldiers in row i is less than the number of soldiers in row j.
	Both rows have the same number of soldiers and i < j.
Return the indices of the k weakest rows in the matrix ordered from weakest to strongest.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    vector<int>res;
    vector<pair<int,int>>v;
    int c;
    for(int i=0;i<mat.size();i++){
        c=0;
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==1)
                c++;
        }
        v.push_back({c,i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++){
        res.push_back(v[i].second);
    }
    return res;
}

int main(){
	vector<vector<int>>mat;
	vector<int> result;
	int m,n,x,k;
	cin>>m>>n;
	for (int i = 0; i < m; i++){
		vector<int>v;
		for(int j =0; j < n; j++){
			cin>>x;
			v.push_back(x);
		}
		mat.push_back(v);
	}
	cin>>k;
	result=kWeakestRows(mat,k);
	for (int i = 0; i < result.size(); ++i)
		cout<<result[i]<<" ";
	cout<<endl;
}
