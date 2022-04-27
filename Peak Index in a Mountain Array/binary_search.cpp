int peakIndexInMountainArray(vector<int>&arr)
{
  int s = 0;
  int e = arr.size() - 1;
  
  int mid;
  
  while(s < e) //S <= e => TLE (Goes to infinite loop)
  {
    mid = s + (e-s)/2;
    
    if(arr[mid] < arr[mid + 1])
    {
      s = mid + 1;
    }
    
    else
    {
      e = mid;
    }
  }
  return s;
}
