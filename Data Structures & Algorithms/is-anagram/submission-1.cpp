class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
            return false;
        
        map<char, int> m0;
        map<char, int> m1;

    
        int n = s.size();

        for(int i = 0; i < n; i++){
            m0[s[i]]++;
            m1[t[i]]++;
        }
        
        if(m1 == m0){
            return 1;
        }

    return 0;
    }
};
