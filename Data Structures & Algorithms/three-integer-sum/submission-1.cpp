class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;

        for(int i=0; i<n; i++){
            unordered_set<int> seen;
            for(int j=i+1; j<n; j++){
                int third = -(nums[i] + nums[j]);

                if(seen.count(third)){
                    
                        vector<int> temp = {nums[i], nums[j], third};

                        sort(temp.begin(), temp.end());

                        ans.insert(temp);
                    
                }

                seen.insert(nums[j]);
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
