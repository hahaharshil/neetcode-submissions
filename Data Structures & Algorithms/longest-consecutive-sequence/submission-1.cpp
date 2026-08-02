class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int best = 1; int len = 1;

        for(int i = 1; i < (int)nums.size(); i++){

            if(nums[i] == nums[i-1]) continue;
            
            if(nums[i] == nums[i-1] + 1){
                len++;
                best = max(best, len);
            }else{
                len = 1;
            }
        }

        return best;

    }
};
