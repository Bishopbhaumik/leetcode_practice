/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
         if(k==0) return head;
    
    ListNode *temp=head;   
    for(int i=0;i<k;i++){
        if(temp==NULL) return head;
        temp=temp->next;
    }
    
    ListNode *curr=head, *prev=NULL, *n;  
    int count=k;
    
    while(curr!=NULL && count>0){
        n=curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
        count--;
    }
    
    if(n!=NULL){  
        head->next=reverseKGroup(n,k);
    }
    
    return prev;
    }
};