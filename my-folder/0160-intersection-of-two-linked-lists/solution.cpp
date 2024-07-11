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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA=0,countB=0;
        ListNode *ptr=headA;
        while(ptr){
            ptr=ptr->next;
            countA++;
        }
        ptr=headB;
        while(ptr){
            ptr=ptr->next;
            countB++;
        }
        int count;
        ListNode *p;
        if(countA>countB){
            ptr=headA;
            count=countA-countB;
            p=headB;
        }
        else{
            ptr=headB;
            count=countB-countA;
            p=headA;
        }
        while(count--){
            ptr=ptr->next;
        }
        while(ptr!=p){
            ptr=ptr->next;
            p=p->next;
        }
        return ptr;
    }
};
