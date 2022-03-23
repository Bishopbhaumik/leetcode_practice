// else we can simply add the value of s[i] to answer and increment i by 1
// example- 'VIII' = 5+1+1+1 = 8
//          'LX' = 50+10=60
1.                        // if the value of the next element is greater than previous one
// for example if we encounter IX , then basically we need to subtract the value of 'I' from value of 'X' and then add to answer and then also increment the iterator i by 2 , as we have already considered i+1 element
// 'IX'= 10-1=9
// 'XL'= 50-10=40
// 'IV'= 5-1=4
```
class Solution {
public:
int romanToInt(string s) {
​
unordered_map<char,int> value;
value['I']=1;
value['V']=5;
value['X']=10;
value['L']=50;
value['C']=100;
value['D']=500;
value['M']=1000;
int ans=0;
for(int i=0;i<s.length();)
{
​
if(i+1<s.length() && value[s[i]]<value[s[i+1]])
{
ans=ans+value[s[i+1]]-value[s[i]];
i=i+2;
}
else
{
ans=ans+value[s[i]];
i++;
}
}
return ans;
}
};
```