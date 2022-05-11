vector<vector<int>> subsets(vector<int>nums)
{
  vector<vector<int>>ans;
  int n = nums.size();
  int p = 1 << n;
  for(int i = 0; i <  p; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if((i >> j) & 1)
      {
        ans[i].push_back(nums[j]);
      }
    }
  }
  
  return ans;

}
