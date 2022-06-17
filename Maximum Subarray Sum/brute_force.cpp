class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int ans = INT_MIN;
        
        for(int i = 0; i < size; i++)
        {
            for(int j = i, curSum = 0; j < size; j++)
            {
                curSum += nums[j];
                ans = max(curSum, ans);
            }
        }
        
        return ans;
    }
};
