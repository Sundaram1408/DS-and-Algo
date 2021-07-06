/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, 
return the number of negative numbers in grid.
*/

#include<bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int r = grid.size()-1, c = 0, count = 0;
    while(r>=0 && c<grid[0].size()){
        if(grid[r][c]<0){
            r--;
            count = count + grid[0].size() - c;
        }
        else 
            c++;
    }
    return count;
}

int main(){
	vector<vector<int>>mat;
	int m,n,x,res;
	cin>>m>>n;
	for (int i = 0; i < m; i++){
		vector<int>v;
		for(int j =0; j < n; j++){
			cin>>x;
			v.push_back(x);
		}
		mat.push_back(v);
	}
	res=countNegatives(mat);
	cout<<res<<endl;
}