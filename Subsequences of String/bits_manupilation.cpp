vector<string> subsequences(string str)
{
  vector<string>ans;
  int n = str.length();
  int p = 1 << n;
  
  for(int i = 0; i < p; i++)
  {
	string sub = "";
	  for(int j = 0; j < n; j++)
	  {
		  if(i & (1 << j))
		  {
			  sub += str[j];
		  }
	  }
	  if(sub.length() > 0)
	  {
		  ans.push_back(sub);
	  }
  }
    return ans;
}
