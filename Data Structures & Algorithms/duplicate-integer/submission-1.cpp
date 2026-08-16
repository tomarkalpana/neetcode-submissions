class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        for(int el : nums){
            mpp[el]++;
        }

        for(auto el : mpp){
            if(el.second > 1) 
               return true;
        }

        return false;

        
    }
};