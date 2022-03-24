class Solution {
public:
double myPow(double x, int n) {
long double ci;
if(n ==1)
return x;
if(n==0)
return 1;
if(n==-1)
return (1/x);
if(n>0)
ci= x*myPow(x,n-1);
if(n<0 && n<-1)
ci= (1/x)*myPow(x,n-1);
return ci;
}
};
​
​
this gives  a runtime error for a testcase