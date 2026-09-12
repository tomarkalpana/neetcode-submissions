class Solution {
public:
    void solve(int i, int target, vector<int>& nums, vector<int>& temp, vector<vector<int>>& result){
        //base case
        if(i==nums.size()){
            if(target == 0){
                result.push_back(temp);
            }

            return;
        }

        //take
        if(nums[i] <= target){
            temp.push_back(nums[i]);
            solve(i, target-nums[i], nums, temp, result);
            temp.pop_back();
        }

        //not take
        solve(i+1, target, nums, temp, result);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> temp;

        solve(0, target, nums, temp, result);

        return result;
    }
};
