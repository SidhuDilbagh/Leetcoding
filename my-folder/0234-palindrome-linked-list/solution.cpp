class Solution {
    ListNode* reverse(ListNode* head,ListNode *end){
        ListNode *newHead=NULL,*temp=NULL;
        while(head!=end){
            temp=head->next;
            head->next=newHead;
            newHead=head;
            head=temp;
        }
        ListNode *t=newHead;
        return newHead;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        bool isOdd=false;
        while(1){
            if(fast->next){
                fast=fast->next;
                slow=slow->next;
                if(fast->next){
                    fast=fast->next;
                }
                else{
                    break;
                }
            }
            else {
                isOdd=true;
                break;
            }
        }
        ListNode *start1=slow;
        ListNode *start2=reverse(head,slow);
        if(isOdd && start1) start1=start1->next;
        while(start1){
            if(start1->val!=start2->val) return false;
            start1=start1->next;
            start2=start2->next;
        }
        return true;
    }
};
