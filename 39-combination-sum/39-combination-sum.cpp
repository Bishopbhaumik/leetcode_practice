class Solution {
public:
    void totways(vector <int> &nums, int currin,int target,vector<int> &res,vector <vector<int>> &output)
{

    if (currin == nums.size())
     {
         if(target == 0)
         output.push_back(res);
         
         return ;
     }

     if(nums[currin]<=target)
     {
         res.push_back(nums[currin]);
         totways(nums,currin,target-nums[currin],res,output);
         res.pop_back();
     }

    totways(nums,currin+1,target,res,output);

}
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector<int>> output;
        vector <int> res;
        totways(candidates,0,target,res,output);
        return output;

    }
};