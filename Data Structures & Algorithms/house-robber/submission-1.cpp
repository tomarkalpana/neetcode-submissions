class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        vector<int> maxi(n);

        maxi[0] = nums[0];
        if(n == 1) return nums[0];
        maxi[1] = max(nums[0], nums[1]);

        for(int i=2; i<n; i++){
            maxi[i] = max(maxi[i-1], (nums[i] + maxi[i-2]));
        }

        return maxi[n-1];
    }
};
