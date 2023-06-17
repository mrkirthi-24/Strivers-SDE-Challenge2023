#include <bits/stdc++.h>

//T(O)= O(N) S(O)= O(N);

int findMajorityElement(int arr[], int n) {
    int target=n/2;
    unordered_map<int, int> count;
    for(int i=0; i<n; i++) {
        if(++count[arr[i]] > target) {
            return arr[i];
        }
    }
    return -1;
}