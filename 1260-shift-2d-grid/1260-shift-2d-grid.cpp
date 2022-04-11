class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<int>temp;
        int mod=m*n;
        
        //push all elements in a 1-d array
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp.push_back(grid[i][j]);
            }
        }
        
        k=k%mod;
        
        // if k==0 then no shifting is done so return original grid
        if(k==0)return grid;
        
        // elements in last row are shifted to 1st row that's why we start from mod-k index i.e kth element from last
        
        int idx=mod-k;
        
        // now update grid according to shifting
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=temp[idx];
                idx=(idx+1)%mod;
            }
        }      
        return grid;
        
    }
};