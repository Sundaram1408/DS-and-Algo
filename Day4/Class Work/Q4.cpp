/*
International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:
"a" maps to ".-", "b" maps to "-...", "c" maps to "-.-.", and so on.
For convenience, the full table for the 26 letters of the English alphabet is given below:
[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
"...-",".--","-..-","-.--","--.."]
Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter.
For example, "cab" can be written as "-.-..--...", (which is the concatenation "-.-." + ".-" + "-...").
We'll call such a concatenation, the transformation of a word.
Return the number of different transformations among all words we have.
*/

#include <bits/stdc++.h>
using namespace std;

int uniqueMorseRepresentations(vector<string>& words) {
    vector<string>s={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_map<string,int>mp;
    string str="",res="";
    for(int i=0;i<words.size();i++){
        str=words[i];
        res="";
        for(int j=0;j<str.length();j++){
            res+=s[str[j]-'a'];
        }
        mp[res]++;
    }
    return mp.size();
}

int main()
{
	vector<string> arr;
	int n,res;
	string str;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>str;
		arr.push_back(str);
	}
	res=uniqueMorseRepresentations(arr);
	cout<<res<<endl;
	return 0;
}
