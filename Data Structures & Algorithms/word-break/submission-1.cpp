class Solution {
public:
    
    vector<int> dp;

    bool solve(int i, string s, vector<string>& wordDict){

        if(dp[i] != -1)
            return dp[i];

        //base case
        if(i==s.length())
            return true;

        for(int j=i; j<s.length(); j++){
            string word = s.substr(i, j-i+1);

            for(int k=0; k<wordDict.size(); k++){
                if(word == wordDict[k]){
                    bool ans = solve(j+1, s, wordDict);

                    if(ans){
                        dp[i] = true;
                        return true;
                    }
                        
                }  
            }
        }

        dp[i] = false;

        return false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        dp.assign(s.length()+1, -1);
        
        return solve(0, s, wordDict);

    }
};
