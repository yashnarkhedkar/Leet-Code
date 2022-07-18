class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        
        int len = s.length();
        for(int i = 0; i < len; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')//Opening Bracket
            {   
                st.push(s[i]);
            }
            else //Closing bracket
            {
                if(st.empty()){
                    return false;
                }
                
                char ch = st.top();
                if(ch == '(' && s[i] == ')' ||
                   ch == '{' && s[i] == '}' ||
                   ch == '[' && s[i] == ']'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};