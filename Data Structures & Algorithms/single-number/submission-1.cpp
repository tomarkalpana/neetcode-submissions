class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for(int num : nums){
            mpp[num]++;
        }

        for(auto x : mpp){
            if(x.second == 1) return x.first;
        }

        return -1;
    }
};
