class Solution {
    ListNode* reverse(ListNode *head){
        ListNode* newHead=NULL;
        while(head){
            ListNode *temp=head->next;
            head->next=newHead;
            newHead=head;
            head=temp;
        }
        return newHead;
    }
public:
    void reorderList(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *temp=slow->next;
        slow->next=NULL;
        temp=reverse(temp);
        slow=head;
        while(temp){
            ListNode *t=slow->next;
            slow->next=temp;
            temp=temp->next;
            slow=slow->next;
            slow->next=t;
            slow=slow->next;
        }
    }
};
