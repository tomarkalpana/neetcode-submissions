class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid = left + (right - left)/2;

        for(int i=0; i<nums.size(); i++){
            int mid = left + (right - left)/2;

            if(nums[mid] == target) return mid;

            else if(nums[mid] > target) left--;

            else right++;
        }

        return -1;
    }
};
