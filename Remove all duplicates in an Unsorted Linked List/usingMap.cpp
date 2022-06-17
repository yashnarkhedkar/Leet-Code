Node* approach2(Node* &head){
        unordered_map<int,int> m;
        
        Node *curr=head;
        Node *prev=curr;
        m[curr->data]=1;
        curr=curr->next;
        
        while(curr != NULL)
        {
            if(m[curr->data]){
                prev -> next = curr -> next;
                free(curr);
                curr = curr -> next;
            }
            else{
                m[curr->data]=1;
                prev=curr;
            }
            curr=prev->next;
        }
        return head;
    }
