/*
learnt:
- how to use ll
- more practice on ll
- we need a seperate temp variable for making full ll
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* sum=new ListNode(-1);
        ListNode* curr=sum;
        int c=0,s=0;

        while(t1!=nullptr && t2!=nullptr){
            s=t1->val+t2->val;
            curr->next=new ListNode((s+c)%10);
            c=(s+c)/10;
            t1=t1->next;t2=t2->next;
            curr=curr->next;
        }

        if(t1==nullptr){
            while(t2!=nullptr){
                curr->next=new ListNode(((t2->val)+c)%10);
                c=(t2->val+c)/10;
                t2=t2->next;
                curr=curr->next;
            }
        }
        else if(t2==nullptr){
            while(t1!=nullptr){
                curr->next=new ListNode(((t1->val)+c)%10);
                c=(t1->val+c)/10;
                t1=t1->next;
                curr=curr->next;
            }
        }

        if (c > 0) curr->next = new ListNode(c); 
        return sum->next;
    }
};