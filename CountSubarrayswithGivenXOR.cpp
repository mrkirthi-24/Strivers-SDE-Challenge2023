#include <bits/stdc++.h>
//TC-O(N^2) SC-O(1)
// int subarraysXor(vector<int> &arr, int x)
// {
//     int n=arr.size();
//     int cur;
//     int k=0;
//     for(int i=0;i<n;i++)
//     {
//         cur=arr[i];
//         if(cur==x)
//         k++;
//         for(int j=i+1;j<n;j++)
//         {
//             cur=cur^arr[j];
//             if(cur==x)
//              { 
//                  k++; 
//              }
//         }
//     }
//     return k;    
// }


//TC-O(N) SC-O(N)
int subarraysXor(vector<int> &arr, int x){
    unordered_map<int,int> m;
    m[0]=1;
    int count=0;
    int xorr=0;
    for(int i=0;i<arr.size();i++){
        xorr^=arr[i];
        if(m.find(xorr^x)==m.end()) m[xorr]++;
        else{
            count+=m[xorr^x];
            m[xorr]++;
        }
    }
    return count;
}
