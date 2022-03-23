class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.length();
        int n=needle.length();
        int i=0,j=0;
        if(n==0)
          return 0;
     for(j=0;j<h;j++)
     {
       if(haystack.compare(j,n,needle,0,n)==0)
      {
        return j;
      }
    }
   return -1;
    }
};