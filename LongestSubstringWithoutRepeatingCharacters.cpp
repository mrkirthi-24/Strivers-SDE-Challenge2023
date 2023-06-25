#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

int main()
{
    string s = "pwwkew";
    // vector<int> map(26,0);
    // int j=0;
    // int maxi= 1;
    // for(int i=0;i<input.length();i++){
    //     map[input[i]-'a']++;
    //     while(map[input[i]-'a']>1){
    //        map[input[j]-'a']--;
    //        j++;
    //     }
    //     maxi = max(maxi,i-j+1);
    // }
    // return 0;


    unordered_set<char> set;
	int i = 0, j = 0, n = s.size(), ans = 0;
	while( i<n && j<n)
	{
		if(set.find(s[j]) == set.end()) //If the character does not in the set
		{
			set.insert(s[j++]); //Insert the character in set and update the j
			ans = max(ans, j-i); //Check if the new distance is longer than
		}
		else
		{
			set.erase(s[i++]); 
			//If character does exist in the set, ie. it is a repeated
		}
    }
	return ans;
}