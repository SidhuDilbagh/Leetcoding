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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0);
        ListNode *p1=l1;
        ListNode *p2=l2;
        ListNode *p=head;
        int carry=0;
        while(1){
            int temp=0;
            if(p1) {
                temp+=p1->val;
                p1=p1->next;
            }
            if(p2) {
                temp+=p2->val;
                p2=p2->next;
            }
            temp+=carry;
            carry=temp/10;
            temp%=10;
            p->next=new ListNode(temp);
            p=p->next;
            if(!p1 && !p2 && !carry) break;
        }
        p=head;
        head=head->next;
        delete p;
        return head;
    }
};
