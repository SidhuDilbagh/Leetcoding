class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode *even=new ListNode();
        ListNode *ptr=head,*eptr=even;
        while(ptr->next){
            eptr->next=ptr->next;
            ptr->next=eptr->next->next;
            eptr=eptr->next;
            if(ptr->next)
            ptr=ptr->next;
        }
        eptr->next=NULL;
        ptr->next=even->next;
        delete even;
        return head;
    }
};
