1. Bruteforce Apprch
Idea - Do Check Double Time For Each element

Time Complexcity - O(N*N) <=Give You TLE
Space Complexcity - O(1)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j])continue;
                else{
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
