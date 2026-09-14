class Solution {
public:
    void solve(int idx, vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>& temp){
        //base case
        if(target == 0){
            result.push_back(temp);
            return;
        }

        if(target < 0){
            return;
        }

        for(int i=idx; i<candidates.size(); i++){

            if(i>idx && candidates[i] == candidates[i-1])
                continue;
                
            //take
            temp.push_back(candidates[i]);
            solve(i+1, candidates, target-candidates[i], result, temp);
            temp.pop_back();
        }
        

    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> temp;
        vector<vector<int>> result;

        sort(candidates.begin(), candidates.end());

        solve(0, candidates, target, result, temp);

        return result;
        
        
    }
};
