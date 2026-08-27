/*
- Learnt:
  - Good Logic, really clever
  - Make circular LL and then return as required
/*

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0){
            return head;
        }

        ListNode* temp=head;
        int len=1;
        while(temp->next!=nullptr){
            len++;
            temp=temp->next;
        }
        k=k%len;

        ListNode* tail=temp;
        temp->next=head;

        temp=head;
        int i=1;
        while(i!=len-k){
            i++;
            temp=temp->next;
        }
        tail=temp;
        temp=temp->next;
        head=temp;
        tail->next=nullptr;

        return head;
    }
};