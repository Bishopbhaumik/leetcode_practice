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
for(auto x : nums){
p.insert(x);
}
}
int add(int val) {
p.insert(val);
auto it = p.begin();
for(int i = 0 ; i < (p.size()-k) ;i++) it++;
return *it;
}
};
​
/**
* Your KthLargest object will be instantiated and called as such:
* KthLargest* obj = new KthLargest(k, nums);
* int param_1 = obj->add(val);
*/
```
​
​
​
​