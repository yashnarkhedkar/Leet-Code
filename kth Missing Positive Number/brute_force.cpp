//Time Complexity o(n)
//Space Complexity o(1)
int findkthpositive(vector<int>arr, int k)
{
  for(auto i:v)
  {
    if(i <= k)
    {
      k++;
    }
    else
    {
      break;
    }
  }
  return k;
}
