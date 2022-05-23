void reverseArrayinGroups(vector<long long> &arr, int n, int k)
{
  for(int i = 0; i < n; i+=k)
  {
    int start = i;
    int e = i + k - 1;
    
    if(e >= n)
    {
      e = n - 1;
    }
    
    while(start < e)
    {
      swap(arr[start++], arr[e--]);
    }
  }
