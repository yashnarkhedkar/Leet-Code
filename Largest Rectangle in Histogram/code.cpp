class Solution {
private:
    vector<int> nextSmallerElement(vector<int> arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0 ; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(vector<int>& heights, int n){
        stack<int>s;
        vector<int>ans(n, -1);
        
        for(int i = 0; i < n; i++){
            while(!s.empty()) {
                if(s.top() != -1 && heights[s.top()] >= heights[i]) {
                    s.pop();
                }
                else {
                    ans[i] = s.top();
                    break;
                }
            }
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int>next;
        next = nextSmallerElement(heights, n);
        
        vector<int>prev;
        prev = prevSmallerElement(heights, n);
        
        int area = INT_MIN;
        for(int i = 0; i < n; i++){
            int l = heights[i];
            
            if(next[i] == -1){
                next[i] = n;
            }
            
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(newArea, area);
        }
        
        return area;
    }
};
