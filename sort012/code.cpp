class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int s = 0, e = n - 1, mid = 0;
        
        while(mid <= e){
            switch(a[mid]){
                case 0:{
                    swap(a[s++], a[mid++]);
                    break;
                }
                case 1:{
                    mid++;
                    break;
                }
                case 2:{
                    swap(a[e--], a[mid]);
                    break;
                }
            }
        }
    }
    
};
