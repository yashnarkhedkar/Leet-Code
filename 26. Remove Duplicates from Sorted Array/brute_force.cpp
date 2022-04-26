class Solution {
public:
//     Time complexcity
//     o(n)
//     space complexcity
//     o(1)
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            //    i baher bhi ja sakta array ki length se
            while(i < nums.size() && nums[i] == nums[index])
            {
                i++;
            }
            //These for [0 1 2]
            if(i == nums.size())
            {
                return ++index;
            }
            
            //These for ans
            nums[++index] = nums[i];
        }
        return ++index;
    }
};
