class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<int> mono;
        ListNode* ptr=head;
        while(ptr){
            while(!mono.empty() && ptr->val>mono.top()) mono.pop();
            mono.push(ptr->val);
            ptr=ptr->next;
        }
        ListNode *newHead=NULL;
        while(!mono.empty()){
            ptr=new ListNode(mono.top(),newHead);
            newHead=ptr;
            mono.pop();
        }
        return newHead;
    }
};
