class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i=0; i<n-1; i++){

            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }

            int low = i+1, high = n-1;

            while(low<high){
                int sum = nums[i] + nums[low] + nums[high];

                if(sum == 0){
                    ans.push_back({nums[i], nums[low], nums[high]});

                    while(low < high && nums[low] == nums[low+1])
                        low++;

                    while(low < high && nums[high] == nums[high-1])
                        high--;

                    
                    low++;
                    high--;
                } else if(sum < 0){
                    low++;
                } else {
                    high--;
                }

            }

            
        }

        return ans;
    }
};

        /*for(int i=0; i<n-1; i++){
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
}; */
