class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int, int> mpp;

       for(auto num : nums){
            if(mpp.count(num)){
                return num;
            }

            mpp[num]++;
       }

       return -1;
        
    }
};
