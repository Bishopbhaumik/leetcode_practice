we check if the size is zero or not
if 0
return 0
​
if not 0
then
increase integer value
now run the loop from the 1st position if it matches with previous value then contnue.
else
nums[j]=nums[i]
now increase the value of j and k and return the value k
```
class Solution {
public:
int removeDuplicates(vector<int>& nums) {
int k=0,j=0;
if(nums.size()==0){
return 0;
}
j++;
k++;
for(int i=1;i<nums.size();i++){
if(nums[i]==nums[i-1]){
continue;
}
else
{
nums[j]=nums[i];
j++;
k++;
}
}
return k;
}
​
};
```