class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
      
        int n=s.length();
        vector<int>dp(n+1,false);
        dp[0]=true;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(dp[j])
                {
                    string strp=s.substr(j,i-j);
                
                auto p=find(wordDict.begin(),wordDict.end(),strp);
                
                if(p!=wordDict.end())
                {
                    dp[i]=true;
                    break;
                }
            }
        }
        }
     return dp[n];
    }
};