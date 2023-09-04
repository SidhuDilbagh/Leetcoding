/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) 
{
    struct ListNode *ptr1=head,*ptr2=head;
    if(ptr1!=NULL)
    while(1)
    {
        ptr1=ptr1->next;
        if(ptr2!=NULL && ptr2->next!=NULL)
        ptr2=ptr2->next->next;
        else
        return false;
        if(ptr1==ptr2)
        return true;
    }
    return false;
}