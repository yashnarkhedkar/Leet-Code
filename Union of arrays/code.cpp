class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int c = 0, t = 0, d = 0;
        sort(a, a+n);
        sort(b, b+m);
        
        while(t < n && d < m){
            if(a[t] == a[d]){
                c++, t++, d++;
            }
            else if(a[t] < b[d]){
                t++;
            }
            else{
                d++;
            }
        }
        
        return c;
    }
};
