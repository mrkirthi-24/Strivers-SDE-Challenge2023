#include <bits/stdc++.h>

//T(O) = O(N) | S(O) = O(N);
//Using set

// int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
//     set<int> st(arr.begin(), arr.end());
//     int prev;
//     bool first = true;
//     int mx = 0;
//     int count = 0;
//     for(auto i : st){
//         if(first){
//             first = false;
//             prev = i;
//             count = 1;
//         }else if(i == prev+1){
//             count++;
//         }else{
//             mx = max(mx, count);
//             count = 1;
//         }
//         prev = i;
//     }
//     mx = max(mx, count);
//     return mx;
// }


//Using vector sort
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int mx = 0;
    int count = 1;
 
    for(int i = 1; i < n; i++)
    {
        if(arr[i]==arr[i-1])
            continue;
        else if(arr[i] == arr[i-1]+1)
            count++;
        else{
            mx = max(mx, count);
            count = 1;
        }
    }
    mx = max(mx, count);
    return mx;
}