class Solution {
public:
    bool validPalindrome(string s) {
        
        int left=0,right=s.size()-1;
        int c=0;
        while(left<right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
            {
                left++;
                c++;
            }
            
        }
        left=0;
        right=s.size()-1;
        int c1=0;
        while(left<right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
            {
                right--;
                c1++;
            }
                    
    }
    if(c<=1 || c1<=1)
    {
        return true;
    }
    else return false;
    }
};