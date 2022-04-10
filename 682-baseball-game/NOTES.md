```
class Solution {
public:
int calPoints(vector<string>& ops) {
stack<int> result;
int point1,point2;
​
int sum = 0;
for(auto i : ops)
{
if(i=="C")
{
result.pop();
}
else if(i=="D")
{
result.push(result.top()*2);
}
else if(i=="+")
{
point1 = result.top();
result.pop();
point2 = point1 + result.top();
result.push(point1);
result.push(point2);
}
else
{
result.push(stoi(i));
}
}
while(!result.empty())
{
sum+=result.top();
result.pop();
}
return sum;
}
};
```