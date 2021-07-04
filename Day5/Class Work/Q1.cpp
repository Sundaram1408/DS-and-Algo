/*
Given a 2D grid of size m x n and an integer k. You need to shift the grid k times.
In one shift operation:
	Element at grid[i][j] moves to grid[i][j + 1].
	Element at grid[i][n - 1] moves to grid[i + 1][0].
	Element at grid[m - 1][n - 1] moves to grid[0][0].
Return the 2D grid after applying shift operation k times.
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    vector<vector<int>>grid1=grid;
    k=k%(grid.size()*grid[0].size());
    while(k--)
    {
        int n=grid.size();
        int m=grid[0].size();            
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {               
                if(j+1<m)
                {
                  grid1[i][j+1]=grid[i][j]; 
                }
                if(i+1<n)
                {
                 grid1[i+1][0]=grid[i][m-1];   
                }
                 
            }
        }                        
        grid1[0][0]=grid[n-1][m-1];
        grid=grid1;
    }
    return grid1;
}

int main(){
	vector<vector<int>>mat,res;
	int n,m,x,k;
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
	res=shiftGrid(mat,k);
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}