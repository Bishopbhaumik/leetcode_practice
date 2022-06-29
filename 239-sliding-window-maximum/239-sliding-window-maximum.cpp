class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int i=0,j=0;
        int val;
        deque<int>q;
        
        vector<int> res;
        
        while(j<nums.size())
        {
            
         while(!q.empty() && nums[j]> q.back())
             q.pop_back();
         q.push_back(nums[j]);
        if(j-i+1 < k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                res.push_back(q.front());
                if(nums[i]==q.front())
                    q.pop_front();
                i++;
                j++;
            }
         
        }
        return res;
    }
};