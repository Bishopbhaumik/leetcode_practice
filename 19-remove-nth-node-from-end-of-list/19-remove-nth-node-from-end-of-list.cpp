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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* right=head;
        
        ListNode* cur=head;
        
          for(int i=0;i<n;i++)
               cur=cur->next;
        
        if(cur==NULL)
        {
            //  head=cur->next;
            // return head;
            return cur=right->next;
        }
   
        
        while(1)
        {
            if(cur->next==NULL)
                break;
            cur=cur->next;
            right=right->next;
        }
        
        right->next=right->next->next;
        
        return head;
    }
};