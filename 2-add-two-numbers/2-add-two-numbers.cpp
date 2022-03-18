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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int carry = 0;
		ListNode* curr1 = l1;
		ListNode* curr2 = l2;
		ListNode head;
		ListNode* res = &head;

		while(curr1 && curr2)
		{
			int total = curr1->val + curr2->val + carry;
			res->next = new ListNode(total%10);
			res = res->next;
			carry = total/10;

			curr2 = curr2->next;
			curr1 = curr1->next;
		}


		res->next = curr1? curr1 : curr2;

		while(carry)
		{
			if(res->next == NULL) res->next = new ListNode();
			int total = res->next->val + carry;
			res->next->val = total %10;
			carry = total/10;
			res = res->next;
		}


		return head.next;
	}
};