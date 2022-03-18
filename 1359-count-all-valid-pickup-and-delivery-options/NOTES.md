How many places can we place dn-1?
At 3, after pn-1.
p1 p2 p3 --- pn-1 pn dn dn-1
p1 p2 p3 --- pn-1 pn dn-1 dn
p1 p2 p3 —-- pn-1 dn-1 pn dn
​
How many places can we place dn-2?
At 5, after pn-2.
​
Thus, we can observe that to place n deliveries, the number of ways is 1*3*5..*(2*n-1).
Time Complexity: O(n)
Space Complexity: O(1)
​
​
sol:
```
class Solution {
public:
int modulo=1e9+7;
int countOrders(int n) {
long long answer = 1;
for (int i = 1; i <= n; i++) {
answer = (answer * i)%modulo;
answer = (answer * (2 * i - 1))%modulo;
}
return answer;
}
};
```
​
​