class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        int n = strs.size();
        
        for(int i = 0; i < n; i++){
            string key = strs[i];
            sort(key.begin(), key.end());

            mp[key].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for(auto &s : mp){
            ans.push_back(s.second);
        }
        return ans;
    }
};
