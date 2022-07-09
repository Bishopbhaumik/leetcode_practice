class Solution {
public:
    
    static bool comper(string &s1,string & s2)
    {
        if((s1+s2)>(s2+s1))
            return true;
        else 
            return false;
    }
    string largestNumber(vector<int>& nums) {
        
        vector<string>vi;
        for(auto i:nums)
            vi.push_back(to_string(i));
        
        sort(vi.begin(),vi.end(),comper);
        
        string res;
        
        for(auto it:vi)
            res+=it;
        
        int i=0;
        
        while(i<res.length() && res[i]=='0')
            i++;
        if(i==res.length())
            return "0";
        return res;
    }
};