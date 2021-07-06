/*
Given a m * n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> res;
    int maximum,minimum,index;
    for(int i=0;i<matrix.size();i++){
        minimum=INT_MAX;
        maximum=INT_MIN;
        for(int j=0;j<matrix[0].size();j++){
            if(minimum>matrix[i][j]){
                minimum=matrix[i][j];
                index=j;
            }
        }
        for(int k=0;k<matrix.size();k++){
            if(maximum<matrix[k][index])
                maximum=matrix[k][index];
        }
        if(minimum==maximum)
            res.push_back(minimum);
    }
    return res;
}

int main(){
	vector<vector<int>>mat;
	vector<int> result;
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
	result=luckyNumbers(mat);
	for (int i = 0; i < result.size(); ++i)
		cout<<result[i]<<" ";
	cout<<endl;
}
