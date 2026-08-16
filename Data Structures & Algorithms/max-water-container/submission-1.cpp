class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low = 0, high = heights.size()-1;
        int maxWater = INT_MIN;
        int currWater = 0;

        while(low < high){
            currWater = (high-low) * min(heights[low], heights[high]);

            maxWater = max(maxWater, currWater);

            if(heights[low] < heights[high])
                low++;
            else 
                high--;
        }

        return maxWater;
    }
};
