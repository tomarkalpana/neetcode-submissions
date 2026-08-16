class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int left = 0, right = n-1;
        int min = nums[0];

        while(left <= right){
            int mid = left + (right-left)/2;

            if(nums[mid] < min)
                min = nums[mid];

            if(nums[mid] > nums[right]){
                left = mid + 1;
            } else 
                right = mid - 1;
            
        }

        return min;


    }
};
