class Solution {
public:

    int solve(string& s, int left, int right){
        int count = 0;

        while(left>=0 && right<s.length() && s[left] == s[right]){
            count++;
            left--;
            right++;
        }

        return count;
    }

    int countSubstrings(string s) {

        int result = 0;

        for(int i=0; i<s.size(); i++){
            int odd = solve(s, i, i);

            int even = solve(s, i, i+1);

            result += even + odd;
        }

        return result;
    }
};
