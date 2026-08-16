class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto p : s){
                if(p == '(' || p == '{' || p == '[')
                    st.push(p);
                else {
                    while(st.empty()) return false;

                    if((p == ')' && st.top() == '(') || 
                    (p == ']' && st.top() == '[') ||
                    (p == '}' && st.top() == '{'))
                        st.pop();
                    else 
                        return false;   
                }
            
        }

        return st.empty();
        
    }
};
