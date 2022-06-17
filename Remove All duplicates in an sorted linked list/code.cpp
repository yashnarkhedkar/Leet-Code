Node * uniqueSortedList(Node * head) {
    Node* curr = head;
    
    while(curr != NULL && curr -> next != NULL){
        if(curr -> data == curr -> next -> data){
            Node* next_next = curr -> next -> next;
            delete (curr -> next);
            curr -> next = next_next;
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
}
