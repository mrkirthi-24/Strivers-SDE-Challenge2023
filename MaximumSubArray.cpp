// #include <bits/stdc++.h> 
// long long maxSubarraySum(int arr[], int n)
// {
//     long long sum = 0;
//     long long smax = 0;
//     for (int i=0; i<n; i++) {
//         sum += arr[i];
//         smax = max(smax, sum);
//         if (sum < 0) {
//             sum = 0;
//         }
//     }
//     if(smax < 0){
//         smax = 0;
//     }
//     return smax;
// }
#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums, int l, int r) {
        if (l > r) {
            return INT_MIN;
        }
        int m = l + (r - l) / 2, ml = 0, mr = 0;
        int lmax = maxSubArray(nums, l, m - 1);
        int rmax = maxSubArray(nums, m + 1, r);
        for (int i = m - 1, sum = 0; i >= l; i--) {
            sum += nums[i];
            ml = max(sum, ml);
        }
        for (int i = m + 1, sum = 0; i <= r; i++) {
            sum += nums[i];
            mr = max(sum, mr);
        }
        return max(max(lmax, rmax), ml + mr + nums[m]);
}


int main(){
        vector<int> nums;
        nums.push_back(10);
        nums.push_back(20);
        nums.push_back(-30);
        nums.push_back(40);
        nums.push_back(-50);
        nums.push_back(60);
        int l = 0, r = 6;
        maxSubArray(nums, l, r);
        return 0;
}