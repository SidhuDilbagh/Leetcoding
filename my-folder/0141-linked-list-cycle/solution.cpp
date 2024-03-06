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
    bool hasCycle(ListNode *head) {
        ListNode *slow=head,*fast=head;
        if(head){
            do{
                if(fast->next && fast->next->next) fast=fast->next->next;
                else return 0;
                slow=slow->next;
            }while(slow!=fast);
            return 1;
        }
        return 0;
    }
};
