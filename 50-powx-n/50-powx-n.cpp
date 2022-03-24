class Solution {
public:
    double myPow2(double x,long long int n) {
        
        if(n==0||x==1)
            return 1;
        
        else if(n==1)
            return x;
        
        else if(n<0)
        {
            return 1/myPow2(x,n/-1);
        }
       
        else if(n%2==0)
            return myPow2(x*x,n/2);
        
        else 
            return myPow2(x*x,n/2)*x;
    }
    
    double myPow(double x, int n) {
        return myPow2(x,n);
    }
};