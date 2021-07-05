/*
You are given an n x n grid where we place some 1 x 1 x 1 cubes that are axis-aligned with the x, y, and z axes.
Each value v = grid[i][j] represents a tower of v cubes placed on top of the cell (i, j).
We view the projection of these cubes onto the xy, yz, and zx planes.
A projection is like a shadow, that maps our 3-dimensional figure to a 2-dimensional plane. 
We are viewing the "shadow" when looking at the cubes from the top, the front, and the side.
Return the total area of all three projections.
*/

#include<bits/stdc++.h>
using namespace std;

int projectionArea(vector<vector<int>>& grid) {
    int res=0;
    for(int i=0;i<grid.size();i++){
        int xz=0,yz=0;
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]>0)
                res++;
            if(grid[i][j]>xz)
                xz=grid[i][j];
            if(grid[j][i]>yz)
                yz=grid[j][i];
        }
        res+=xz+yz;
    }
    return res;
}

int main(){
	vector<vector<int>>mat;
	int n,m,x,res;
	cin>>m>>n;
	for (int i = 0; i < m; i++){
		vector<int>v;
		for(int j =0; j < n; j++){
			cin>>x;
			v.push_back(x);
		}
		mat.push_back(v);
	}
	res=projectionArea(mat);
	cout<<res;
	return 0;
}