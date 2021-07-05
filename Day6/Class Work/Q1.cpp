/*
Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    vector<vector<int>> res(matrix[0].size(),vector<int>(matrix.size()));
    for(int i=0;i<matrix[0].size();i++){
        for(int j=0;j<matrix.size();j++){
            res[i][j]=matrix[j][i];
        }
    }
    return res;
}

int main(){
	vector<vector<int>>mat,res;
	int m,n,x;
	cin>>m>>n;
	for (int i = 0; i < m; i++){
		vector<int>v;
		for(int j =0; j < n; j++){
			cin>>x;
			v.push_back(x);
		}
		mat.push_back(v);
	}
	res=transpose(mat);
	for (int i = 0; i < res.size(); ++i){
		for (int j = 0; j < res[0].size(); ++j){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
