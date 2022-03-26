class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        vector <int> res;
        int cost =0;
        
        for(int i=0; i<costs.size();i++)
        {
            cost = cost +costs[i][0];
            
            res.push_back(costs[i][1]-costs[i][0]);
        }
      
         sort(res.begin(),res.end());
        
        for(int i=0; i<res.size()/2;i++)
            cost = cost+res[i];
            return cost;
    }

};