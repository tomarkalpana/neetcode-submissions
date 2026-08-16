class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> ans;

        for(int i=0; i<strs.size(); i++){
            vector<int> freq(26, 0);

            for(int j=0; j<strs[i].length(); j++){
                freq[strs[i][j] - 'a']++;
            }

            string key = "";

            for(auto x : freq){
                key += to_string(x) + "#";
            }

            mpp[key].push_back(strs[i]);
        }

        for (auto &it : mpp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
