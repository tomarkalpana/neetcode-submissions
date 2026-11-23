class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //prefix bnao
        //suffix bnao
        //multiply krdo

        int n = nums.size();

        vector<int> prefix(n);
        vector<int> suffix(n);

        prefix[0] = 1;

        for(int i=1; i<n; i++){
          int ans = nums[i-1] * prefix[i-1];
          prefix[i] = ans;
        }

        suffix[n-1] = 1;

        for(int i=n-2; i>=0; i--){
          suffix[i] = suffix[i+1] * nums[i+1];
        }

        vector<int>result(n);

        for(int i=0; i<n; i++){
            result[i] = prefix[i] * suffix[i];
        }

        return result;

    } 
}; 