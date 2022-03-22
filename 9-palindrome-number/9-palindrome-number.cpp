class Solution {
public:
    bool isPalindrome(int x) {
       long int a=0,p,v=x;
        bool ci;
        
        if(x==0)
            return true;
        if(x<0)
            return false;
        
        if(x%10==0)
            return false;
        
        while(v>0){
            p=v%10;
            
            a=10*a+p;
            
            v=v/10;
            
        }
       
      if(a == x )
        {
            ci= true;
        
        }
        else
        {
            ci=false;
        }

       return ci;
    }
};