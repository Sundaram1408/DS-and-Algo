/*
Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them.
Notice that multiple kids can have the greatest number of candies.
*/

#include<bits/stdc++.h>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> res;
    int max=*max_element(candies.begin(),candies.end());
    for(int i=0;i<candies.size();i++){
        if(candies[i]+extraCandies>=max){
            res.push_back(true);
        }
        else{
            res.push_back(false);
        }
    }
    return res;
}

int main()
{
	vector<int> candies;
	vector<bool> result;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		candies.push_back(x);
	}
	int extraCandies;
	cin>>extraCandies;
	result=kidsWithCandies(candies,extraCandies);
	for (int i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}
