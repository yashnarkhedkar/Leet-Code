class Solution {
public:
    bool isPerfectSquare(int num) {
        long int s = 0;
        long int e = num;
        
        long mid;
        
        while(s <= e)
        {
            mid = s + (e-s)/2;
            
            long int ans = mid * mid;
            if(ans == num)
            {
                return true;
            }
            
            else if(ans > num)
            {
                e = mid - 1;
            }
            
            else
            {
                s = mid + 1;
            }
        }
        
        return false;
    }
};
