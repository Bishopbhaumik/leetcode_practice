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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL)
            return NULL;
            if(head->next==NULL)
            return head;
        
        int count =0;
        ListNode* ptr=head;
        
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        
        int len=k%count;
        
        for(int i=0;i<len;i++)
        {
            ListNode* curr=head;
            ListNode* prev=NULL;
            
            while(curr->next!=NULL)
            {
                prev=curr;
                curr=curr->next;
            }
            
            curr->next=head;
            head=curr;
            prev->next=NULL;
        }
        return head;
    }
};