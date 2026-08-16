class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i++){
            int left = i+1;
            int right = n-1;

            while(left < right){
                if(nums[i] + nums[left] + nums[right] == 0){
                    st.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if(nums[i] + nums[left] + nums[right] > 0){
                    right--;
                } else left++;
            }
        }

        return vector<vector<int>>(st.begin(), st.end());
    }
};
