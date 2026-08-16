class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0, expectedSum = 0;

        for(int &num : nums){
            sum += num;
        }

        for(int i=0; i<=nums.size(); i++){
            expectedSum += i;
        }

        int ans = expectedSum - sum;

        return ans;
    }
};
