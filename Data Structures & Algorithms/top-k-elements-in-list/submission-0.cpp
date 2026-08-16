class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<pair<int, int>> ansVec;
        vector<int> topFreq;

        for(int num : nums){
            freq[num]++;
        }

        for(auto x : freq){
            ansVec.push_back({x.second, x.first});
        }

        sort(ansVec.rbegin(), ansVec.rend());

        for(int i=0; i<k; i++){
            topFreq.push_back(ansVec[i].second);
        }

        return topFreq;
    }
};
