
void insertAtBottom(stack<int> &stack, int x){
    if(stack.empty(){   // include condtion for sorting st.top()<=x if want to sort
        stack.push(x);
        return;
    }

    int top = stack.top();
    stack.pop();
    insertAtBottom(stack, x);
    stack.push(top);
}

void solve(stack<int> &stack){
    if(stack.empty()){
        return;
    }
    int top = stack.top();
    stack.pop();
    solve(stack);
    insertAtBottom(stack, top);
}

void reverseStack(stack<int> &stack) {
    solve(stack);
    
}
