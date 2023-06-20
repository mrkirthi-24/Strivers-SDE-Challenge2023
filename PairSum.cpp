#include <bits/stdc++.h>

//T(O)= O(N) S(O)= O(N)

vector<vector<int>> pairSum(vector<int> &arr, int s){
   unordered_map<int, int> mp;
   vector<vector<int>> ans;
   for(int i = 0; i < arr.size(); i++){
      int x = s-arr[i];
      if(mp.find(x) != mp.end()){
         int val = mp[x];
         while(val--){
            ans.push_back({min(x, arr[i]), max(x, arr[i])});
         }
      }
      mp[arr[i]]++;
   }
   sort(ans.begin(), ans.end());
   return ans;
}