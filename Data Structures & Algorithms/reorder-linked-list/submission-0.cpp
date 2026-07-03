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
    ListNode* findMiddle(ListNode*head){
        ListNode*slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode*reverse(ListNode*t2){
        ListNode*prev=NULL;
        while(t2!=NULL){
            ListNode*front=t2->next;
            t2->next=prev;
            prev=t2;
            t2=front;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode*t1=head;
        ListNode*mid=findMiddle(head);
        ListNode*t2=mid->next;
        mid->next=NULL;
        ListNode* p=reverse(t2);
        
       while(t1!=NULL && p!=NULL){ 
        ListNode*n1=t1->next;
        ListNode*n2=p->next;
        t1->next=p;
        p->next=n1;

        t1=n1;
        p=n2;}
    }
    
};
