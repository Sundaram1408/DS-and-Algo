/*
You are given a string allowed consisting of distinct characters and an array of strings words. 
A string is consistent if all characters in the string appear in the string allowed.
Return the number of consistent strings in the array words.
*/

#include <bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) 
{
    set<char>s;
    int n = allowed.length();
    for(int i=0;i<n;i++){
        s.insert(allowed[i]);
    }
    int count = 0;
    for(int i=0;i<words.size();i++){
    	string temp = words[i];
    	int flag = 0;
	    for(int i=0;i<temp.length();i++){
    	    if(s.find(temp[i])==s.end()){
        	    flag = 1;
            	break;
        	}
    	}
    	if(!flag){
        	count++;
    	}
	}
    return count;
}

int main()
{
	vector<string>words;
	int m,result;
	string str,allowed;
	cin>>allowed;
	cin>>m;
	for (int i = 0; i < m; i++)
	{
		cin>>str;
		words.push_back(str);
	}
	result=countConsistentStrings(allowed,words);
	cout<<result<<endl;
	return 0;
}