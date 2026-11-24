class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLen = 0;
        unordered_map<char, int> mpp;

        int left = 0;
        int maxFreq = 0;

        for(int i=0; i<s.length(); i++){

            mpp[s[i]]++;

            maxFreq = max(maxFreq, mpp[s[i]]);

            while((i-left+1) - maxFreq > k){
                mpp[s[left]]--;
                left++;
            }

            maxLen = max(maxLen, i-left+1);
        }

        return maxLen;
    }
};
