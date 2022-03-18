class Solution {
public:
    int reverse(int x) {
        long int res=0;
        int c;
        int y ;
        while(x!=0)
        {
            c=x%10;
             if((res>INT_MAX/10)||(res<INT_MIN/10)){
            
            return 0;
        }
            res=(10*res)+c;
            x=x/10;
                
        }
        if(x<0)
            res=-res;
        return res;
        
    }
};