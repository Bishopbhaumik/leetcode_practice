class Solution {
public:
    int climbStairs(int n) {
        
        int s1=1,s2=2;
        
        for(int i=2;i<n;i++)
        {
            s1=s1+s2;
            swap(s1,s2);
        }
        return n>=2?s2:s1;
    }
};