class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> st;

        for(int i=0; i<n-1; i++){
            set<int> seen;
            for(int j=i+1; j<n; j++){
                int more = 0 - (nums[i] + nums[j]);
            
                if(seen.count(more)){
                    vector<int> temp = {nums[i], nums[j], more};

                    sort(temp.begin(), temp.end());

                    st.insert(temp);
                }
                    seen.insert(nums[j]);
            }
        }

        for(auto x : st){
            ans.push_back(x);
        }

        return ans;
    }
};
