class Solution {
    ListNode* reverse(ListNode* head){
        ListNode *ptr=head,*newHead=NULL;
        while(head){
            ListNode *t=head->next;
            head->next=newHead;
            newHead=head;
            head=t;
        }
        return newHead;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        ListNode *ptr=head;
        int maximum=ptr->val;
        while(ptr){
            if(ptr->next && ptr->next->val<maximum){
                ListNode *temp=ptr->next;
                ptr->next=temp->next;
                delete temp;
            }
            else{
                ptr=ptr->next;
            }
            if(ptr) maximum=max(maximum,ptr->val);
        }
        // ListNode *p=head;while(p){cout<<p->val<<"     ";p=p->next;}
        return reverse(head);        
    }
};
