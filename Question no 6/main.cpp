// Best Time to Buy and Sell Stock


class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int ans=0,x = prices[0],p;
      int n = prices.size();
      for(int i=0;i<n;i++)
      {
       x = min(x,prices[i]);
        p = prices[i]-x;
        ans = max(ans,p);
        
      }
      return ans;
    }
};
