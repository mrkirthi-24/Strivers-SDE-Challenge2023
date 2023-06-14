#include <bits/stdc++.h>

//Array - Two pointers

//T(O)= O(M+N) S(O)= O(1)

vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            i--; k--;
        }
        else{
            nums1[k] = nums2[j];
            j--; k--;
        }
    }
    while(j>=0){
        nums1[k] = nums2[j];
        j--; k--;
    }
	return nums1;
}