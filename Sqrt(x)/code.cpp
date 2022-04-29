class Solution {
public:
    int mySqrt(int x) {
        long int s = 0;
        long int e = x;
        
        long int mid;
        
        while(s <= e)
        {
            mid = s + (e-s)/2;
            
            long int ans = mid * mid;
            
            if(ans == x)
            {
                return mid;
            }
            
            else if(ans > x)
            {
                e = mid - 1;
            }
            
            else
            {
                s = mid + 1;
            }
        }
        return e;
    }
};
