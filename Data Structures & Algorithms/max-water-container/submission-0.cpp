class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = INT_MIN;
        int left = 0;
        int right = heights.size() - 1;

        while(left < right){
            int length = min(heights[left], heights[right]);
            int breadth = right - left;
            int area = length * breadth;

            maxWater = max(maxWater, area);

            if(heights[left] < heights[right])
               left++;
            else 
               right--;
        }

        return maxWater;
    }
};
