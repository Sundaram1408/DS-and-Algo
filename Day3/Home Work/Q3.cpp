/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
Each of the words consists of only uppercase and lowercase English letters (no punctuation).
For example, "Hello World", "HELLO", and "hello world hello world" are all sentences.
You are given a sentence s and an integer k. You want to truncate s such that it contains only the first k words.
Return s after truncating it.
*/

#include <bits/stdc++.h>
using namespace std;

string truncateSentence(string &s, int k) {
    string ans="";
    for(int i=0;i<s.length();i++){
        if(k==0){
           ans=ans.substr(0, ans.size()-1);
           return ans;
        }
        if(s[i] == ' '){
           k--;
        }
        ans += s[i];
    }
    return ans;
}

int main()
{
	string str,result;
	int k;
	cin>>str;
	fflush(stdin);
	cin>>k;
	result=truncateSentence(str,k);
	cout<<result<<endl;
	return 0;
}
