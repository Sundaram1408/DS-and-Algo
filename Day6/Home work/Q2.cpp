/*
You are given an n x n grid where you have placed some 1 x 1 x 1 cubes. 
Each value v = grid[i][j] represents a tower of v cubes placed on top of cell (i, j).
After placing these cubes, you have decided to glue any directly adjacent cubes to each other, forming several irregular 3D shapes.
Return the total surface area of the resulting shapes.
Note: The bottom face of each shape counts toward its surface area
*/

#include<bits/stdc++.h>
using namespace std;

int surfaceArea(vector<vector<int>>& grid) {
    int res=0;
	for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid.size();j++){
            if(grid[i][j]>0)
                res+=(4*grid[i][j])+2;
            if(i>0)
                res-=min(grid[i][j],grid[i-1][j])*2;
            if(j>0)
                res-=min(grid[i][j],grid[i][j-1])*2;
        }
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
	res=surfaceArea(mat);
	cout<<res;
	return 0;
}