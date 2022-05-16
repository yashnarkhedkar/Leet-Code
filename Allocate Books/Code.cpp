bool isPossible(vector<int>arr, int m, int n, int mid)
{
  int sum = 0;
  int studentCount = 1;
  
  for(int i = 0; i < arr.size(); i++)
  {
    if(sum + arr[i] <= mid)
    {
      sum += arr[i];
    }
    else
    {
      studentCount++;
      if(studentCount > m || arr[i] > mid)
      {
        return false;
      }
      sum = arr[i];
    }
  }
    return true;
}

int allocateBooks(vector<int>arr, int m, int n)
{
  int sum = 0;
  for(int i = 0; i<arr.size(); i++)
  {
    sum += arr[i];
  }
  int s = 0;
  int e = sum;
  int mid;
  
  while(s <= e)
  {
    mid = s + (e-s)/2;
    if(isPossible(arr, m, n, mid))
       {
         ans = mid;
         e = mid - 1;
       }
       else
       {
         s = mid + 1;
       }
    }
    return ans;
}
