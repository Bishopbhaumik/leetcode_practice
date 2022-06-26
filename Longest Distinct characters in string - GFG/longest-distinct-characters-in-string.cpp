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
    int size = s.length();

    vector<int> freq(256,-1);
    
    int left = 0 , right = 0 , maxLen = 0;
    
    while(right < size){
        if(freq[s[right]] != -1)
        {
            left = max(freq[s[right]]+1 , left);
        }
        
        freq[s[right]] = right;
        maxLen = max(maxLen , right - left+1);
        right++ ; 
    }
    return maxLen;
}