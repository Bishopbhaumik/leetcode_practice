class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int a=0;
        vector <string>:: iterator it;
        for(it=operations.begin();it!=operations.end();it++)
        {
            if(*it=="++X" || *it == "X++")
               a=a+1;
            else{
                a=a-1;
            }
        }
        return a;
    }
};