class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        sort(arr2.begin(), arr2.end());
        
        for(int i = 0; i < arr1.size(); i++)\
        {
            int s = 0;
            int e = arr2.size() - 1;
            int mid;
            bool temp = true;
            
            while(s <= e)
            {
                mid = s + (e-s)/2;
                   
                if(abs(arr1[i] - arr2[mid]) <= d)
                {
                    temp = false;   
                    break;
                }
                
                else if(arr2[mid] > arr1[i])
                {
                    e = mid - 1;
                }
                
                else
                {
                    s = mid + 1;
                }
            }
            
            if(temp)
            {
                count++;
            }
        }
        
        return count;
    }
};
