class Solution {
public:
//Selection sort
    // vector<int> sortArray(vector<int>& nums) {
    //     int n = nums.size();
    //     for(int i=0; i<=n-2; i++){
    //         int min = i;
    //         for(int j=i; j<=n-1; j++)
    //         {
    //             if(nums[j] < nums[min]) min = j;
    //         }
    //         //swaping
    //         int temp = nums[i];
    //         nums[i] = nums[min];
    //         nums[min] = temp;
    //     }
    //     return nums;
    // }

//Bubble sort
    // vector<int> sortArray(vector<int>& nums) {
    //     int n = nums.size();
    //     for(int i=n-1; i>=1; i--){
            
    //         for(int j=0; j<=i-1; j++)
    //         {
    //             if(nums[j] > nums[j+1]){
    //                 //swaping
    //                 int temp = nums[j];
    //                 nums[j] = nums[j+1];
    //                 nums[j+1] = temp;
    //             }
    //         }
    //     }
    //     return nums;
    // }

//Insertion sort
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<=n-1; i++){
            int j = i;
            while(j>0 && nums[j-1] > nums[j])
            {
                    //swaping
                int temp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = temp;

                j--;
            }
        }
        return nums;
    }

};
