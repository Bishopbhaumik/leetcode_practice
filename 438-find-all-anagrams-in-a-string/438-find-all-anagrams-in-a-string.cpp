class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mp;
	     int i=0,j=0, ans=0;
	     vector<int>res;
	    for(int k=0; k<p.size();k++)
	       mp[p[k]]++;
	       
	     int l=p.size();
	       
	     int count=mp.size();
	    while(j<s.size())
	    {
	        
	        if(mp.find(s[j])!=mp.end())
	          {
	              mp[s[j]]--;
	              
	              if(mp[s[j]]==0)
	                count--;
	          }
	          
	          if(j-i+1<l)
	          {
	              j++;
	          }
	          else if(j-i+1==l)
	          {
	             if(count==0)
	             {
	                 ans+=1;
                     res.push_back(i);
	             }
	       
	         
	        if(mp.find(s[i])!=mp.end())
	        {
	            mp[s[i]]++;
	            if(mp[s[i]]==1)
	              count++;
	        }
            i++;
            j++;
	       }
	    }
	    // cout<<ans;
	    return res;
	    
	}
    
};