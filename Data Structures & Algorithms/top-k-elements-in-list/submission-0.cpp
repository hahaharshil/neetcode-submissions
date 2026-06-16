class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int number : nums){
            mp[number]++;
        }

        vector<pair<int, int>> v;

        for(auto &p : mp){
            v.push_back({p.second, p.first});
        }

        sort(v.rbegin(), v.rend());

        vector<int> ans;

        for(int i = 0 ; i < k; i++){
            ans.push_back(v[i].second);
        }

        return ans;

    }
};
