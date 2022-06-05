#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int ans = 0;
    int minSofar = prices[0] ;
    
    for(int i=1;i<prices.size();i++){
          if(prices[i]<minSofar)    minSofar = prices[i];
          else{
              ans = max(ans,prices[i]-minSofar);
          }
    }
    return ans;
}