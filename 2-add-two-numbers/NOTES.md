​
while(curr1 && curr2)
{
int total = curr1->val + curr2->val + carry;
res->next = new ListNode(total%10);
res = res->next;
carry = total/10;
​
curr2 = curr2->next;
curr1 = curr1->next;
}
​
​
res->next = curr1? curr1 : curr2;
​
while(carry)
{
if(res->next == NULL) res->next = new ListNode();
int total = res->next->val + carry;
res->next->val = total %10;
carry = total/10;
res = res->next;
}
​
​
return head.next;
}
};
```