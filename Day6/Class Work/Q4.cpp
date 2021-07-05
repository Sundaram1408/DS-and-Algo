/*
Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
To flip an image horizontally means that each row of the image is reversed.
	For example, flipping [1,1,0] horizontally results in [0,1,1].
	To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
For example, inverting [0,1,1] results in [1,0,0].
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for(int i=0;i<image.size();i++){
        reverse(image[i].begin(),image[i].end());
        for(int j=0;j<image[0].size();j++){
            image[i][j]^=1;
        }
    }
    return image;
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
	res=flipAndInvertImage(mat);
	for (int i = 0; i < res.size(); ++i){
		for (int j = 0; j < res[0].size(); ++j){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
