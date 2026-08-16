class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> ans;

        for(int num : nums){
            mpp[num]++;
        }

        priority_queue<pair<int, int>> pq;

        for(auto x : mpp){
            pq.push({x.second, x.first});
        }

        while(k > 0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return ans;
    }
};
