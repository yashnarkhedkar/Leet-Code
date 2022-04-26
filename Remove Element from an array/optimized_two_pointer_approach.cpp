class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=nums.size()-1,i = 0;
        while(i <= j)
        {
            if(nums[i] == val)
            {
                while(nums[j] == val)
                {
                    if(j==i)
                        return i;
                    j--;
                }
                nums[i] = nums[j--];
            }
        }
        return i;
    }
};
