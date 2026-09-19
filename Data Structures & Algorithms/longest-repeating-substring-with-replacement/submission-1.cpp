class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLen = 0;
        unordered_map<char, int> mpp;

        int left = 0;
        int maxFreq = 0;

        for(int right=0; right<s.length(); right++){

            mpp[s[right]]++;

            maxFreq = max(maxFreq, mpp[s[right]]);
            
            while((right - left + 1) - maxFreq > k){
                mpp[s[left]]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
            
            
        }

        return maxLen;
    }
};
