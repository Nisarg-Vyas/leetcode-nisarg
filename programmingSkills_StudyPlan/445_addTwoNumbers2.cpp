/*
learnt;
- using stack to cleverly solve this question
- make a ll using insersion from head
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
        stack<int> s1,s2;

        ListNode* temp=l1;
        while(temp!=nullptr){
            s1.push(temp->val);
            temp=temp->next;
        }

        temp=l2;
        while(temp!=nullptr){
            s2.push(temp->val);
            temp=temp->next;
        }

        int carry=0;
        ListNode* head=nullptr;
        while(!s1.empty() || !s2.empty() || carry){
            int sum=carry;
            if(s1.empty()==false){
                sum+=s1.top();
                s1.pop();
            }
            if(s2.empty()==false){
                sum+=s2.top();
                s2.pop();
            }

            ListNode* node=new ListNode(sum%10);
            node->next=head;
            head=node;
            carry=sum/10;
        }

        return head;
    }
};