// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
    int search(string pat, string txt){
        int k=pat.length();
        int n=txt.length();
        map<char,int>mp;
        for(int i=0;i<k;i++)
        {
            mp[pat[i]]=mp[pat[i]]+1;
        }
        int count=mp.size();
        int ans=0;
        int i=0;
        int j=0;
        while(j<n)
        {
            auto it=mp.find(txt[j]);
            if(it!=mp.end())
            {
                it->second--;
            }
            if(it!=mp.end() and it->second==0)
            {
                count--;
            }
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(count==0)
                {
                    ans++;
                }
                auto it1=mp.find(txt[i]);
                if(it1 != mp.end() and mp[txt[i]]==0)
                {
                    count++;
                }
                if (it1 != mp.end())
                    it1->second++;
                i++;
                j++;
            }
        }
        return ans;
    }

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends