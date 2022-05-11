void solve(vector<int>nums, vector<vector<int>>&ans, int index, vector<int>output)
{
  //Base Case
  if(index >= nums.size())
  {
    ans.push_back(output);
    return;
  }
  
  //Exclude
  solve(nums, ans, index + 1, output);
  
  //include
  int element = nums[index];
  output.push_back(element);
  solve(nums, ans, index+1, output);
}

vector<vector<int>> subset(vector<int>nums)
{
  vector<vector<int>>ans;
  vector<int>output;
  int index = 0;
  solve(nums, ans, index, output);
  return ans;
}

