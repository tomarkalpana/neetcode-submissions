class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int result = 0;

        for(string token : tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                int rightOpr = st.top();
                st.pop();

                int leftOpr = st.top();
                st.pop();

                if (token == "+")
                    result = leftOpr + rightOpr;
                else if (token == "-")
                    result = leftOpr - rightOpr;
                else if (token == "*")
                    result = leftOpr * rightOpr;
                else
                    result = leftOpr / rightOpr;

                st.push(result);

            } else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};
