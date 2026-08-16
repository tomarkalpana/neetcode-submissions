class Solution {
public:

    string isAlphanum(string s){
        string ans = "";

        for(auto ch : s){
            if(isalnum(ch)) 
                ans += tolower(ch);
        }

        return ans;
    }

    bool isPalindrome(string s) {
        string ans = isAlphanum(s);

        int low = 0, high = ans.length() - 1;

        while(low <high){
            if(ans[low] == ans[high]){
                low++;
                high--;
            } else {
                return false;
            }
        }

        return true;
    }
};
