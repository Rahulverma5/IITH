

bool isValid(string s) {
    stack<char> st;

    for (auto i:s){

        if(i=='(' || i=='{' || i=='['){
            st.push(i);
        }

        else if(i==')'|| i=='}' || i==']'){
            char c=' ';
            if(!st.empty()){
                c = st.top();
                st.pop();
            }

            if((i==')' && c!='(') ||(i=='}' && c!='{') || (i==']'&&c!='[') ){ 
                return false;
        
            }
        }
    }

    return st.empty();
}
