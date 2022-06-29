class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        vector<string> ans;
        
        unordered_map<string,int> ump;
        
        string demo;
        
        for(int i=0;i<s.size();i++)
        {
            demo.push_back(s[i]);
            if(i==9)
            {
                ump[demo]++;
            }
        else if(i>9)
          {
                demo.erase(0,1);
                ump[demo]++;
          }
        }
        
        for(auto it : ump)
        {
            if(it.second>1)
            {
                ans.push_back(it.first);
            }
        }

        
        return ans; 
    }
};