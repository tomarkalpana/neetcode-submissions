class Solution {
public:
   bool isAnagram(string s, string t) {
      vector<int> freq1(26, -1);
      vector<int> freq2(26, -1);

      for(auto c : s){
         freq1[c - 'a']++;
      }

      for(auto c : t){
         freq2[c - 'a']++;
      }

      if(freq1 == freq2){
         return true;
      }

      return false;
   }
};
