#include <bits/stdc++.h> 

long getTrappedWater(long *arr, int n){
    if(n==1)
        return 0;

    // Pre-compute left greatest element for each
    vector<long> leftG(n, -1);
    leftG[0] = arr[0];
    for(int i=1;i<n;i++)
        leftG[i] = max(leftG[i-1], arr[i]);
    // Pre-compute right greatest element for each
    vector<long> rightG(n, -1);
    rightG[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
        rightG[i] = max(rightG[i+1], arr[i]);

    // Min of leftMax & rightMax minus curr
    long totalWater = 0;
    for(int i=0;i<n;i++)
        totalWater += min(leftG[i], rightG[i]) - arr[i];
    return totalWater;
}