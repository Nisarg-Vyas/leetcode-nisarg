/*
learnt:
- How to use linked lists fluently
  - How to initialize ll
  - How to use temporary node to traverse ll
  - How to make a new ll
  - usage of . and ->
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* list3=new ListNode(-1);
        ListNode* current=list3;
        
        while(t1!=nullptr && t2!=nullptr){
            if(t1->val<=t2->val){
                current->next=new ListNode(t1->val);
                t1=t1->next;
            }
            else{
                current->next=new ListNode(t2->val);
                t2=t2->next;
            }
            current=current->next;
        }

        while(t1!=nullptr){
            current->next=new ListNode(t1->val);
            t1=t1->next;
            current=current->next;
        }
        while(t2!=nullptr){
            current->next=new ListNode(t2->val);
            t2=t2->next;
            current=current->next;
        }

        return list3->next;
    }
};