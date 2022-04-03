```
class Solution {
public:
void nextPermutation(vector<int>& nums) {
int s=nums.size();
int i,j;
for(int i=s-2;i>=0;i--)
{
if(nums[i]<nums[i+1])
break;
}
if(i<0)
{
reverse(nums.begin(),nums.end());
}
else
{
for(int j=s-1;j>i;j--)
{
if(nums[j]>nums[i])
{
break;
}
}
swap(nums[i],nums[j]);
reverse(nums.begin()+i+1,nums.end());
}
}
};
```
​
we are taking two pointer from right side find the decrasing suffix
then find the pivot then swap it with nearest succesor then  rverse the vector.
​