class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int  k;
        vector <int> :: iterator it;
        if (nums.size()==0)
        {
            return 0;
        }
        else{
        for(it=nums.begin();it!=nums.end();it++)
        {
            if((*it)==val)
            {
              nums.erase(it);  
                it--;
            }
        }
        k=nums.size();
        }
        return k;
    }
};