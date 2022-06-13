Node* reverse1(struct Node* head){

    //Base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* newhead = reverse1(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return newhead;
}
