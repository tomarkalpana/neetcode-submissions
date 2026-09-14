class Solution {
public:
    vector<vector<int>> result;
    unordered_set<int> visited;

    void solve(vector<int>& nums, vector<int>& temp){
        //base case
        if(temp.size() == nums.size()){
            result.push_back(temp);
            return;
        }

        for(int i=0; i<nums.size(); i++){

            if(visited.find(nums[i]) != visited.end()){
                continue;
            }

            visited.insert(nums[i]);
            temp.push_back(nums[i]);
            solve(nums, temp);
            temp.pop_back();
            visited.erase(nums[i]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;

        solve(nums, temp);

        return result;
    }
};
