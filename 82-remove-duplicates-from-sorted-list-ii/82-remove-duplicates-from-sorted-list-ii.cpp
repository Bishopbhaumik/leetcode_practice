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
    ListNode* deleteDuplicates(ListNode* head) {
        
       map<int,int>mp;
        ListNode* curr=head;
        while(curr!=NULL)
        {      
            mp[curr->val]++;            
            curr=curr->next;     
        }
           
        ListNode* newhead=new ListNode(0);
        head=newhead;   
        for(auto x : mp){     
            if(x.second==1){          
            head->next=new ListNode(x.first);        
            head=head->next;   
            }
        } 
        newhead=newhead->next;
        return newhead;
    }
};