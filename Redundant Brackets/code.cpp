#include<stack>

bool findRedundantBrackets(string &s)
{
    stack <char> st;
    for(int i = 0; i < s.length(); i++){
        //If opening bracket is present or operator 
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-'
           || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            //Closing bracket or lowerCase letters
            if(ch == ')'){
                bool ans = true;
                while(st.top() != '('){
                    char temp = st.top();
                    if( temp == '+' || temp == '-' || temp == '*' || temp == '/'){
                        ans = false;
                    }
                    st.pop();
                }
                if(ans){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
