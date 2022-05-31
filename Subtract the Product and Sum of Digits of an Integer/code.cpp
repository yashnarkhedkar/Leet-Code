int subtractProductAndSum(int n)
{
  int sum = 0, product = 1;
  while(n!=0)
  {
    int digit = n % 10;
    sum += digit;
    product *= digit;
    n = n / 10;
  }
  
  return product - sum;
}
