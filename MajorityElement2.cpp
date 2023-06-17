#include <bits/stdc++.h>

//T(O)= O(N) S(O)= O(N)

vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();
    int target = n/3;
    set<int> st;
    unordered_map<int, int> count;
    for(int i=0; i<n; i++) {
        if(++count[arr[i]] > target) {
            st.insert(arr[i]);
        }
    }
    vector<int> arr1(st.begin(), st.end());
    return arr1;
}