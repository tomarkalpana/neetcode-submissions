class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> ans;

        for(int num : nums){
            mpp[num]++;
        }

        while(k > 0){

            int maxFreq = 0;
            int key = -1;

            for(auto x : mpp){
                if(x.second > maxFreq){
                    maxFreq = x.second;
                    key = x.first;
                }
                
            }

            ans.push_back(key);
            mpp.erase(key);

            k--;

        }

        return ans;
    }
};
