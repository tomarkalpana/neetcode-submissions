class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;

        for(int i=0; i<n; i++){
            int more = target - nums[i];

            if(mpp.count(more)){
                return {mpp[more], i};
            } else {
                mpp[nums[i]]=i;
            }
        }

        return {};

    }
};
