# The concept of Heap
1. It stores the data in ascending order
2. to store data in descending order we have to use grater function.
```
make_heap(vi.begin(),vi.end(), greaters());
```
​
# The concept of the code.
```
class Solution {
public:
int lastStoneWeight(vector<int>& s) {
make_heap(s.begin(), s.end());
while (s.size() > 1) {
int x = s.front();
pop_heap(s.begin(), s.end());
s.pop_back();
int y = s.front();
pop_heap(s.begin(), s.end());
s.pop_back();
if (x == y) continue;
s.push_back(abs(x - y));
push_heap(s.begin(), s.end());
}
return s.size() ? s.front() : 0;
}
};
```
​
## Process:
after storing data in heap we take the last two item and doing (-) until size of vector is zero.
​
​
​
​
​
​