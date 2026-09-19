class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        unordered_map<char, int> mpp;

        int left = 0;

        for(int i=0; i<s.length(); i++){

            auto it = mpp.find(s[i]);

            if(it != mpp.end()){
                int idx = it->second;
                left = max(left, idx+1);
            }

            mpp[s[i]] = i;

            

            maxLen = max(maxLen, i-left+1);
        }

        return maxLen;


    }
};
