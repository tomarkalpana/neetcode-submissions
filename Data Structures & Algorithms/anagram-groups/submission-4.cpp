class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(int i=0; i<strs.size(); i++){
            string val = strs[i];
            vector<int> freq(26, 0);

            for(auto x : val){
                freq[x - 'a']++;
            }

            string key = "";

            for(auto f : freq){
                key += '#' + to_string(f);
            }

            mpp[key].push_back(val);
        }

        vector<vector<string>> result;

        for(auto x : mpp){
            result.push_back(x.second);
        }

        return result;
    }
};
