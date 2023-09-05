/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution 
{
public:
    Node* copyRandomList(Node* head) 
    {
        map<Node *,Node *> mapStore;
        Node* ptr=head,*newHead=NULL,*newPtr=NULL;
        while(ptr!=NULL)
        {
            if(!newHead)
            {
                newPtr=new Node(ptr->val);
                newHead=newPtr;
            }
            else
            {
                newPtr->next=new Node(ptr->val);
                newPtr=newPtr->next;
            }
            mapStore[ptr]=newPtr;
            ptr=ptr->next;
        }
        newPtr=newHead;
        map<Node*, Node*>::iterator itr,itratr;
        for (itr = mapStore.begin(); itr != mapStore.end(); ++itr)
        {
            map<Node*, Node*>::iterator itratr;
            Node *p1,*p2,*p3;
            p1=itr->first;
            p2=itr->second;
            if(p1->random)
            {
                itratr=mapStore.find(p1->random);
                p2->random=itratr->second;
            }
        }
        return newHead;    
    }
};