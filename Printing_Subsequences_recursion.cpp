// Recursive Solution
// Time complexity : O(N*(2^N))
// Space complexity : O(N)
class Solution {
public:    
    void sub( int i, vector<int> &nums, vector<int> temp, vector<vector<int>> &ans)
    {
        if(i == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
        sub(i+1, nums, temp, ans);
        temp.push_back(nums[i]);
        sub(i+1, nums, temp, ans);
        temp.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;       
        sub(0, nums, temp, ans);
        return ans;
    }
};