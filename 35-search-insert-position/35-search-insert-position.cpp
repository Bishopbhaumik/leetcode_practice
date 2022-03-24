class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int ans;
        
        for(int i = 0 ;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
              ans=i;
                break;
            }
               
            if(target < nums[i])
            {
               ans=i;
                break;
            }
        }
        return ans;
    }
};