if (counter<k){
left = left->next;
}
if (counter>k){
right = right->next;
}
curr = curr->next;
counter++;
}
int temp = left->val;
left->val = right->val;
right->val = temp;
return head;
}
};
```
​
* if count is 2 the node is on 3rd position
* now for count >k value i am using the technique that if count =k then it wil notpass any if condition
* if >k then we will start moving right pointer for kth from end.
​
​
​