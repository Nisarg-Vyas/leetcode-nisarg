/*
- Good Practice question for Linked Lists
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr=head;
        ListNode* prev=head;
        while(curr!=nullptr){
            if(curr==head){
                if(curr->val==val){
                    head=curr->next;
                    prev=head;
                    curr=head;
                    continue;
                }
                else{
                    curr=curr->next;
                }
            }
            else{
                if(curr->val==val){
                prev->next=curr->next;
                curr=curr->next;
                }
                else{
                    prev=curr;
                    curr=curr->next;
                }
            }
        }
        return head;
    }
};