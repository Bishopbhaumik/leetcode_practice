class Solution {
public:
    
    double myPow(double x, long long int n) {
        if(n==0||x==1)
            return 1;
        
        else if(n==1)
            return x;
        
        else if(n<0)
        {
            return 1/myPow(x,n/-1);
        }
       
        else if(n%2==0)
            return myPow(x*x,n/2);
        
        else 
            return myPow(x*x,n/2)*x;
    }
};