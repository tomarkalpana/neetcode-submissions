class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;

        for(int i=0; i<n; i++){
            mpp[nums[i]] = i;
        }

        for(int i=0; i<n; i++){
           int more = target - nums[i];

           if(mpp.find(more) != mpp.end() && mpp[more] != i){
             return {i, mpp[more]};
           }
        }

        return {};

    }
};
