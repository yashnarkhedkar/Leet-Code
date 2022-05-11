void solve(string str, vector<string>&ans, string output, int index)
{
  //base Case
  if(index >= str.length())
  {
	  if(output.length() > 0)
	  {
    	ans.push_back(output);
	  }
    return;
  }
  
  //Exclusion
  solve(str, ans, output, index+1);
  
  //inclusion
  char element = str[index];
  output.push_back(element);
  solve(str, ans, output, index+1);
}

vector<string> subsequences(string str)
{
  vector<string>ans;
  string output = "";
  int index = 0;
  solve(str, ans, output, index);
  return ans;
}
