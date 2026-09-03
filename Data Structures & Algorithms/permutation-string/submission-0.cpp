class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size() > s2.size()) return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for(char c : s1){
            freq1[c - 'a']++;
        }

        for(int i = 0; i < s1.size(); i++){
            freq2[s2[i] - 'a']++;
        }

        int left = 0;
        int right = s1.size()-1;

        while(right < s2.size()){
            if(freq1 == freq2)
                return true;

            freq2[s2[left] - 'a']--;
            left++;

            right++;

            if(right < s2.size())
                freq2[s2[right] - 'a']++;   
        }

        return false;

        

        
    }
};
