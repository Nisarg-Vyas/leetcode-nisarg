/*
- pretty easy question
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* list=nullptr;
        ListNode* temp=head;

        while(head!=nullptr){
            if(list->val==temp->val){
               temp=temp->next;
            }else{
                ListNode* u=new ListNode(temp->val);
                list->next=nullptr;
            }
        }
    }
};