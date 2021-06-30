/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the jth bank.
Find the richest customer.
A customer's wealth is the amount of money they have in all their bank accounts.
The richest customer is the customer that has the maximum wealth.
*/

#include<iostream>
#include<vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int max=0,cust=0;
    for(int i=0;i<accounts.size();i++){
        int sum=0;
        for(int j=0;j<accounts[i].size();j++){
            sum+=accounts[i][j];
        }
        if(max<sum){
            max=sum;
            cust=i+1;
        }
    }
    return cust;
}

int main()
{
	vector<vector<int>> accounts;
	int rows,cols,x;
	cin>>rows>>cols;
	for (int i = 0; i < rows; i++)
	{
	    vector<int>temp;
		for (int j = 0; j < cols; j++)
		{
		    cin>>x;
			temp.push_back(x);
		}
		accounts.push_back(temp);
	}
	int res=maximumWealth(accounts);
	cout<<"Richest customer is: Customer"<<res<<endl;
	return 0;
}
