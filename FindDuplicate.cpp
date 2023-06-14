#include <bits/stdc++.h>
//T(O)= O(nlogn) S(O)= O(1) 

int findDuplicate(vector<int> &nums, int n){

	//Lambda function
	auto less_or_eq = [&](int mid){
            int count = 0;
            for(auto &num : nums){
                if(num <= mid) count++;
            }
            return count;
        };

		//Binary Search 
        int left = 1, right = nums.size();
        int duplicate = -1;
        while(left <= right){
            int mid = (left+right)/2;
            if(less_or_eq(mid) > mid){
                duplicate = mid;
                right = mid - 1;
            }else {
                left = mid + 1;
            }
        }
    return duplicate;
}
