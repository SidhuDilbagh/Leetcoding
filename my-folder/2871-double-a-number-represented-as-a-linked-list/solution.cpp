class Solution {
    bool doubleVal(ListNode *node){
        if(node){
            int temp=2*node->val+doubleVal(node->next);
            node->val=temp%10;
            return temp/10;
        }
        return 0;
    }
public:
    ListNode* doubleIt(ListNode* head) {
        if(doubleVal(head)){
            ListNode *temp=new ListNode(1,head);
            head=temp;
        }
        return head;
    }
};
