/*
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c 
keeping its original data.
You are given an m x n matrix mat and two integers r and c representing the row number and column number of the wanted reshaped matrix.
The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.
If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
*/

#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
    if(r * c != mat.size() * mat[0].size()) return mat;
    vector<vector<int>> res(r);
    int row = 0, col = 0;
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[0].size(); j++){
            if(col == c){
                col = 0;
                row++;
            }
            res[row].push_back(mat[i][j]);
            col++;
        }
    }
    return res;
}

int main(){
	vector<vector<int>>mat,res;
	int n,m,x,r,c;
	cin>>m>>n;
	for (int i = 0; i < m; i++){
		vector<int>v;
		for(int j =0; j < n; j++){
			cin>>x;
			v.push_back(x);
		}
		mat.push_back(v);
	}
	cin>>r>>c;
	res=matrixReshape(mat,r,c);
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}