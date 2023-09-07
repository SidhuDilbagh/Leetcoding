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
class Solution
{
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        int n=right-left;
        if(n)
        {
            ListNode *ptr=new ListNode(-1,head);
            head=ptr;
            while(--left>0)
                ptr=ptr->next;
            ListNode *rightEnd=ptr->next,*newLeft=rightEnd->next,*nextLeft=ptr->next;
            while(n--)
            {
                ptr->next=newLeft;
                rightEnd->next=newLeft->next;
                newLeft->next=nextLeft;
                newLeft=rightEnd->next;
                nextLeft=ptr->next;
            }
            head=head->next;
        }
        return head;
    }
};