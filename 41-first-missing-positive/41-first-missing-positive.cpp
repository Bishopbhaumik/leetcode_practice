class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        
        for(auto i :nums)
        {
            if(i>0)
                mp[i]++;
        }
  
        for(int i=1;i<=nums.size();i++)
        {
            if(mp.find(i)==mp.end())
                return i;
        }
        return (nums.size()+1);
    }
};