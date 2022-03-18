class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size() == 0) return "";
        string prf=strs[0];
        
        for(int i=1;i<strs.size();i++)
        {
            while(strs[i].find(prf)!=0){
                prf=prf.erase(prf.size()-1);
            }
        }
        return prf;
  
        }
    
};