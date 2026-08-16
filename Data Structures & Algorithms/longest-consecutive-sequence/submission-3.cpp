class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        if(n==0) return 0;

        sort(nums.begin(), nums.end());
        int count = 0;
        int maxCount = 0;

        for(int i=0; i<n-1; i++){
            if(nums[i+1] - nums[i] == 0) continue;
            else if(nums[i+1] - nums[i] == 1) count++;
            else count = 0;

            maxCount = max(maxCount, count);
        }

        return maxCount + 1;
    }
};
