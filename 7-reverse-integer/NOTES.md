the only important part to note here is:
if the constraint excids
then return 0
```
while(x!=0)
{
c=x%10;
if((res>INT_MAX/10)||(res<INT_MIN/10)){
return 0;
}
res=(10*res)+c;
x=x/10;
}
```