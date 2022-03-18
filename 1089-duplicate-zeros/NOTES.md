Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.
Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.
​
Example 1:
​
Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
​
Example 2:
​
Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]
​
Ans(c++):
count_if function gives the number of zeros in the array/vector
now two loops are running to found the duplicate ements and treplace it with 0.``
```
class Solution {
public:
void duplicateZeros(vector<int>& arr) {
int zeros = count_if(begin(arr), end(arr), [](int a) { return a == 0; });
​
for (int i = arr.size() - 1, j = arr.size() + zeros - 1; i < j; --i, --j) {
if (j < arr.size())
arr[j] = arr[i];
if (arr[i] == 0)
if (--j < arr.size())
arr[j] = arr[i];
}
}
};
```
​
​
​
​
​
​
​
​