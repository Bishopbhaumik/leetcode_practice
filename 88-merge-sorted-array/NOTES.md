Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
​
to solve this we are using stl opertations  we mrged two vectors and after that just used sort function
​
```
class Solution {
public:
void merge(vector <int> &a , int m , vector <int> &b , int n)
{
for(int i = 0 ; i < n ; i++)
a[i + m] = b[i];
sort(a.begin() , a.end());
return;
}
};
```