class MinStack {
    vector<int> st;
    vector<int> smallest_st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        if(smallest_st.empty()){
            smallest_st.push_back(val);
        }
        else if(smallest_st.back()>val){
            smallest_st.push_back(val);
        }
        else {
            smallest_st.push_back(smallest_st.back());
        }
        

    }
    
    void pop() {
        st.pop_back();
        smallest_st.pop_back();
    }
    
    int top() {
        if(st.empty()) return -1;
        return st.back();
    }
    
    int getMin() {
        return smallest_st.back();
    }
};
