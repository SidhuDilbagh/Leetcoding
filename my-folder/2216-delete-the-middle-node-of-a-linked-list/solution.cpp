class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow=new ListNode(0,head);
        head=slow;
        ListNode *fast=head;
        while(1){
            if(fast->next){
                if(fast->next->next) {
                    fast=fast->next->next;
                }
                else break;
                slow=slow->next;
            }
            else break;
        }
        ListNode *t=slow->next;
        slow->next=t->next;
        delete t;
        ListNode *t1=head;
        head=head->next;
        delete t1;
        return head;     
    }
};
