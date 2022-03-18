We know how to find the maximum subarray sum using Kadane’s Algorithm of a linear array. But this is circular.
How can we extend our algorithm to find this?
​
How can we achieve this? 🤔
​
We can make a great observation here that our answer can either be situated in the center of the subarray (abcd xxx abcd)
or be wrapped around (xxx abcd xxx) where x denotes the elements included in our maximum sum circular subarray.
​
In the first case, our answer is the good old max circular subarray sum which we already know how to find.
What about the second one? We can again observe that it’s the total sum - the MINIMUM subarray sum (abcd).
So, again we can find this by tweaking our old algorithm.
​
Finally, we can take a maximum of both the conditions keeping in mind the edge case that the minimum subarray sum can be equal to the total sum so in that case,
we must return the maximum subarray sum itself.
​
Time Complexity: O(n)
Space Complexity: O(1)
​
sol:
```
class Solution {
public:
int maxSumSubarray(vector<int>& nums) {
int n=nums.size();
int sum=0;
int maxi=INT_MIN;
for(int i=0;i<n;i++){
sum+=nums[i];
if(sum>maxi)
maxi=sum;
if(sum<0)
sum=0;
}
return maxi;
}
int minSumSubarray(vector<int>& nums){