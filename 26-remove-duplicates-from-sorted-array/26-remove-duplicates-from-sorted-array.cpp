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

};