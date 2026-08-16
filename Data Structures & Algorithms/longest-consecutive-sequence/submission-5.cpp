class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        
        int longest = 0;

        for(auto num : nums){
            s.insert(num);
        }

        for(auto num : s){
            if(s.count(num-1))
                continue;

            int current = num;
            int length = 1;

            while(s.count(current+1)){
                length++;
                current++;
            }

            longest = max(longest, length);

        }

        return longest;
    }
};
