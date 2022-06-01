class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            ans.push_back(s);
        }
        return ans;
    }
};