class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char,int> value;
        value['I']=1;
        value['V']=5;
        value['X']=10;
        value['L']=50;
        value['C']=100;
        value['D']=500;
        value['M']=1000;
        int ans=0;
        for(int i=0;i<s.length();)
        {

            if(i+1<s.length() && value[s[i]]<value[s[i+1]])
            {
                ans=ans+value[s[i+1]]-value[s[i]];
                i=i+2;
            }
  
            else
            {
                ans=ans+value[s[i]];
                i++;
            }
        }
        return ans;
    }
};