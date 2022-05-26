int RomanTointerger(string s)
{
  unordered_map<char, int> mp = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
  int sum = mp[s.back()];
  for(int i = 0; i < s.length() - 1; i++)
  {
    if(mp[s[i]] < mp[s[i+1]])
    {
      sum -= mp[s[i]];
    }
    else
    {
      sum += mp[s[i]];
    }
  }
  return sum;
}
