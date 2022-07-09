class Solution {
public:
    int longestValidParentheses(string s) {
         stack<int> sp;
        
        sp.push(-1);
        
        int max_value=0;
        
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            
            if(c=='(')
            {
                sp.push(i);
            }
            else
            {
                sp.pop();
                
                if(sp.empty())
                {
                    sp.push(i);
                }
                else
                {
                    int len=i-sp.top();
                    max_value=max(max_value,len);
                }
            }
        }
        return max_value;
    }
};