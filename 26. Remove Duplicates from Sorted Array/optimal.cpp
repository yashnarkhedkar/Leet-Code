class Solution {
public:
//   time complexcity = o(n)
//     space complexcity = o(1)
    int removeDuplicates(vector<int>& nums) {
        
        int index = 0;
        while(1)
        {
            int i = upper_bound(nums.begin(), nums.end(), nums[index])-nums.begin();
            if(i == nums.size())
            {
                return ++index;
            }
            nums[++index] = nums[i];
        }
        
        return ++index;
    }
};
