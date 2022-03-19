using  unordered map to count the value of the target
​
```
class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
vector <int> v;
unordered_map<int,int> umap;
for(int i=0;i<nums.size();i++)
{
if(umap.count(target-nums[i])){
v.push_back(umap[target-nums[i]]);
v.push_back(i);
}
umap[nums[i]]=i;
}
return v;
}
};
```