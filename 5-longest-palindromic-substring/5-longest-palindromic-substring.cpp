class Solution {
public:
    int expand(string s,int left,int right){
        int l=left;
        int r=right;
        while(l>=0 && r<s.length() && s[l]==s[r])
        {
            l--;
            r++;
        }
        return (r-l-1);
    }
    string longestPalindrome(string s) {
        if(s=="" || s.length()<1)
            return "";
        int start=0,end=0;
        int i;
        int mxlen;
        for(i=0;i<s.length();i++)
        {
            int len1=expand(s,i,i);
            int len2=expand(s,i,i+1);
            int len=max(len1,len2);
            if(len>(end-start))
            {
                start=i-((len-1)/2);
                end=i+((len)/2);
                mxlen=len;
            }
        }
        
        return s.substr(start,mxlen);
    }
};