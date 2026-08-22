class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> tFreq;
        unordered_map<char, int> windowFreq;

        int minLen = INT_MAX;
        int start = 0;

        if(s.length() < t.length())    
            return "";

        int left = 0;

        for(char ch : t){
            tFreq[ch]++;
        }

        int formed = 0;
        int requied = tFreq.size();

        for(int right=0; right<s.length(); right++){

            windowFreq[s[right]]++;

            if(tFreq.count(s[right])){

                if(windowFreq[s[right]] == tFreq[s[right]])
                    formed++;
            }

            while(formed == requied){
                int length = right- left + 1;

                if(length < minLen){
                    minLen = length;
                    start = left;
                }
                

                windowFreq[s[left]]--;

                if(tFreq.count(s[left]) && windowFreq[s[left]] < tFreq[s[left]])
                    formed--;

                left++;
            }

        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};
