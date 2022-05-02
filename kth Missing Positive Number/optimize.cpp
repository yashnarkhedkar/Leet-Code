//Time complexity o(logn)
//Space complexity o(1)
int findKthPositive(vector<int>arr, int k)
{
  int s = 0;
  int e = arr.length() - 1;
  int mid;
  int ans = 0;  
  
  while(s <= e)
  {
    mid = s + (e-s)/2;
    if((arr[mid] - (i+1)) < k)
    {
      ans = mid + 1;
      k++;
    }
    else
    {
      e = mid - 1;
    }
  }
  return k + ans;
}
