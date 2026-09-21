class Solution {
public:
     int n;
     vector<vector<int>> dp;

    int solve(int i, int prev, vector<int>& nums){
        //base case
        if(i >= nums.size()){
            return 0;
        }

        if(prev != -1 && dp[i][prev] != -1)
            return dp[i][prev];

        //take
        int take = 0;
        if(prev == -1 || nums[i] > nums[prev]){
            take = 1 + solve(i+1, i, nums);
        }

        //skip
        int skip = solve(i+1, prev, nums);

        if(prev != -1)
            dp[i][prev] = max(take, skip);

        return max(take, skip);
    }

    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();

        dp.assign(n+1, vector<int>(n+1, -1));
        return solve(0, -1, nums);
    }
};
