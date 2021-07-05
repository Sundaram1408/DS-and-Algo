/*
An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
You are also given three integers sr, sc, and newColor. You should perform a flood fill on the image starting from the pixel image[sr][sc].
To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color
as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on.
Replace the color of all of the aforementioned pixels with newColor.
Return the modified image after performing the flood fill.
*/

#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& image, int i, int j, int element,int newColor){
    if(i<0||i>=image.size()||j<0||j>=image[0].size()){
        return;
    }
    if(image[i][j]!=element){
        return;
    }
    image[i][j]=newColor;
    solve(image,i-1,j,element,newColor);
    solve(image,i+1,j,element,newColor);
    solve(image,i,j-1,element,newColor);
    solve(image,i,j+1,element,newColor);
    return;
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int element=image[sr][sc];
    if(newColor!=element){
        solve(image,sr,sc,element,newColor);
    }
    return image;
}

int main(){
	vector<vector<int>>mat,res;
	int m,n,dist,src,x;
	cin>>m>>n;
	for (int i = 0; i < m; i++){
		vector<int>v;
		for(int j =0; j < n; j++){
			cin>>x;
			v.push_back(x);
		}
		mat.push_back(v);
	}
	cin>>dist>>src;
	res=floodFill(mat,dist,src,2);
	for (int i = 0; i < res.size(); ++i){
		for (int j = 0; j < res[0].size(); ++j){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
