#include <bits/stdc++.h> 

//BRUTE FORCE 
//T(O) = O(N^2)
//S(O) = O(1)

// int reversePairs(vector<int> &nums, int n){
// 	long long reversePairsCount = 0;
//         for(int i=0; i<n-1; i++){
//             for(int j=i+1; j<n; j++){
//                 if(nums[i] > 2*(long long)nums[j]){
//                     reversePairsCount++;
//             }
//         }
//     }
//     return reversePairsCount;
// }

//MERGE SORT & DIVIDE AND CONQUER ALGO
//T(O) = O(NLOGN)
//S(O) = O(N)

   void merge(vector<int> &nums, int low, int mid, int high, int &count){
        int j = mid+1;
        for(int i=low; i<=mid; i++){
            while(j<=high && nums[i] > 2*(long long)nums[j]){
                j++;
            };
            count += j-(mid+1);
        }
        int size = high-low+1;
        vector<int> temp(size, 0);
        int left = low, right = mid + 1, k=0;
        while(left<=mid && right<=high){
            if(nums[left] < nums[right]){
                temp[k++] = nums[left++];
            }
            else{
                temp[k++] = nums[right++];
            }
        }
        while(left<=mid){
            temp[k++] = nums[left++]; 
        }
        while(right<=high){
            temp[k++] = nums[right++]; 
        }
        int m=0;
        for(int i=low; i<=high; i++){
            nums[i] = temp[m++];
        }
    }

    void mergeSort(vector<int> &nums, int low, int high, int &count){
        if (low < high) {
            int mid = (low + high) / 2;
            mergeSort(nums, low, mid, count); //the left half
            mergeSort(nums, mid + 1, high, count); //the right half
            merge(nums, low, mid, high, count); 
        }
    }

    int reversePairs(vector<int>& nums, int n) {
        int count = 0;
        mergeSort(nums, 0, n-1, count);
        return count;
    }