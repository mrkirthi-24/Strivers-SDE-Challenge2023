#include <iostream> 
#include <vector>
#include <string>
using namespace std;

long long merge(vector<long long> &arr, int low, int mid, int high) {
    int left, right;
    left = low;
    right = mid + 1;
    long long count = 0;
    vector<long long> temp; // temporary array to store sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
            count += (mid - left + 1);  // Increment the count for inversions
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return count;
}

long long mergeSort(vector<long long> &arr, int low, int high) {
    long long count = 0;
    if (low < high) {
        int mid = (low + high) / 2;
        count += mergeSort(arr, low, mid); //the left half
        count += mergeSort(arr, mid + 1, high); //the right half
        count += merge(arr, low, mid, high); 
    }
    return count;
}

long long getInversions(vector<long long> &arr, int n) {
    return mergeSort(arr, 0, n-1);
}

int main(){
    vector<long long> arr;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(2);
    int n = 5;
    getInversions(arr, n);

    return 0;
}