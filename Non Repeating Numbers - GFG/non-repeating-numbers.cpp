// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> ans;
        int re=0;
        for(int i=0;i<nums.size();i++)
             re^=nums[i];
            
        
        //   re^=nums[i];
           
         re=re&~(re-1);
         int s1=0;
         int s2=0;
         for(int i=0;i<nums.size();i++)
         {
             if(re & nums[i])
                 s1^=nums[i];
               else
                   s2^=nums[i];
         }
           ans.push_back(s1);
           ans.push_back(s2);
             
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends