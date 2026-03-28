/*
learnt:
- Clever way to use ll
- insert ll from head and make the recently added ll as head
*/

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
    ListNode* reverseList(ListNode* head) {
        ListNode* list=nullptr;
        ListNode* t=head;

        while(t!=nullptr){
            ListNode* u=new ListNode(t->val);
            u->next=list;
            list=u;
            t=t->next;
        }

        return list;
    }
};