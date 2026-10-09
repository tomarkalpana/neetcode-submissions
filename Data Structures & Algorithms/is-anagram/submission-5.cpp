class Solution {
public:
   bool isAnagram(string s, string t) {
      vector<int> freq1(26, 0);

      if(s.length() != t.length())
         return false;

      for(auto c : s){
         freq1[c - 'a']++;
      }

      for(auto c : t){
         freq1[c - 'a']--;
      }

      for(auto x : freq1){
         if(x > 0)
            return false;
      }

      return true;
   }
};
