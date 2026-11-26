class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> tFreq;
        unordered_map<char, int> windowFreq;

        if(t.size() > s.size()){
            return "";
        }

        for(char ch : t){
            tFreq[ch]++;
        }

        int left = 0;
        int start = 0;
        int minLen = INT_MAX;
        int formed = 0;
        int required = tFreq.size();

        for(int right=0; right<s.size(); right++){
            windowFreq[s[right]]++;

            if(tFreq.count(s[right])){
                if(windowFreq[s[right]] == tFreq[s[right]])
                    formed++;
            }

            while(formed == required){
                int length = right-left+1;

                if(length < minLen){
                    minLen = length;
                    start = left;
                }

                windowFreq[s[left]]--;

                if(tFreq.count(s[left]) && windowFreq[s[left]] < tFreq[s[left]]){
                    formed--;
                }

                left++;
            }
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};
