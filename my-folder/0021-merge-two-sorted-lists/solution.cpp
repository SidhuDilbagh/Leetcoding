class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        else if(!list2) return list1;

        ListNode *head=NULL;
        if(list1->val < list2->val) {
            head=list1;
            list1=list1->next;
        }
        else{
            head=list2;
            list2=list2->next;
        }
        ListNode *ptr=head;
        while(list1 && list2){
            if(list1->val < list2->val) {
            ptr->next=list1;
            list1=list1->next;
        }
        else{
            ptr->next=list2;
            list2=list2->next;
        }ptr=ptr->next;
        }
        if(list1) ptr->next=list1;
        else ptr->next=list2;
        return head;
    }
};
