// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
     int n=s.size();
     int mx=INT_MIN;
     int i=0,j=0,sum=0;
     
     unordered_map<char,int>mp;
     
     while(j<n)
     {
         mp[s[j]]++;
         
         if(mp.size()==j-i+1)
         {
             mx=max(mx,j-i+1);
         }
         
         else if(mp.size()<j-i+1)
         {
             while(mp.size()<j-i+1)
             {
                 mp[s[i]]--;
                 if(mp[s[i]]==0)
                 {
                     mp.erase(s[i]);
                 }
                 i++;
             }
         }
         j++;
     }
     return mx;
}