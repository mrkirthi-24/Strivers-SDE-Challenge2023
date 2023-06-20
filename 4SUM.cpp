#include <bits/stdc++.h>

//Brute force - 4 for loops
//T(O)= O(N^4) S(O)= O(1)

// string fourSum(vector<int> arr, int target, int n) {
//     for(int i=0; i<n-3; i++){
//         for(int j=i+1; j<n-2; j++){
//             for(int k=j+1; k<n-1; k++){
//                 for(int l = k+1; l<n; l++){
//                     if(arr[i] + arr[j] + arr[k] + arr[l] == target)
//                     return "Yes";
//                 }
//             }
//         }
//     }
//     return "No";
// }

//Two pointers & sort - 2 for loops + 2 pointers
//T(O)= O(N^2 + NLogN) S(O)= O(1)

string fourSum(vector<int> arr, int target, int n) {
  sort(arr.begin(),arr.end());
  for(int i=0;i<n-3;i++){
      for(int j=i+1;j<n-2;j++){
          int left=j+1;
          int right=n-1;
          while(left<right){
              int sum=arr[i]+arr[j]+arr[left]+arr[right];
              if(sum==target){
                  return "Yes";
              }
              else if(sum<target){
                  left++;
              }
              else{
                  right--;
              }
          }
      }
  }
  return "No";
}