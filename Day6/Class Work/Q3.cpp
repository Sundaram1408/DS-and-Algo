/*
Given an m x n matrix, return true if the matrix is Special. Otherwise, return false.
A matrix is Special if every diagonal from top-left to bottom-right has the same elements.
*/

#include<bits/stdc++.h>
using namespace std;

bool isSpecialMatrix(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size()-1;i++){
        for(int j=0;j<matrix[0].size()-1;j++){
            if(matrix[i][j]!=matrix[i+1][j+1]){
                return false;
            }
        }
    }
    return true;
}

int main(){
	vector<vector<int>>mat;
	int m,n,x;
	bool res;
	cin>>m>>n;
	for (int i = 0; i < m; i++){
		vector<int>v;
		for(int j =0; j < n; j++){
			cin>>x;
			v.push_back(x);
		}
		mat.push_back(v);
	}
	res=isSpecialMatrix(mat);
	cout<<res<<endl;
}
