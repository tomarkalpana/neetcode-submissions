class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mpp;

        for(int i=0; i<numbers.size(); i++){
            int more = target - numbers[i];

            if(mpp.count(more)){
                return {mpp[more]+1, i+1};
            } else {
                mpp[numbers[i]] = i;
            }
        }

        return {};
    }
};
