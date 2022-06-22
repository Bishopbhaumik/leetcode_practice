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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
		ListNode *n, *t;
		for(auto &i:lists)
			while(i != NULL){
				v.push_back(i->val);
				i = i->next;
			}
		sort(v.begin(), v.end(), greater<int>());
		for (auto it = v.begin(); it != v.end(); it++) 
			if(it == v.begin())
				n = new ListNode(*it);
			else{
				t = new ListNode(*it, n);
				n = t;
			}
		return n;
    }
};