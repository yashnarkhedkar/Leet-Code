#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
   int maxp = 0;
   int minp = prices[0];    
   for(int i=1;i<prices.size();i++){
       minp = min(minp,prices[i]);
       maxp = max(maxp,prices[i]-minp);
   }
   return maxp;
}
