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
    int pairSum(ListNode* head) {
        int maximum=-1;
        stack<int> s;
        ListNode *slow=head,*fast=head;
        while(fast){
            fast=fast->next->next;
            s.push(slow->val);
            slow=slow->next;
        }
        while(!s.empty()){
            maximum=max(maximum,slow->val+s.top());
            s.pop();
            slow=slow->next;
        }
        return maximum;
    }
};
