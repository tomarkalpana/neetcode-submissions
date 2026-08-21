class Solution {
public:

    string encode(vector<string>& strs) {
        string wholeStr = "";

        for(string s : strs){
            int length = s.length();
            wholeStr += to_string(length) + "#" + s;
        }

        return wholeStr;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;

        while(i < s.length()){
            string lengthStr = "";
            while(s[i] != '#'){
                lengthStr += s[i];
                i++;
            }

            string str = "";

            int length = stoi(lengthStr);

            i++;

            while(length--){
                str += s[i];
                i++;
            }

            result.push_back(str);
        }

        return result;
                
        
    }
};
