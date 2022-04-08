# wrong approach:
```
class KthLargest {
vector<int> p;
int k;
public:
KthLargest(int k, vector<int>& nums) {
this->k=k;
for(int i=0;i<nums.size()-1;i++)
p.push_back(nums[i]);
}
int add(int val) {
p.push_back(val);
sort(p.begin(),p.end());
auto it = p.begin();
for(int i = 0 ; i < (p.size()-k) ;i++) it++;
return *it;
}
};
```
​
1. It wil have run time error there will be reffrence binding error as it is pointoing
last pointer .
​
# Correct approach:
1. use a heap
2. else use a multiset (sorted order store value)
3. then add the value in add value operation you have to publically declare varriable to use it in  add_value() function
## Code:
​
```
class KthLargest {
multiset<int> p;
int k;
public:
KthLargest(int k, vector<int>& nums) {
this->k=k;