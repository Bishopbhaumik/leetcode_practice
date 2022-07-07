class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>>res;
        multiset<int> pq{0};
        
        vector<pair<int,int>> pi;
        
         for(auto b: buildings)
         {
            pi.push_back({b[0], -b[2]});
            pi.push_back({b[1], b[2]});
        }
        
        sort(pi.begin(),pi.end());
        
        int currh=0;
        
        for(int i=0;i<pi.size();i++)
            
        {
            int hig=pi[i].second;
           
            if(hig<0)
                pq.insert(-hig);
            else
                pq.erase(pq.find(hig));

                
            
            if(currh!=*pq.rbegin())
            {
                currh=*pq.rbegin();
                res.push_back({pi[i].first,currh});
            }
        }
        return res;
    }
};