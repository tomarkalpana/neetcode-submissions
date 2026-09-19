class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        unordered_set<int> st;

        int left = 0;

        for(int i=0; i<s.length(); i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left++;
            }

            st.insert(s[i]);

            maxLen = max(maxLen, i-left+1);
        }

        return maxLen;


    }
};
