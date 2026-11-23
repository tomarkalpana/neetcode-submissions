class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(int i=0; i<strs.size(); i++){
            string value = strs[i];

            sort(strs[i].begin(), strs[i].end());

            mpp[strs[i]].push_back(value);
        }

        vector<vector<string>> result;

        for(auto x : mpp){
            result.push_back(x.second);
        }

        return result;

    }
};
