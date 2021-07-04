/*
An image smoother is a filter of the size 3 x 3 that can be applied to each cell of an image by rounding down the average of the cell
and the eight surrounding cells (i.e., the average of the nine cells in the blue smoother).
If one or more of the surrounding cells of a cell is not present, we do not consider it in the average
(i.e., the average of the four cells in the red smoother).
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
    if(M.empty()){
        return M;
    }
    int rows = M.size();
    int cols = M[0].size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            int sum = M[i][j];
            int count = 1;
            if(i-1 >= 0){
                if(j-1 >= 0){
                    sum += M[i-1][j-1];
                    count++;
                }
                if(j+1 < cols){
                    sum += M[i-1][j+1];
                    count++;
                }
                sum += M[i-1][j];
	            count++;
            }
            if(i+1 < rows){
                if(j-1 >= 0){
                    sum += M[i+1][j-1];
                    count++;
                }
                if(j+1 < cols){
                    sum += M[i+1][j+1];
                    count++;
                }
                sum += M[i+1][j];
                count++;
            }
            if(j-1 >= 0){
                sum += M[i][j-1];
                count++;
            }
            if(j+1 < cols){
                sum += M[i][j+1];
                count++;
            }
            result[i][j] = sum/count;
        }
    }
    return result;
}

int main(){
	vector<vector<int>>mat,res;
	int n,m,x;
	cin>>m>>n;
	for (int i = 0; i < m; i++){
		vector<int>v;
		for(int j =0; j < n; j++){
			cin>>x;
			v.push_back(x);
		}
		mat.push_back(v);
	}
	res=imageSmoother(mat);
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
