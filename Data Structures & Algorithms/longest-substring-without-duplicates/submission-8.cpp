class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> st;
        int left = 0;
        int maxLen = 0;

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

/**int maxLen = 0;
        unordered_map<char, int> mpp;

        int left = 0;

        for(int i=0; i<s.length(); i++){

            auto it = mpp.find(s[i]);

            if(it != mpp.end()){ //mtlb it hai map mei 
                int idx = it->second;
                left = max(left, idx+1);
            }

            mpp[s[i]] = i;

            

            maxLen = max(maxLen, i-left+1);
        }

        return maxLen;
    **/
