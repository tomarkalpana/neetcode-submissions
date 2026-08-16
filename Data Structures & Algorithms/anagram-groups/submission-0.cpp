class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> ans;

        for(auto x : strs){
            string key = x;
            sort(key.begin(), key.end());

            mpp[key].push_back(x);
        }

        for(auto x : mpp){
            ans.push_back(x.second);
        }

        return ans;
    }
};
