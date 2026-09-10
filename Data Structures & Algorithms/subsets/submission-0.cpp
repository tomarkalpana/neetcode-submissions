class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;

        result.push_back({}); //empty vector

        for(int num : nums){

            int n = result.size();

            for(int i=0; i<n; i++){
                vector<int> temp = result[i];

                temp.push_back(num);

                result.push_back(temp);
            }
            
        }

        return result;
    }
};
