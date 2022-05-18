class Solution {
public:
  vector<vector<int>> permute(vector<int>nums)
  {
      vector<vector<int>>ans;
      int index = 0;
      solve(nums, ans, index);
      return ans;
  }
private:
  void solve(vector<int>nums, vector<vector<int>>&ans, int index)
  {
    //Base Case
    if(index >= nums.size())
    {
      ans.push_back(nums);
      return;
    }
    
    for(int j = index; j < nums.size(); j++)
    {
      swap(nums[index], nums[j]);
      
      //Recursive Call
      solve(nums, ans, index+1);
      
      //BackTracking
      swap(nums[index], nums[j]);
    }
  }

};
