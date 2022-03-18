We can direct bruteforce and check all the possible prefix and get the ans it will take O(n^2).The other
way is we have to use a tree node structure to get the word count (i.e- trai method).
​
A more optional way is to  use stl function the complexity will be o(n log n)
​
How can we achieve this? 🤔
​
first we will return null string if length of vector is zero. If not then will initialize a string
with 0th index of the array then in for loop iterate through(from 1th index) the loop.
In each iteration a while loop I will check the if the string 0 matches with other or not
If matches then no change if not matches at any point then erase each charecter from 0th string.
​
Time Complexity: O(n log n)
Space Complexity: O(1)
​
sol:
```
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
```