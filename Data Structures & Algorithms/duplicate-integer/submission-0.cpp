class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        bool ans = 0;
        for(int i = 0; i < n; i++){
            
            if(nums[i] == nums[i-1])
                ans = 1;
        }
        
        return ans;
        
    }
};