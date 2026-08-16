class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for(int num : nums){
           if(mpp[num] >= 1) 
              return num;
           else 
              mpp[num]++;
        }

        return -1;
        
    }
};
