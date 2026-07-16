class MinStack {
public:
    stack<int> st;
    stack<int> min_st;
    int min=INT_MAX;
    MinStack() {
       
    }
    
    void push(int val) {
        if (st.empty()){
            min_st.push(val);
        }else{
            if (min_st.top()>val){
                min_st.push(val);
            }else{
                min_st.push(min_st.top());
            }
        }
        st.push(val);
    }
    
    void pop() {
        if (st.empty())return ;
        min_st.pop();
        st.pop();
    }
    
    int top() {
        if (st.empty())return 0;
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
