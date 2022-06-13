Node* reverseDLL(Node * head)
{
    //Your code here   
    Node* c = head;
    Node* l = c -> prev;
    Node* r = c -> next;
    
    while(c -> next != NULL){
        Node* p = c -> next;
        c->next = l;
        c->prev = r;
        l = p -> prev;
        r = p -> next;
        c = p;
    }
    
    c -> prev = r;
    c -> next = l;
    
    return c;
}
