//TC = O(2^N * N)
//SC = O(2^N) + O(K)
//AUX = O(N)

#include <bits/stdc++.h> 

void findSubset(int ind, int n, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i=ind; i<n; i++){
        if(i!=ind && arr[i] == arr[i-1]) continue;
        ds.push_back(arr[i]);
        findSubset(i+1, n, arr, ds, ans);
        ds.pop_back();
    }
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(), arr.end());
    findSubset(0, n, arr, ds, ans);
    return ans;
}