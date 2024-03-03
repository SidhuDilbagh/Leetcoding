/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head;
        ListNode* del = NULL;
        while (ptr = ptr->next) {
            n--;
            if (!n) del = head;
            else if (n < 0) del = del->next;
        }
        if (del && del->next){ 
            ListNode* t=del->next;
            del->next = del->next->next;
            delete t;
        }
        else if(n==1) {
            ListNode* t=head;
            head=head->next;
            delete t;
        }
        return head;
    }
};