class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int el : nums){

           if(st.find(el) != st.end()){
            return true;
           } 

           st.insert(el);
        }


        return false;

        
    }
};