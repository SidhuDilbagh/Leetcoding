class Solution {
public:
    Node* flatten(Node* head) {
        Node *ptr=head;
        while(ptr){
            if(ptr->child){
                Node *temp=ptr->child;
                while(temp->next){
                    temp=temp->next;
                }
                temp->next=ptr->next;
                if(temp->next) temp->next->prev=temp;
                ptr->next=ptr->child;
                if(ptr->next) ptr->next->prev=ptr;
                ptr->child=NULL;
            }
            ptr=ptr->next;
        }
        return head;
    }
};
