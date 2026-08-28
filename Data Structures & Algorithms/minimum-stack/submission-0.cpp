class MinStack {
public:

    stack<int> st;
    stack<int> minstack;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if(!minstack.empty()){
            int min_val = min(val, minstack.top());
            minstack.push(min_val);
        } else 
           minstack.push(val);
    }
    
    void pop() {
        st.pop();
        minstack.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
