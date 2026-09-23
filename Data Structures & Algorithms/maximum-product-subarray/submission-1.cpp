class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for(int i=1; i<n; i++){
            int currMax = max(nums[i], max(maxProd * nums[i], minProd * nums[i]));
            int currMin = min(nums[i], min(maxProd * nums[i], minProd * nums[i]));

            maxProd = currMax;
            minProd = currMin;

            ans = max(ans, maxProd);

        }

        return ans;
    }
};
