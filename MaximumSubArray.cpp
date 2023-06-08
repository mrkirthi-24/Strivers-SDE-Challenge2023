#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long smax = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
        smax = max(smax, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    if(smax < 0){
        smax = 0;
    }
    return smax;
}