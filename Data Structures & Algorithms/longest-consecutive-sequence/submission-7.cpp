class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int longest = 0;

        for(int num : nums){
            st.insert(num);
        }

        for(int x : st){
            if(!st.count(x-1)){
                int count = 1;

                while(st.count(x+1)){
                    count++;
                    x++;
                }

            longest = max(longest, count);
            }
           
        }

         return longest;
    }
};
