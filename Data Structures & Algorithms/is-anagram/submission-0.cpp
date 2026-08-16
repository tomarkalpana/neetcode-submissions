class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<string, vector<string>> mpp;
        int n = s.length();
        int m = t.length();

        if(n != m) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
