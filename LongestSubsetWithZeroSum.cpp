#include <bits/stdc++.h>

//T(O)= O(N) S(O)= O(N)

int LongestSubsetWithZeroSum(vector<int> arr) {
  int sum=0, ans=0;
  int n= arr.size();
  unordered_map<int,int> mp;
  for(int i=0;i<n;i++){
    sum += arr[i];
    if(sum==0){
      ans=i+1;
    }else{
      if(mp.find(sum)!=mp.end()){
        ans=max(ans,i-mp[sum]);
      }else{
        mp[sum]=i;
      }
    }
  }
  return ans;
}