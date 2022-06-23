class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        if(n<=1)
            return 0;
        
        vector<int> dp(n-1,0);
        for(int i=0;i<n-1;i++)
        {
            dp[i]=prices[i+1]-prices[i];
        }
        
        int max_p=max(0,dp[0]);
        
        for(int i=1;i<n-1;i++)
        {
            if(dp[i-1]>0)
            {
                dp[i]+=dp[i-1];
            }
            max_p=max(dp[i],max_p);
        }
        return max_p;
        
    }
};