class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ptr=head,*zero=head;
        while(ptr){
            if(ptr->val==0 && ptr->next){
                zero=ptr;
                ptr=ptr->next;
            }
            else{
                zero->val+=ptr->val;
                ListNode *t=ptr;
                ptr=ptr->next;
                zero->next=ptr;
                delete t;
            }
        }
        return head;
    }
};
