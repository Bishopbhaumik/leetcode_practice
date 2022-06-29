class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     
        int j=0,i=0,sum=0;
        int size=nums.size();
        int mx=INT_MAX;

        while(j<size)
        {
            sum+=nums[j];
            
            if(sum<target)
                j++;
            
            else
            {
                while(sum>=target)
                {
                    mx=min(mx,j-i+1);
                    sum-=nums[i];
                    i++;
                }
                j++;
            }
        }
        
        if(mx==INT_MAX)
            return 0;
        
        return mx;
    }
};