class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<vector<int>> bucket(nums.size() + 1);

        for(int num : nums){
           mpp[num]++;
        }

        for(auto x : mpp){
           bucket[x.second].push_back(x.first);
        }

        vector<int> ans;

        for(int i=bucket.size()-1; i>=1; i--){

            for(int num : bucket[i]){
                ans.push_back(num);

                if(ans.size() >= k)
                return ans;
            }
            
        }

        return ans;
    }
};
