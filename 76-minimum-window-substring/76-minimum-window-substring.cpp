class Solution {
public:
    string minWindow(string s, string t) {
        
        string res="";
        
        if(s.length()<t.length())
            return res;
        
        unordered_map<char,int> mp;
        
        int i=0,j=0,mn=INT_MAX,count=0;
        
        for(int i=0;i<t.length();i++)
            mp[t[i]]++;
        
        count=mp.size();
        
        while(j<s.length())
        {
            
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                
                if(mp[s[j]]==0)
                    count--;
            }
  
            if(count==0)
            {
                if(mn>j-i+1)
                 {
                    mn=j-i+1;
                    res=s.substr(i,mn);
                }
                
            }
            
            while(i<=j && count==0)
            {
                 if(mp.find(s[i])!=mp.end())
            {
                mp[s[i]]++;
                     
                     if(mp[s[i]]==1)
                     {
                        if(mn>j-i+1)
                        {
                         mn=j-i+1;
                         res=s.substr(i,mn);
                        }
                           count++;
                     }
                   
            }
                i++;
            
        }
            j++;
    }
        
        if(mn==INT_MAX)
            return "";
        
        return res;
    }
};