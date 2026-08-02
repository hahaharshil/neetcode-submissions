class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> word;

        for(char c : s){
            if(isalnum(c))
                word.push_back(c);
        }

        int n = word.size();

        cout << n << endl;

        int left = 0, right = n - 1;

        while(left < right){
            if(tolower(word[left]) != tolower(word[right]))
                return false;
            left++; 
            right--;
        }
        return true;
    }
};
