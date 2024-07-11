class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=NULL;
        stack<int> s1,s2;
        ListNode* ptr=l1;
        while(ptr){
            s1.push(ptr->val);
            ptr=ptr->next;
        }
        ptr=l2;
        while(ptr){
            s2.push(ptr->val);
            ptr=ptr->next;
        }
        int carry=0;
        while(!s1.empty() && !s2.empty()){
            int num=s1.top()+s2.top()+carry;
            ListNode* temp=new ListNode(num%10,head);
            head=temp;
            carry=num/10;
            s1.pop();
            s2.pop();
        }
        while(!s1.empty()){
            int num=s1.top()+carry;
            ListNode* temp=new ListNode(num%10,head);
            head=temp;
            carry=num/10;
            s1.pop();
        }
        while(!s2.empty()){
            int num=s2.top()+carry;
            ListNode* temp=new ListNode(num%10,head);
            head=temp;
            carry=num/10;
            s2.pop();
        }
        if(carry){
            ListNode* temp=new ListNode(carry,head);
            head=temp;
        }
        return head;
    }
};
