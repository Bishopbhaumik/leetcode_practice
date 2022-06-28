class Solution {
public:
    int longestSubstring(string s, int k) {
        
        int size=s.length();
        
        if(size==0 || size<k)
            return 0;
        
        if(k<=1)return size;
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<size;i++)
            mp[s[i]]++;
        
        int j=0;
        int len=0;
        while(j<size && mp[s[j]]>=k)
        {
            j++;
        }
            if (j>=size-1)
                return j;
            
            int ss1=longestSubstring(s.substr(0,j),k);
            
            while(j<size && mp[s[j]]<k) j++;
            
            int ss2=(j<size)? longestSubstring(s.substr(j),k):0;
            
            len=max(ss1,ss2);
        
        return len;
    }
};