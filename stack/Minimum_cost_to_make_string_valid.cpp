#include<stack>

int findMinimumCost(string str) {
    stack<char>s;
    
    int n = str.length();
    if(n&1){
        return -1;
    }
    
    for(int i = 0; i < n; i++){
        char curr = str[i];
        
        if(curr == '{'){
            s.push(curr);
        }
        else{
            if(!s.empty() && s.top() == '{'){
                s.pop();
            }
            else{
                s.push(curr);
            }
        }
    }
    
    int a = 0, b = 0;
    
    while(!s.empty()){
        if(s.top() == '{'){
            a++;
        }
        else{
            b++;
        }
        s.pop();
    }
    
    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}