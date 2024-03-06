/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head,*fast=head;
        if(head){
            do{
                if(fast->next && fast->next->next) fast=fast->next->next;
                else return NULL;
                slow=slow->next;
            }while(slow!=fast);
            slow=head;
            while(slow!=fast){
                fast=fast->next;
                slow=slow->next;
            }
            return fast;
        }
        return NULL;
    }
};
