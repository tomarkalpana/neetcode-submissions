class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> countVec;
        unordered_set<int> st;

        for(int i=0; i<nums.size(); i++){
            if(st.count(nums[i]))
                continue;

            st.insert(nums[i]);

            int count = 0;

            for(int j=0; j<nums.size(); j++){
                if(nums[i] == nums[j]) count++;
            }
            countVec.push_back({count, nums[i]});
        }

        sort(countVec.rbegin(), countVec.rend());

        vector<int> ans;

        for(int i=0; i<k; i++){
            ans.push_back(countVec[i].second);
        }

        return ans;
    }
};
