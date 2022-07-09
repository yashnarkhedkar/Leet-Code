
Node* pairsSwap(Node *head)
{
    Node* temp = new Node(0);
    temp -> next = head;
    Node* curr = temp;
    
    while(curr -> next != NULL && curr -> next -> next != NULL){
        Node* FN = curr -> next;
        Node* SN = curr -> next -> next;
        
        FN -> next = SN -> next;
        curr -> next = SN;
        SN -> next = FN;
        curr = curr -> next -> next;
    }
    
    return temp -> next;
}
