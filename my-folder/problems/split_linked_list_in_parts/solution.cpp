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
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        int count=0;
        vector<ListNode*> v1;
        ListNode* ptr=head;
        while(ptr)
        {
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        int n1=count/k,n2=count%k;
        while(k--)
        {
            v1.push_back(ptr);
            int n=n1;
            if(n2)
            {
                n++;
                n2--;
            }
            while(n--)
            {
                if(!n)
                {
                    ListNode *temp=ptr->next;
                    ptr->next=NULL;
                    ptr=temp;
                }
                else
                ptr=ptr->next;
            }
        }
        return v1;
    }
};