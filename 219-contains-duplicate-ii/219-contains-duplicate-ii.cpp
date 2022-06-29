class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size=nums.size();
        unordered_map<int,int> mp;
        int i=0,j=0;
        while(i<size)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                if(abs(mp[nums[i]]-i)<=k)
                {
                    return true;
                }
            }
            mp[nums[i]]=i;
            i++;
        }
        return false;
    }
};