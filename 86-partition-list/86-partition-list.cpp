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
    ListNode* partition(ListNode* head, int x) {
       
        ListNode* smaller=new ListNode(),*grater=new ListNode();
        
          ListNode *smallh=smaller, *largeh=grater;
        
         while(head != NULL) 
         {
            if(head->val < x) 
            {
                smallh->next =head;
                smallh= smallh->next;
            }
            else 
            {
                largeh->next=head;
                largeh=largeh->next;
            }
            head=head->next;
        }
        largeh->next = NULL;
        smallh->next = grater->next;
        
        return smaller->next;
        
        
    }
};