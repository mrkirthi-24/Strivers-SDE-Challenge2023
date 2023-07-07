//TC = O(N);
//SC = O(1);

int removeDuplicates(vector<int> &nums, int n) {
	int k = 1;
        for(int i=1; i<n; i++){
            if(nums[i-1] != nums[i]){
                nums[k] = nums[i];
                k++;
            }
        }
    return k;
}