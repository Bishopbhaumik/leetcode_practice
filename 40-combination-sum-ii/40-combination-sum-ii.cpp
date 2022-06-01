class Solution {
public:
  void allcomb(vector<int>& candidates, int target,int id,vector<vector<int>> &ans,vector<int> &ds)
    {
        if(target ==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=id;i<candidates.size();i++)
        {
            if(i>id && candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]<=target)
            {
                ds.push_back(candidates[i]);
                allcomb(candidates,target-candidates[i],i+1,ans,ds);
                ds.pop_back();
                
            }
        }
        
    }
    
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
        {
            vector<vector<int>> ans;
            sort(candidates.begin(),candidates.end());
            vector<int> ds;
            allcomb(candidates,target,0,ans,ds);
            return ans;
        }
};