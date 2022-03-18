class Solution {
public:
int lengthOfLongestSubstring(string s) {
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
};