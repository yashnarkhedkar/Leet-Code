void insertAtbottom(stack<int>&st, int temp){
    if(st.empty()){
        st.push(temp);
        return;
    }
    int ele = st.top();
    st.pop();
    
    insertAtbottom(st, temp);
    
    st.push(ele);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int temp = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtbottom(stack, temp);
}
