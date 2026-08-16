class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        unordered_map<char, int> mpp;
        int left = 0;
    
        for(int i=0; i<s.length(); i++){
            if(mpp.count(s[i])){
                left = max(left, mpp[s[i]] + 1);
            }

            mpp[s[i]] = i;
           
            maxLength = max(maxLength, i-left+1);
            
        }

        return maxLength;

    }
};
